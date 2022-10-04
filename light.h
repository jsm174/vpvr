// Light.h: Definition of the Light class
//
//////////////////////////////////////////////////////////////////////
#pragma once
#if !defined(AFX_LIGHT_H__7445FDB1_1FBE_4975_9AB6_367E6D16098F__INCLUDED_)
#define AFX_LIGHT_H__7445FDB1_1FBE_4975_9AB6_367E6D16098F__INCLUDED_

#include "resource.h"       // main symbols
#include "RenderDevice.h"

#define NUM_RGB_BLINK_PATTERN 33 //!! remove

class LightData final : public BaseProperty
{
public:
   Vertex2D m_vCenter;
   float m_falloff;
   float m_falloff_power;
   float m_intensity;
   float m_intensity_scale;
   float m_fadeSpeedUp;
   float m_fadeSpeedDown;
   U32   m_time_msec;
   float m_currentIntensity;
   float m_transmissionScale;
   float m_modulate_vs_add;
   float m_meshRadius;
   LightState m_state;
   COLORREF m_color;
   COLORREF m_color2; // color full
   TimerDataRoot m_tdr;
   Shape m_shape;
   //float m_borderwidth;
   //COLORREF m_bordercolor;
   string m_szSurface;

   float m_depthBias; // for determining depth sorting
   float m_bulbHaloHeight;

   bool m_imageMode;  // true = pass through/no lighting, false = use surface material
   bool m_BulbLight;
   bool m_showBulbMesh;
   bool m_showReflectionOnBall;
   bool m_staticBulbMesh;
};

/////////////////////////////////////////////////////////////////////////////
// Light

class Light :
   public IDispatchImpl<ILight, &IID_ILight, &LIBID_VPinballLib>,
   //public ISupportErrorInfo,
   public CComObjectRoot,
   public CComCoClass<Light, &CLSID_Light>,
   public EventProxy<Light, &DIID_ILightEvents>,
   public IConnectionPointContainerImpl<Light>,
   public IProvideClassInfo2Impl<&CLSID_Light, &DIID_ILightEvents, &LIBID_VPinballLib>,
   public ISelect,
   public IEditable,
   public Hitable,
   public IHaveDragPoints,
   public IScriptable,
   public IFireEvents,
   public IPerPropertyBrowsing // Ability to fill in dropdown in property browser
{
#ifdef __APPLE__
public:
   static robin_hood::unordered_map<wstring, int> m_nameIDMap;
   STDMETHOD(GetIDsOfNames)(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid,DISPID* rgDispId);
   STDMETHOD(Invoke)(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr);
   static robin_hood::unordered_map<int, wstring> m_idNameMap;
   virtual HRESULT FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) override;
