#include "vpinmame.h"

class VPinMAMEController :
   public IDispatchImpl<IController, &IID_IController, &LIBID_VPinMAMELib>,
   public CComObjectRoot,
   public CComCoClass<VPinMAMEController, &CLSID_Controller>,
   public IProvideClassInfo2Impl<&CLSID_Controller, &DIID_IPlungerEvents, &LIBID_VPinMAMELib>
{
public:
   static robin_hood::unordered_map<wstring, int> m_nameIDMap;
   STDMETHOD(GetIDsOfNames)(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid,DISPID* rgDispId);
   STDMETHOD(Invoke)(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr);
};