#endif
public:
   Light();
   virtual ~Light();

   BEGIN_COM_MAP(Light)
      COM_INTERFACE_ENTRY(IDispatch)
      COM_INTERFACE_ENTRY(ILight)
      //COM_INTERFACE_ENTRY(ISupportErrorInfo)
      COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
      COM_INTERFACE_ENTRY(IPerPropertyBrowsing)
      COM_INTERFACE_ENTRY(IProvideClassInfo)
      COM_INTERFACE_ENTRY(IProvideClassInfo2)
   END_COM_MAP()
   //DECLARE_NOT_AGGREGATABLE(Light)
   // Remove the comment from the line above if you don't want your object to
   // support aggregation.

   BEGIN_CONNECTION_POINT_MAP(Light)
      CONNECTION_POINT_ENTRY(DIID_ILightEvents)
   END_CONNECTION_POINT_MAP()

   STANDARD_EDITABLE_DECLARES(Light, eItemLight, LIGHT, 3)

   DECLARE_REGISTRY_RESOURCEID(IDR_LIGHT)
   // ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

   void RenderBlueprint(Sur *psur, const bool solid) final;

   void MoveOffset(const float dx, const float dy) final;
   void SetObjectPos() final;

   void ClearForOverwrite() final;

   void EditMenu(CMenu &menu) final;
   void DoCommand(int icmd, int x, int y) final;

   void FlipY(const Vertex2D& pvCenter) final;
   void FlipX(const Vertex2D& pvCenter) final;
   void Rotate(const float ang, const Vertex2D& pvCenter, const bool useElementCenter) final;
   void Scale(const float scalex, const float scaley, const Vertex2D& pvCenter, const bool useElementCenter) final;
   void Translate(const Vertex2D &pvOffset) final;

   // DragPoints
   Vertex2D GetCenter() const final { return GetPointCenter(); }
   void PutCenter(const Vertex2D& pv) final { PutPointCenter(pv); }
   Vertex2D GetPointCenter() const final;
   void PutPointCenter(const Vertex2D& pv) final;

   bool IsTransparent() const final { return m_d.m_BulbLight || (m_surfaceMaterial && m_surfaceMaterial->m_bOpacityActive); }
   bool RenderToLightBuffer() const final { return m_d.m_BulbLight && (m_d.m_transmissionScale > 0.f) && !m_backglass; }
   float GetDepth(const Vertex3Ds& viewDir) const final;
   unsigned long long GetMaterialID() const final { return m_surfaceMaterial ? m_surfaceMaterial->hash() : 64 - 2; } //!! 2 = some constant number
   unsigned long long GetImageID() const final { return (m_d.m_BulbLight ? 0 : (unsigned long long)(m_ptable->GetImage(m_d.m_szImage))); }
   ItemTypeEnum HitableGetItemType() const final { return eItemLight; }
   void AddPoint(int x, int y, const bool smooth) final;

   void WriteRegDefaults() final;

   STDMETHOD(GetInPlayState)(/*[out, retval]*/ LightState* pVal);
   STDMETHOD(GetInPlayStateBool)(/*[out, retval]*/ VARIANT_BOOL* pVal);
   STDMETHOD(GetInPlayIntensity)(/*[out, retval]*/ float *pVal);

   void PrepareMoversCustom();
   void UpdateCustomMoverVBuffer();

   void FreeBuffers();

   void InitShape();
   void setInPlayState(const LightState newVal);

   void RenderOutline(Sur *const psur);

   void setLightState(const LightState newVal);
   LightState getLightState() const;
   void RenderBulbMesh();

   LightData m_d;

   LightState m_inPlayState;
   float m_surfaceHeight;
   bool  m_lockedByLS;
   string m_rgblinkpattern;
   int m_blinkinterval;

private:

   class LightCenter final : public ISelect
   {
   public:
      LightCenter(Light *plight) : m_plight(plight) { }

      HRESULT GetTypeName(BSTR *pVal) final { return m_plight->GetTypeName(pVal); }
      IDispatch *GetDispatch() final { return m_plight->GetDispatch(); }
      const IDispatch *GetDispatch() const final { return m_plight->GetDispatch(); }

      void Delete() final { m_plight->Delete(); }
      void Uncreate() final { m_plight->Uncreate(); }

      int GetSelectLevel() const final { return (m_plight->m_d.m_shape == ShapeCircle) ? 1 : 2; } // Don't select light bulb twice if we have drag points

      IEditable *GetIEditable() final { return (IEditable *)m_plight; }
      const IEditable *GetIEditable() const final { return (const IEditable *)m_plight; }

      PinTable *GetPTable() final { return m_plight->GetPTable(); }
      const PinTable *GetPTable() const final { return m_plight->GetPTable(); }

      bool LoadToken(const int id, BiffReader * const pbr) final { return true; }

      Vertex2D GetCenter() const final { return m_plight->m_d.m_vCenter; }
      void PutCenter(const Vertex2D& pv) final { m_plight->m_d.m_vCenter = pv; }

      void MoveOffset(const float dx, const float dy) final {
          m_plight->m_d.m_vCenter.x += dx;
          m_plight->m_d.m_vCenter.y += dy;
      }

      ItemTypeEnum GetItemType() const final { return eItemLightCenter; }

   private:
      Light *m_plight;
   };


   PinTable *m_ptable;

   Material *m_surfaceMaterial;
   Texture  *m_surfaceTexture;

   LightCenter m_lightcenter;

   unsigned int m_customMoverVertexNum;
   unsigned int m_customMoverIndexNum;
   VertexBuffer *m_customMoverVBuffer;
   IndexBuffer  *m_customMoverIBuffer;
   VertexBuffer *m_bulbLightVBuffer;
   IndexBuffer  *m_bulbLightIndexBuffer;
   VertexBuffer *m_bulbSocketVBuffer;
   IndexBuffer  *m_bulbSocketIndexBuffer;
   PropertyPane *m_propVisual;

   vector<RenderVertex> m_vvertex;

   float m_initSurfaceHeight;
   float m_maxDist;
   bool  m_updateBulbLightHeight;

   bool  m_roundLight; // pre-VPX compatibility

public:
   STDMETHOD(get_Surface)(/*[out, retval]*/ BSTR *pVal);
   STDMETHOD(put_Surface)(/*[in]*/ BSTR newVal);
   STDMETHOD(get_Intensity)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_Intensity)(/*[in]*/ float newVal);
   STDMETHOD(get_TransmissionScale)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_TransmissionScale)(/*[in]*/ float newVal);
   STDMETHOD(get_IntensityScale)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_IntensityScale)(/*[in]*/ float newVal);
   STDMETHOD(get_BlinkInterval)(/*[out, retval]*/ long *pVal);
   STDMETHOD(put_BlinkInterval)(/*[in]*/ long newVal);
   STDMETHOD(get_BlinkPattern)(/*[out, retval]*/ BSTR *pVal);
   STDMETHOD(put_BlinkPattern)(/*[in]*/ BSTR newVal);
   STDMETHOD(get_Y)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_Y)(/*[in]*/ float newVal);
   STDMETHOD(get_X)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_X)(/*[in]*/ float newVal);
   STDMETHOD(get_Color)(/*[out, retval]*/ OLE_COLOR *pVal);
   STDMETHOD(put_Color)(/*[in]*/ OLE_COLOR newVal);
   STDMETHOD(get_ColorFull)(/*[out, retval]*/ OLE_COLOR *pVal);
   STDMETHOD(put_ColorFull)(/*[in]*/ OLE_COLOR newVal);
   STDMETHOD(get_State)(/*[out, retval]*/ LightState *pVal);
   STDMETHOD(put_State)(/*[in]*/ LightState newVal);
   STDMETHOD(get_Falloff)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_Falloff)(/*[in]*/ float newVal);
   STDMETHOD(get_FalloffPower)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_FalloffPower)(/*[in]*/ float newVal);
   STDMETHOD(get_Image)(/*[out, retval]*/ BSTR *pVal);
   STDMETHOD(put_Image)(/*[in]*/ BSTR newVal);
   STDMETHOD(get_ImageMode)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_ImageMode)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(get_DepthBias)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_DepthBias)(/*[in]*/ float newVal);
   STDMETHOD(get_FadeSpeedUp)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_FadeSpeedUp)(/*[in]*/ float newVal);
   STDMETHOD(get_FadeSpeedDown)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_FadeSpeedDown)(/*[in]*/ float newVal);
   STDMETHOD(get_Bulb)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_Bulb)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(get_ShowBulbMesh)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_ShowBulbMesh)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(get_StaticBulbMesh)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_StaticBulbMesh)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(get_ScaleBulbMesh)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_ScaleBulbMesh)(/*[in]*/ float newVal);
   STDMETHOD(get_BulbModulateVsAdd)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_BulbModulateVsAdd)(/*[in]*/ float newVal);
   STDMETHOD(get_BulbHaloHeight)(/*[out, retval]*/ float *pVal);
   STDMETHOD(put_BulbHaloHeight)(/*[in]*/ float newVal);
   STDMETHOD(get_ShowReflectionOnBall)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_ShowReflectionOnBall)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(get_Visible)(/*[out, retval]*/ VARIANT_BOOL *pVal);
   STDMETHOD(put_Visible)(/*[in]*/ VARIANT_BOOL newVal);
   STDMETHOD(Duration)(/*[in]*/long startState, /*[in]*/long newVal, /*[in]*/long endState);

   // was: class IBlink
private:
   int m_duration;
   int m_finalState;

   U32 m_timenextblink;
   U32 m_timerDurationEndTime;
   U32 m_iblinkframe;

   void UpdateBlinker(const U32 time_msec)
   {
      if (m_timenextblink <= time_msec)
      {
         m_iblinkframe++;
         if (m_iblinkframe >= m_rgblinkpattern.length() || m_rgblinkpattern[m_iblinkframe] == '\0')
            m_iblinkframe = 0;

         m_timenextblink += m_blinkinterval;
      }
   }

   void RestartBlinker(const U32 cur_time_msec)
   {
      m_iblinkframe = 0;
      m_timenextblink = cur_time_msec + m_blinkinterval;
      m_timerDurationEndTime = cur_time_msec + m_duration;
   }
};

#endif // !defined(AFX_LIGHT_H__7445FDB1_1FBE_4975_9AB6_367E6D16098F__INCLUDED_)
