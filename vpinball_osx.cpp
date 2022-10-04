#include "stdafx.h"

robin_hood::unordered_map<int, wstring> Collection::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_SurfaceEvents_Slingshot, wstring(L"_Slingshot") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_SpinnerEvents_Spin, wstring(L"_Spin") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Unhit, wstring(L"_Unhit") },
	robin_hood::pair<int, wstring> { DISPID_TargetEvents_Dropped, wstring(L"_Dropped") },
	robin_hood::pair<int, wstring> { DISPID_TargetEvents_Raised, wstring(L"_Raised") }
};

HRESULT Collection::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> PinTable::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_KeyDown, wstring(L"_KeyDown") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_KeyUp, wstring(L"_KeyUp") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_MusicDone, wstring(L"_MusicDone") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Exit, wstring(L"_Exit") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Paused, wstring(L"_Paused") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_UnPaused, wstring(L"_UnPaused") }
};

HRESULT PinTable::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Surface::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_SurfaceEvents_Slingshot, wstring(L"_Slingshot") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT Surface::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Flipper::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_EOS, wstring(L"_LimitEOS") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_BOS, wstring(L"_LimitBOS") },
	robin_hood::pair<int, wstring> { DISPID_FlipperEvents_Collide, wstring(L"_Collide") }
};

HRESULT Flipper::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Timer::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") }
};

HRESULT Timer::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Plunger::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_EOS, wstring(L"_LimitEOS") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_BOS, wstring(L"_LimitBOS") }
};

HRESULT Plunger::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Textbox::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT Textbox::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Bumper::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") }
};

HRESULT Bumper::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Trigger::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Unhit, wstring(L"_Unhit") }
};

HRESULT Trigger::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Light::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT Light::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Kicker::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Unhit, wstring(L"_Unhit") }
};

HRESULT Kicker::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Primitive::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") }
};

HRESULT Primitive::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> HitTarget::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_TargetEvents_Dropped, wstring(L"_Dropped") },
	robin_hood::pair<int, wstring> { DISPID_TargetEvents_Raised, wstring(L"_Raised") }
};

HRESULT HitTarget::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Gate::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_EOS, wstring(L"_LimitEOS") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_BOS, wstring(L"_LimitBOS") }
};

HRESULT Gate::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Spinner::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_SpinnerEvents_Spin, wstring(L"_Spin") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_EOS, wstring(L"_LimitEOS") },
	robin_hood::pair<int, wstring> { DISPID_LimitEvents_BOS, wstring(L"_LimitBOS") }
};

HRESULT Spinner::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Ramp::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") }
};

HRESULT Ramp::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Flasher::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT Flasher::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> Rubber::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_HitEvents_Hit, wstring(L"_Hit") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT Rubber::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> DispReel::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") }
};

HRESULT DispReel::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<int, wstring> LightSeq::m_idNameMap = {
	robin_hood::pair<int, wstring> { DISPID_GameEvents_Init, wstring(L"_Init") },
	robin_hood::pair<int, wstring> { DISPID_TimerEvents_Timer, wstring(L"_Timer") },
	robin_hood::pair<int, wstring> { DISPID_LightSeqEvents_PlayDone, wstring(L"_PlayDone") }
};

HRESULT LightSeq::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {
	CComPtr<IDispatch> disp;
	g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);

	const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);
	if (it != m_idNameMap.end()) {
		wstring name = wstring(m_wzName) + it->second;
		LPOLESTR fnNames = (LPOLESTR)name.c_str();

		DISPID tDispid;
		const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);

		if (hr == S_OK) {
			disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);
		}
	}

	return S_OK;
}

robin_hood::unordered_map<wstring, int> Collection::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"item"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"count"), 1001 }
};

STDMETHODIMP Collection::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Collection::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case DISPID_NEWENUM: {
			// line 1053: virtual /* [helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum(/* [retval][out] */ IUnknown **ppunk) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_UNKNOWN;
			return get__NewEnum(&V_UNKNOWN(pVarResult));
		}

		case 1000: {
			// line 1056: virtual /* [helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item(/* [in] */ long Index,/* [retval][out] */ IDispatch **ppobject) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			V_VT(pVarResult) = VT_DISPATCH;
			return get_Item(V_I4(&var0), (IDispatch**)&V_DISPATCH(pVarResult));
		}

		case 1001: {
			// line 1060: virtual /* [helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count(/* [retval][out] */ long *Count) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_Count((long*)&V_I4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> PinTable::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"glassheight"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"playfieldmaterial"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"backdropcolor"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"slopemax"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"slopemin"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"inclination"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"fieldofview"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"layback"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"rotation"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"scalex"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"scaley"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"scalez"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"xlatex"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"xlatey"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"xlatez"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"gravity"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"defaultscatter"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"nudgetime"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"plungernormalize"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"physicslooptime"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"plungerfilter"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"yieldtime"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"ballimage"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"backdropimage_dt"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"backdropimage_fs"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"backdropimage_fss"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"backdropimageapplynightday"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"colorgradeimage"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"width"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"maxseparation"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"zpd"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"offset"), 1036 },
	robin_hood::pair<wstring, int> { wstring(L"globalstereo3d"), 1037 },
	robin_hood::pair<wstring, int> { wstring(L"balldecalmode"), 1038 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1039 },
	robin_hood::pair<wstring, int> { wstring(L"filename"), 1040 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1041 },
	robin_hood::pair<wstring, int> { wstring(L"enableantialiasing"), 1042 },
	robin_hood::pair<wstring, int> { wstring(L"enableao"), 1043 },
	robin_hood::pair<wstring, int> { wstring(L"enablefxaa"), 1044 },
	robin_hood::pair<wstring, int> { wstring(L"enablessr"), 1045 },
	robin_hood::pair<wstring, int> { wstring(L"bloomstrength"), 1046 },
	robin_hood::pair<wstring, int> { wstring(L"ballfrontdecal"), 1047 },
	robin_hood::pair<wstring, int> { wstring(L"overridephysics"), 1048 },
	robin_hood::pair<wstring, int> { wstring(L"overridephysicsflippers"), 1049 },
	robin_hood::pair<wstring, int> { wstring(L"enableemreels"), 1050 },
	robin_hood::pair<wstring, int> { wstring(L"enabledecals"), 1051 },
	robin_hood::pair<wstring, int> { wstring(L"showdt"), 1052 },
	robin_hood::pair<wstring, int> { wstring(L"showfss"), 1053 },
	robin_hood::pair<wstring, int> { wstring(L"reflectelementsonplayfield"), 1054 },
	robin_hood::pair<wstring, int> { wstring(L"environmentimage"), 1055 },
	robin_hood::pair<wstring, int> { wstring(L"backglassmode"), 1056 },
	robin_hood::pair<wstring, int> { wstring(L"accelerometer"), 1057 },
	robin_hood::pair<wstring, int> { wstring(L"accelnormalmount"), 1058 },
	robin_hood::pair<wstring, int> { wstring(L"accelerometerangle"), 1059 },
	robin_hood::pair<wstring, int> { wstring(L"globaldifficulty"), 1060 },
	robin_hood::pair<wstring, int> { wstring(L"tableheight"), 1061 },
	robin_hood::pair<wstring, int> { wstring(L"deadzone"), 1062 },
	robin_hood::pair<wstring, int> { wstring(L"lightambient"), 1063 },
	robin_hood::pair<wstring, int> { wstring(L"light0emission"), 1064 },
	robin_hood::pair<wstring, int> { wstring(L"lightheight"), 1065 },
	robin_hood::pair<wstring, int> { wstring(L"lightrange"), 1066 },
	robin_hood::pair<wstring, int> { wstring(L"environmentemissionscale"), 1067 },
	robin_hood::pair<wstring, int> { wstring(L"lightemissionscale"), 1068 },
	robin_hood::pair<wstring, int> { wstring(L"aoscale"), 1069 },
	robin_hood::pair<wstring, int> { wstring(L"ssrscale"), 1070 },
	robin_hood::pair<wstring, int> { wstring(L"tablesoundvolume"), 1071 },
	robin_hood::pair<wstring, int> { wstring(L"tablemusicvolume"), 1072 },
	robin_hood::pair<wstring, int> { wstring(L"tableadaptivevsync"), 1073 },
	robin_hood::pair<wstring, int> { wstring(L"ballreflection"), 1074 },
	robin_hood::pair<wstring, int> { wstring(L"playfieldreflectionstrength"), 1075 },
	robin_hood::pair<wstring, int> { wstring(L"balltrail"), 1076 },
	robin_hood::pair<wstring, int> { wstring(L"trailstrength"), 1077 },
	robin_hood::pair<wstring, int> { wstring(L"ballplayfieldreflectionscale"), 1078 },
	robin_hood::pair<wstring, int> { wstring(L"defaultbulbintensityscale"), 1079 },
	robin_hood::pair<wstring, int> { wstring(L"detaillevel"), 1080 },
	robin_hood::pair<wstring, int> { wstring(L"nightday"), 1081 },
	robin_hood::pair<wstring, int> { wstring(L"globalalphaacc"), 1082 },
	robin_hood::pair<wstring, int> { wstring(L"globaldaynight"), 1083 },
	robin_hood::pair<wstring, int> { wstring(L"version"), 1084 },
	robin_hood::pair<wstring, int> { wstring(L"versionmajor"), 1085 },
	robin_hood::pair<wstring, int> { wstring(L"versionminor"), 1086 },
	robin_hood::pair<wstring, int> { wstring(L"versionrevision"), 1087 },
	robin_hood::pair<wstring, int> { wstring(L"vpbuildversion"), 1088 }
};

STDMETHODIMP PinTable::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP PinTable::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1337: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlassHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_GlassHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 1340: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlassHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_GlassHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1343: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlayfieldMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PlayfieldMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1346: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlayfieldMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PlayfieldMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1349: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackdropColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_BackdropColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 1352: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackdropColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_BackdropColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1355: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlopeMax(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SlopeMax(&V_R4(pVarResult));
			}

			case 1: {
				// line 1358: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlopeMax(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SlopeMax(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1361: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlopeMin(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SlopeMin(&V_R4(pVarResult));
			}

			case 1: {
				// line 1364: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlopeMin(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SlopeMin(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1367: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Inclination(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Inclination(&V_R4(pVarResult));
			}

			case 1: {
				// line 1370: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Inclination(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Inclination(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1373: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldOfView(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FieldOfView(&V_R4(pVarResult));
			}

			case 1: {
				// line 1376: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FieldOfView(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FieldOfView(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1379: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Layback(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Layback(&V_R4(pVarResult));
			}

			case 1: {
				// line 1382: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Layback(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Layback(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1385: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Rotation(&V_R4(pVarResult));
			}

			case 1: {
				// line 1388: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Rotation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1391: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scalex(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scalex(&V_R4(pVarResult));
			}

			case 1: {
				// line 1394: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scalex(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scalex(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1397: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scaley(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scaley(&V_R4(pVarResult));
			}

			case 1: {
				// line 1400: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scaley(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scaley(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1403: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scalez(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scalez(&V_R4(pVarResult));
			}

			case 1: {
				// line 1406: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scalez(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scalez(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1409: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Xlatex(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Xlatex(&V_R4(pVarResult));
			}

			case 1: {
				// line 1412: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Xlatex(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Xlatex(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1415: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Xlatey(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Xlatey(&V_R4(pVarResult));
			}

			case 1: {
				// line 1418: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Xlatey(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Xlatey(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1421: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Xlatez(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Xlatez(&V_R4(pVarResult));
			}

			case 1: {
				// line 1424: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Xlatez(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Xlatez(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1427: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Gravity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Gravity(&V_R4(pVarResult));
			}

			case 1: {
				// line 1430: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Gravity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Gravity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1433: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 1436: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1439: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 1442: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1445: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 1448: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1451: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 1454: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1457: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultScatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DefaultScatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 1460: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultScatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DefaultScatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1463: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NudgeTime(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_NudgeTime(&V_R4(pVarResult));
			}

			case 1: {
				// line 1466: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NudgeTime(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_NudgeTime(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1469: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlungerNormalize(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_PlungerNormalize(&V_I4(pVarResult));
			}

			case 1: {
				// line 1472: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlungerNormalize(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_PlungerNormalize(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1475: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsLoopTime(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_PhysicsLoopTime(&V_I4(pVarResult));
			}

			case 1: {
				// line 1478: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsLoopTime(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_PhysicsLoopTime(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1481: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlungerFilter(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_PlungerFilter(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1484: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlungerFilter(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_PlungerFilter(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1487: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YieldTime(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_YieldTime((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1490: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YieldTime(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_YieldTime(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1493: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallImage(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BallImage(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1496: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallImage(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BallImage(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1499: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackdropImage_DT(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BackdropImage_DT(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1502: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackdropImage_DT(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BackdropImage_DT(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1505: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackdropImage_FS(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BackdropImage_FS(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1508: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackdropImage_FS(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BackdropImage_FS(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1511: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackdropImage_FSS(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BackdropImage_FSS(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1514: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackdropImage_FSS(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BackdropImage_FSS(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1517: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackdropImageApplyNightDay(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_BackdropImageApplyNightDay(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1520: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackdropImageApplyNightDay(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_BackdropImageApplyNightDay(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1523: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorGradeImage(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_ColorGradeImage(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1526: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorGradeImage(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_ColorGradeImage(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1529: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Width(&V_R4(pVarResult));
			}

			case 1: {
				// line 1532: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Width(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1535: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 1538: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1034:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1541: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSeparation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_MaxSeparation(&V_R4(pVarResult));
			}

			case 1: {
				// line 1544: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSeparation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_MaxSeparation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1035:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1547: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZPD(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ZPD(&V_R4(pVarResult));
			}

			case 1: {
				// line 1550: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZPD(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ZPD(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1036:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1553: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Offset(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Offset(&V_R4(pVarResult));
			}

			case 1: {
				// line 1556: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Offset(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Offset(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1037:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1559: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalStereo3D(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_GlobalStereo3D(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1562: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalStereo3D(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_GlobalStereo3D(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1038:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1565: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallDecalMode(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_BallDecalMode(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1568: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallDecalMode(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_BallDecalMode(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1039:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1571: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1574: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1040: {
			// line 1577: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FileName(/* [retval][out] */ BSTR *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_BSTR;
			return get_FileName(&V_BSTR(pVarResult));
		}

		case 1041:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1580: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1583: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1042:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1586: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableAntialiasing(/* [retval][out] */ UserDefaultOnOff *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_EnableAntialiasing((UserDefaultOnOff*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1589: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableAntialiasing(/* [in] */ UserDefaultOnOff newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_EnableAntialiasing((UserDefaultOnOff)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1043:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1592: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableAO(/* [retval][out] */ UserDefaultOnOff *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_EnableAO((UserDefaultOnOff*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1595: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableAO(/* [in] */ UserDefaultOnOff newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_EnableAO((UserDefaultOnOff)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1044:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1598: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableFXAA(/* [retval][out] */ FXAASettings *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_EnableFXAA((FXAASettings*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1601: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableFXAA(/* [in] */ FXAASettings newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_EnableFXAA((FXAASettings)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1045:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1604: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableSSR(/* [retval][out] */ UserDefaultOnOff *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_EnableSSR((UserDefaultOnOff*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1607: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableSSR(/* [in] */ UserDefaultOnOff newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_EnableSSR((UserDefaultOnOff)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1046:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1610: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BloomStrength(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BloomStrength(&V_R4(pVarResult));
			}

			case 1: {
				// line 1613: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BloomStrength(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BloomStrength(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1047:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1616: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallFrontDecal(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BallFrontDecal(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1619: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallFrontDecal(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BallFrontDecal(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1048:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1622: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverridePhysics(/* [retval][out] */ PhysicsSet *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_OverridePhysics((PhysicsSet*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1625: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverridePhysics(/* [in] */ PhysicsSet newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_OverridePhysics((PhysicsSet)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1049:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1628: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverridePhysicsFlippers(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverridePhysicsFlippers(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1631: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverridePhysicsFlippers(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverridePhysicsFlippers(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1050:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1634: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableEMReels(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableEMReels(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1637: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableEMReels(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableEMReels(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1051:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1640: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableDecals(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableDecals(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1643: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableDecals(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableDecals(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1052:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1646: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowDT(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowDT(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1649: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowDT(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowDT(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1053:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1652: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowFSS(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowFSS(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1655: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowFSS(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowFSS(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1054:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1658: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectElementsOnPlayfield(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectElementsOnPlayfield(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1661: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectElementsOnPlayfield(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectElementsOnPlayfield(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1055:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1664: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnvironmentImage(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_EnvironmentImage(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 1667: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnvironmentImage(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_EnvironmentImage(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1056:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1670: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackglassMode(/* [retval][out] */ BackglassIndex *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_BackglassMode((BackglassIndex*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1673: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackglassMode(/* [in] */ BackglassIndex newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_BackglassMode((BackglassIndex)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1057:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1676: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Accelerometer(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Accelerometer(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1679: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Accelerometer(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Accelerometer(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1058:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1682: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AccelNormalMount(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_AccelNormalMount(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1685: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AccelNormalMount(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_AccelNormalMount(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1059:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1688: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AccelerometerAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AccelerometerAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 1691: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AccelerometerAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AccelerometerAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1060:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1694: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalDifficulty(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_GlobalDifficulty(&V_R4(pVarResult));
			}

			case 1: {
				// line 1697: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalDifficulty(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_GlobalDifficulty(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1061:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1700: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TableHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TableHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 1703: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TableHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TableHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1062:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1706: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeadZone(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_DeadZone(&V_I4(pVarResult));
			}

			case 1: {
				// line 1709: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeadZone(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_DeadZone(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1063:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1712: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightAmbient(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_LightAmbient(&V_UI4(pVarResult));
			}

			case 1: {
				// line 1715: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightAmbient(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_LightAmbient((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1064:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1718: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Light0Emission(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_Light0Emission(&V_UI4(pVarResult));
			}

			case 1: {
				// line 1721: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Light0Emission(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_Light0Emission((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1065:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1724: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_LightHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 1727: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_LightHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1066:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1730: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightRange(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_LightRange(&V_R4(pVarResult));
			}

			case 1: {
				// line 1733: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightRange(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_LightRange(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1067:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1736: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnvironmentEmissionScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EnvironmentEmissionScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1739: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnvironmentEmissionScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EnvironmentEmissionScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1068:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1742: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightEmissionScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_LightEmissionScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1745: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightEmissionScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_LightEmissionScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1069:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1748: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AOScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AOScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1751: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AOScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AOScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1070:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1754: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SSRScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SSRScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1757: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SSRScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SSRScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1071:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1760: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TableSoundVolume(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TableSoundVolume(&V_I4(pVarResult));
			}

			case 1: {
				// line 1763: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TableSoundVolume(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TableSoundVolume(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1072:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1766: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TableMusicVolume(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TableMusicVolume(&V_I4(pVarResult));
			}

			case 1: {
				// line 1769: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TableMusicVolume(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TableMusicVolume(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1073:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1772: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TableAdaptiveVSync(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TableAdaptiveVSync(&V_I4(pVarResult));
			}

			case 1: {
				// line 1775: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TableAdaptiveVSync(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TableAdaptiveVSync(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1074:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1778: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallReflection(/* [retval][out] */ UserDefaultOnOff *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_BallReflection((UserDefaultOnOff*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1781: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallReflection(/* [in] */ UserDefaultOnOff newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_BallReflection((UserDefaultOnOff)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1075:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1784: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlayfieldReflectionStrength(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_PlayfieldReflectionStrength(&V_I4(pVarResult));
			}

			case 1: {
				// line 1787: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlayfieldReflectionStrength(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_PlayfieldReflectionStrength(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1076:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1790: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallTrail(/* [retval][out] */ UserDefaultOnOff *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_BallTrail((UserDefaultOnOff*)&V_I4(pVarResult));
			}

			case 1: {
				// line 1793: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallTrail(/* [in] */ UserDefaultOnOff newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_BallTrail((UserDefaultOnOff)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1077:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1796: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TrailStrength(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TrailStrength(&V_I4(pVarResult));
			}

			case 1: {
				// line 1799: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TrailStrength(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TrailStrength(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1078:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1802: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BallPlayfieldReflectionScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BallPlayfieldReflectionScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1805: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BallPlayfieldReflectionScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BallPlayfieldReflectionScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1079:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1808: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultBulbIntensityScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DefaultBulbIntensityScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 1811: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultBulbIntensityScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DefaultBulbIntensityScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1080:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1814: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DetailLevel(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_DetailLevel(&V_I4(pVarResult));
			}

			case 1: {
				// line 1817: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DetailLevel(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_DetailLevel(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1081:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1820: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NightDay(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_NightDay(&V_I4(pVarResult));
			}

			case 1: {
				// line 1823: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NightDay(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_NightDay(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1082:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1826: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalAlphaAcc(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_GlobalAlphaAcc(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1829: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalAlphaAcc(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_GlobalAlphaAcc(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1083:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 1832: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalDayNight(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_GlobalDayNight(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 1835: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalDayNight(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_GlobalDayNight(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1084: {
			// line 1838: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_Version(&V_I4(pVarResult));
		}

		case 1085: {
			// line 1841: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionMajor(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionMajor(&V_I4(pVarResult));
		}

		case 1086: {
			// line 1844: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionMinor(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionMinor(&V_I4(pVarResult));
		}

		case 1087: {
			// line 1847: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionRevision(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionRevision(&V_I4(pVarResult));
		}

		case 1088: {
			// line 1850: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VPBuildVersion(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VPBuildVersion(&V_I4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> ScriptGlobalTable::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"playsound"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"leftflipperkey"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"rightflipperkey"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"lefttiltkey"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"righttiltkey"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"centertiltkey"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"plungerkey"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"playmusic"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"musicvolume"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"endmusic"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"startgamekey"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"userdirectory"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"getplayerhwnd"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"stopsound"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"savevalue"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"loadvalue"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"activeball"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"addcreditkey"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"addcreditkey2"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"gametime"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"systemtime"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"getcustomparam"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"gettextfile"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"beginmodal"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"endmodal"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"nudge"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"nudgegetcalibration"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"nudgesetcalibration"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"nudgesensorstatus"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"nudgetiltstatus"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"mechanicaltilt"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"leftmagnasave"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"rightmagnasave"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"exitgame"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"lockbarkey"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"fireknocker"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"quitplayer"), 1036 },
	robin_hood::pair<wstring, int> { wstring(L"showdt"), 1037 },
	robin_hood::pair<wstring, int> { wstring(L"showfss"), 1038 },
	robin_hood::pair<wstring, int> { wstring(L"nightday"), 1039 },
	robin_hood::pair<wstring, int> { wstring(L"getballs"), 1040 },
	robin_hood::pair<wstring, int> { wstring(L"getelements"), 1041 },
	robin_hood::pair<wstring, int> { wstring(L"getelementbyname"), 1042 },
	robin_hood::pair<wstring, int> { wstring(L"activetable"), 1043 },
	robin_hood::pair<wstring, int> { wstring(L"dmdwidth"), 1044 },
	robin_hood::pair<wstring, int> { wstring(L"dmdheight"), 1045 },
	robin_hood::pair<wstring, int> { wstring(L"dmdpixels"), 1046 },
	robin_hood::pair<wstring, int> { wstring(L"dmdcoloredpixels"), 1047 },
	robin_hood::pair<wstring, int> { wstring(L"version"), 1048 },
	robin_hood::pair<wstring, int> { wstring(L"versionmajor"), 1049 },
	robin_hood::pair<wstring, int> { wstring(L"versionminor"), 1050 },
	robin_hood::pair<wstring, int> { wstring(L"versionrevision"), 1051 },
	robin_hood::pair<wstring, int> { wstring(L"vpbuildversion"), 1052 },
	robin_hood::pair<wstring, int> { wstring(L"getserialdevices"), 1053 },
	robin_hood::pair<wstring, int> { wstring(L"openserial"), 1054 },
	robin_hood::pair<wstring, int> { wstring(L"closeserial"), 1055 },
	robin_hood::pair<wstring, int> { wstring(L"flushserial"), 1056 },
	robin_hood::pair<wstring, int> { wstring(L"setupserial"), 1057 },
	robin_hood::pair<wstring, int> { wstring(L"readserial"), 1058 },
	robin_hood::pair<wstring, int> { wstring(L"writeserial"), 1059 },
	robin_hood::pair<wstring, int> { wstring(L"renderingmode"), 1060 },
	robin_hood::pair<wstring, int> { wstring(L"updatematerial"), 1061 },
	robin_hood::pair<wstring, int> { wstring(L"getmaterial"), 1062 },
	robin_hood::pair<wstring, int> { wstring(L"updatematerialphysics"), 1063 },
	robin_hood::pair<wstring, int> { wstring(L"getmaterialphysics"), 1064 },
	robin_hood::pair<wstring, int> { wstring(L"materialcolor"), 1065 },
	robin_hood::pair<wstring, int> { wstring(L"windowwidth"), 1066 },
	robin_hood::pair<wstring, int> { wstring(L"windowheight"), 1067 }
};

STDMETHODIMP ScriptGlobalTable::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP ScriptGlobalTable::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000: {
			// line 3968: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlaySound(BSTR Sound,/* [defaultvalue] */ long LoopCount = 1,/* [defaultvalue] */ float Volume = 1,/* [defaultvalue] */ float pan = 0,/* [defaultvalue] */ float randompitch = 0,/* [defaultvalue] */ long pitch = 0,/* [defaultvalue] */ VARIANT_BOOL usesame = 0,/* [defaultvalue] */ VARIANT_BOOL restart = 1,/* [defaultvalue] */ float front_rear_fade = 0) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1(1);
			VariantChangeType(&var1, (index > 0) ? &pDispParams->rgvarg[--index] : &var1, 0, VT_I4);
			CComVariant var2(1);
			VariantChangeType(&var2, (index > 0) ? &pDispParams->rgvarg[--index] : &var2, 0, VT_R4);
			CComVariant var3(0);
			VariantChangeType(&var3, (index > 0) ? &pDispParams->rgvarg[--index] : &var3, 0, VT_R4);
			CComVariant var4(0);
			VariantChangeType(&var4, (index > 0) ? &pDispParams->rgvarg[--index] : &var4, 0, VT_R4);
			CComVariant var5(0);
			VariantChangeType(&var5, (index > 0) ? &pDispParams->rgvarg[--index] : &var5, 0, VT_I4);
			CComVariant var6(0);
			VariantChangeType(&var6, (index > 0) ? &pDispParams->rgvarg[--index] : &var6, 0, VT_BOOL);
			CComVariant var7(1);
			VariantChangeType(&var7, (index > 0) ? &pDispParams->rgvarg[--index] : &var7, 0, VT_BOOL);
			CComVariant var8(0);
			VariantChangeType(&var8, (index > 0) ? &pDispParams->rgvarg[--index] : &var8, 0, VT_R4);
			return PlaySound(V_BSTR(&var0), V_I4(&var1), V_R4(&var2), V_R4(&var3), V_R4(&var4), V_I4(&var5), V_BOOL(&var6), V_BOOL(&var7), V_R4(&var8));
		}

		case 1001: {
			// line 3979: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeftFlipperKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_LeftFlipperKey((long*)&V_I4(pVarResult));
		}

		case 1002: {
			// line 3982: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RightFlipperKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_RightFlipperKey((long*)&V_I4(pVarResult));
		}

		case 1003: {
			// line 3985: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeftTiltKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_LeftTiltKey((long*)&V_I4(pVarResult));
		}

		case 1004: {
			// line 3988: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RightTiltKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_RightTiltKey((long*)&V_I4(pVarResult));
		}

		case 1005: {
			// line 3991: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterTiltKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_CenterTiltKey((long*)&V_I4(pVarResult));
		}

		case 1006: {
			// line 3994: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlungerKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_PlungerKey((long*)&V_I4(pVarResult));
		}

		case 1007: {
			// line 3997: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlayMusic(BSTR str,/* [defaultvalue] */ float Volume = 1) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1(1);
			VariantChangeType(&var1, (index > 0) ? &pDispParams->rgvarg[--index] : &var1, 0, VT_R4);
			return PlayMusic(V_BSTR(&var0), V_R4(&var1));
		}

		case 1008: {
			// line 4001: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MusicVolume(float Volume) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
			return put_MusicVolume(V_R4(&var0));
		}

		case 1009: {
			// line 4004: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndMusic( void) = 0;
			return EndMusic();
		}

		case 1010: {
			// line 4006: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartGameKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_StartGameKey((long*)&V_I4(pVarResult));
		}

		case 1011: {
			// line 4009: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserDirectory(/* [retval][out] */ BSTR *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_BSTR;
			return get_UserDirectory(&V_BSTR(pVarResult));
		}

		case 1012: {
			// line 4012: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GetPlayerHWnd(/* [retval][out] */ SIZE_T *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_UI4;
			return get_GetPlayerHWnd((SIZE_T*)&V_UI4(pVarResult));
		}

		case 1013: {
			// line 4015: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopSound(BSTR Sound) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
			return StopSound(V_BSTR(&var0));
		}

		case 1014: {
			// line 4018: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveValue(BSTR TableName,BSTR ValueName,VARIANT Value) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_VARIANT);
			return SaveValue(V_BSTR(&var0), V_BSTR(&var1), var2);
		}

		case 1015: {
			// line 4023: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadValue(BSTR TableName,BSTR ValueName,/* [retval][out] */ VARIANT *Value) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			return LoadValue(V_BSTR(&var0), V_BSTR(&var1), pVarResult);
		}

		case 1016: {
			// line 4028: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveBall(/* [retval][out] */ IBall **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return get_ActiveBall((IBall**)&V_DISPATCH(pVarResult));
		}

		case 1017: {
			// line 4031: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddCreditKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_AddCreditKey((long*)&V_I4(pVarResult));
		}

		case 1018: {
			// line 4034: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddCreditKey2(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_AddCreditKey2((long*)&V_I4(pVarResult));
		}

		case 1019: {
			// line 4037: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GameTime(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_GameTime((long*)&V_I4(pVarResult));
		}

		case 1020: {
			// line 4040: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemTime(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_SystemTime((long*)&V_I4(pVarResult));
		}

		case 1021: {
			// line 4043: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCustomParam(long index,/* [retval][out] */ BSTR *param) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			V_VT(pVarResult) = VT_BSTR;
			return GetCustomParam(V_I4(&var0), &V_BSTR(pVarResult));
		}

		case 1022: {
			// line 4047: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTextFile(BSTR FileName,/* [retval][out] */ BSTR *pContents) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
			V_VT(pVarResult) = VT_BSTR;
			return GetTextFile(V_BSTR(&var0), &V_BSTR(pVarResult));
		}

		case 1023: {
			// line 4051: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginModal( void) = 0;
			return BeginModal();
		}

		case 1024: {
			// line 4053: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndModal( void) = 0;
			return EndModal();
		}

		case 1025: {
			// line 4055: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Nudge(/* [in] */ float Angle,/* [in] */ float Force) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			return Nudge(V_R4(&var0), V_R4(&var1));
		}

		case 1026: {
			// line 4059: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NudgeGetCalibration(/* [out] */ VARIANT *XMax,/* [out] */ VARIANT *YMax,/* [out] */ VARIANT *XGain,/* [out] */ VARIANT *YGain,/* [out] */ VARIANT *DeadZone,/* [out] */ VARIANT *TiltSensitivty) = 0;
			int index = pDispParams->cArgs;
			VARIANT* var0 = &pDispParams->rgvarg[--index];
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			VARIANT* var2 = &pDispParams->rgvarg[--index];
			VARIANT* var3 = &pDispParams->rgvarg[--index];
			VARIANT* var4 = &pDispParams->rgvarg[--index];
			VARIANT* var5 = &pDispParams->rgvarg[--index];
			return NudgeGetCalibration(var0, var1, var2, var3, var4, var5);
		}

		case 1027: {
			// line 4067: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NudgeSetCalibration(/* [in] */ int XMax,/* [in] */ int YMax,/* [in] */ int XGain,/* [in] */ int YGain,/* [in] */ int DeadZone,/* [in] */ int TiltSensitivty) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var4;
			VariantChangeType(&var4, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var5;
			VariantChangeType(&var5, &pDispParams->rgvarg[--index], 0, VT_I4);
			return NudgeSetCalibration(V_I4(&var0), V_I4(&var1), V_I4(&var2), V_I4(&var3), V_I4(&var4), V_I4(&var5));
		}

		case 1028: {
			// line 4075: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NudgeSensorStatus(/* [out] */ VARIANT *XNudge,/* [out] */ VARIANT *YNudge) = 0;
			int index = pDispParams->cArgs;
			VARIANT* var0 = &pDispParams->rgvarg[--index];
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			return NudgeSensorStatus(var0, var1);
		}

		case 1029: {
			// line 4079: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NudgeTiltStatus(/* [out] */ VARIANT *XPlumb,/* [out] */ VARIANT *YPlumb,/* [out] */ VARIANT *TiltPercent) = 0;
			int index = pDispParams->cArgs;
			VARIANT* var0 = &pDispParams->rgvarg[--index];
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			VARIANT* var2 = &pDispParams->rgvarg[--index];
			return NudgeTiltStatus(var0, var1, var2);
		}

		case 1030: {
			// line 4084: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MechanicalTilt(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_MechanicalTilt((long*)&V_I4(pVarResult));
		}

		case 1031: {
			// line 4087: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeftMagnaSave(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_LeftMagnaSave((long*)&V_I4(pVarResult));
		}

		case 1032: {
			// line 4090: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RightMagnaSave(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_RightMagnaSave((long*)&V_I4(pVarResult));
		}

		case 1033: {
			// line 4093: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExitGame(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_ExitGame((long*)&V_I4(pVarResult));
		}

		case 1034: {
			// line 4096: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LockbarKey(/* [retval][out] */ long *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_LockbarKey((long*)&V_I4(pVarResult));
		}

		case 1035: {
			// line 4099: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireKnocker(/* [defaultvalue] */ int Count = 1) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0(1);
			VariantChangeType(&var0, (index > 0) ? &pDispParams->rgvarg[--index] : &var0, 0, VT_I4);
			return FireKnocker(V_I4(&var0));
		}

		case 1036: {
			// line 4102: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QuitPlayer(/* [defaultvalue] */ int CloseType = 0) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0(0);
			VariantChangeType(&var0, (index > 0) ? &pDispParams->rgvarg[--index] : &var0, 0, VT_I4);
			return QuitPlayer(V_I4(&var0));
		}

		case 1037: {
			// line 4105: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowDT(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_BOOL;
			return get_ShowDT(&V_BOOL(pVarResult));
		}

		case 1038: {
			// line 4108: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowFSS(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_BOOL;
			return get_ShowFSS(&V_BOOL(pVarResult));
		}

		case 1039: {
			// line 4111: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NightDay(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_NightDay(&V_I4(pVarResult));
		}

		case 1040: {
			// line 4114: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBalls(/* [retval][out] */ SAFEARRAY * *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_ARRAY;
			return GetBalls((SAFEARRAY**)&V_ARRAY(pVarResult));
		}

		case 1041: {
			// line 4117: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetElements(/* [retval][out] */ SAFEARRAY * *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_ARRAY;
			return GetElements((SAFEARRAY**)&V_ARRAY(pVarResult));
		}

		case 1042: {
			// line 4120: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetElementByName(/* [in] */ BSTR name,/* [retval][out] */ IDispatch **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
			V_VT(pVarResult) = VT_DISPATCH;
			return GetElementByName(V_BSTR(&var0), (IDispatch**)&V_DISPATCH(pVarResult));
		}

		case 1043: {
			// line 4124: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveTable(/* [retval][out] */ ITable **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return get_ActiveTable((ITable**)&V_DISPATCH(pVarResult));
		}

		case 1044: {
			// line 4127: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMDWidth(/* [in] */ int pVal) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return put_DMDWidth(V_I4(&var0));
		}

		case 1045: {
			// line 4130: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMDHeight(/* [in] */ int pVal) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return put_DMDHeight(V_I4(&var0));
		}

		case 1046: {
			// line 4133: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMDPixels(/* [in] */ VARIANT pVal) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_VARIANT);
			return put_DMDPixels(var0);
		}

		case 1047: {
			// line 4136: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMDColoredPixels(/* [in] */ VARIANT pVal) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_VARIANT);
			return put_DMDColoredPixels(var0);
		}

		case 1048: {
			// line 4139: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_Version(&V_I4(pVarResult));
		}

		case 1049: {
			// line 4142: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionMajor(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionMajor(&V_I4(pVarResult));
		}

		case 1050: {
			// line 4145: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionMinor(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionMinor(&V_I4(pVarResult));
		}

		case 1051: {
			// line 4148: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionRevision(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VersionRevision(&V_I4(pVarResult));
		}

		case 1052: {
			// line 4151: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VPBuildVersion(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_VPBuildVersion(&V_I4(pVarResult));
		}

		case 1053: {
			// line 4154: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSerialDevices(/* [retval][out] */ VARIANT *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			return GetSerialDevices(pVarResult);
		}

		case 1054: {
			// line 4157: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenSerial(/* [in] */ BSTR device) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
			return OpenSerial(V_BSTR(&var0));
		}

		case 1055: {
			// line 4160: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CloseSerial( void) = 0;
			return CloseSerial();
		}

		case 1056: {
			// line 4162: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FlushSerial( void) = 0;
			return FlushSerial();
		}

		case 1057: {
			// line 4164: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupSerial(/* [in] */ int baud,/* [in] */ int bits,/* [in] */ int parity,/* [in] */ int stopbit,/* [in] */ VARIANT_BOOL rts,/* [in] */ VARIANT_BOOL dtr) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var4;
			VariantChangeType(&var4, &pDispParams->rgvarg[--index], 0, VT_BOOL);
			CComVariant var5;
			VariantChangeType(&var5, &pDispParams->rgvarg[--index], 0, VT_BOOL);
			return SetupSerial(V_I4(&var0), V_I4(&var1), V_I4(&var2), V_I4(&var3), V_BOOL(&var4), V_BOOL(&var5));
		}

		case 1058: {
			// line 4172: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadSerial(/* [in] */ int size,/* [out] */ VARIANT *pVal) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			return ReadSerial(V_I4(&var0), var1);
		}

		case 1059: {
			// line 4176: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteSerial(/* [in] */ VARIANT pVal) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_VARIANT);
			return WriteSerial(var0);
		}

		case 1060: {
			// line 4179: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RenderingMode(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_RenderingMode(&V_I4(pVarResult));
		}

		case 1061: {
			// line 4182: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateMaterial(/* [in] */ BSTR pVal,/* [in] */ float wrapLighting,/* [in] */ float roughness,/* [in] */ float glossyImageLerp,/* [in] */ float thickness,/* [in] */ float edge,/* [in] */ float edgeAlpha,/* [in] */ float opacity,/* [in] */ OLE_COLOR base,/* [in] */ OLE_COLOR glossy,/* [in] */ OLE_COLOR clearcoat,/* [in] */ VARIANT_BOOL isMetal,/* [in] */ VARIANT_BOOL opacityActive,/* [in] */ float elasticity,/* [in] */ float elasticityFalloff,/* [in] */ float friction,/* [in] */ float scatterAngle) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var4;
			VariantChangeType(&var4, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var5;
			VariantChangeType(&var5, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var6;
			VariantChangeType(&var6, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var7;
			VariantChangeType(&var7, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var8;
			VariantChangeType(&var8, &pDispParams->rgvarg[--index], 0, VT_UI4);
			CComVariant var9;
			VariantChangeType(&var9, &pDispParams->rgvarg[--index], 0, VT_UI4);
			CComVariant var10;
			VariantChangeType(&var10, &pDispParams->rgvarg[--index], 0, VT_UI4);
			CComVariant var11;
			VariantChangeType(&var11, &pDispParams->rgvarg[--index], 0, VT_BOOL);
			CComVariant var12;
			VariantChangeType(&var12, &pDispParams->rgvarg[--index], 0, VT_BOOL);
			CComVariant var13;
			VariantChangeType(&var13, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var14;
			VariantChangeType(&var14, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var15;
			VariantChangeType(&var15, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var16;
			VariantChangeType(&var16, &pDispParams->rgvarg[--index], 0, VT_R4);
			return UpdateMaterial(V_BSTR(&var0), V_R4(&var1), V_R4(&var2), V_R4(&var3), V_R4(&var4), V_R4(&var5), V_R4(&var6), V_R4(&var7), (OLE_COLOR)V_UI4(&var8), (OLE_COLOR)V_UI4(&var9), (OLE_COLOR)V_UI4(&var10), V_BOOL(&var11), V_BOOL(&var12), V_R4(&var13), V_R4(&var14), V_R4(&var15), V_R4(&var16));
		}

		case 1062: {
			// line 4201: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMaterial(/* [in] */ BSTR pVal,/* [out] */ VARIANT *wrapLighting,/* [out] */ VARIANT *roughness,/* [out] */ VARIANT *glossyImageLerp,/* [out] */ VARIANT *thickness,/* [out] */ VARIANT *edge,/* [out] */ VARIANT *edgeAlpha,/* [out] */ VARIANT *opacity,/* [out] */ VARIANT *base,/* [out] */ VARIANT *glossy,/* [out] */ VARIANT *clearcoat,/* [out] */ VARIANT *isMetal,/* [out] */ VARIANT *opacityActive,/* [out] */ VARIANT *elasticity,/* [out] */ VARIANT *elasticityFalloff,/* [out] */ VARIANT *friction,/* [out] */ VARIANT *scatterAngle) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			VARIANT* var2 = &pDispParams->rgvarg[--index];
			VARIANT* var3 = &pDispParams->rgvarg[--index];
			VARIANT* var4 = &pDispParams->rgvarg[--index];
			VARIANT* var5 = &pDispParams->rgvarg[--index];
			VARIANT* var6 = &pDispParams->rgvarg[--index];
			VARIANT* var7 = &pDispParams->rgvarg[--index];
			VARIANT* var8 = &pDispParams->rgvarg[--index];
			VARIANT* var9 = &pDispParams->rgvarg[--index];
			VARIANT* var10 = &pDispParams->rgvarg[--index];
			VARIANT* var11 = &pDispParams->rgvarg[--index];
			VARIANT* var12 = &pDispParams->rgvarg[--index];
			VARIANT* var13 = &pDispParams->rgvarg[--index];
			VARIANT* var14 = &pDispParams->rgvarg[--index];
			VARIANT* var15 = &pDispParams->rgvarg[--index];
			VARIANT* var16 = &pDispParams->rgvarg[--index];
			return GetMaterial(V_BSTR(&var0), var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15, var16);
		}

		case 1063: {
			// line 4220: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateMaterialPhysics(/* [in] */ BSTR pVal,/* [in] */ float elasticity,/* [in] */ float elasticityFalloff,/* [in] */ float friction,/* [in] */ float scatterAngle) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var4;
			VariantChangeType(&var4, &pDispParams->rgvarg[--index], 0, VT_R4);
			return UpdateMaterialPhysics(V_BSTR(&var0), V_R4(&var1), V_R4(&var2), V_R4(&var3), V_R4(&var4));
		}

		case 1064: {
			// line 4227: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMaterialPhysics(/* [in] */ BSTR pVal,/* [out] */ VARIANT *elasticity,/* [out] */ VARIANT *elasticityFalloff,/* [out] */ VARIANT *friction,/* [out] */ VARIANT *scatterAngle) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			VARIANT* var1 = &pDispParams->rgvarg[--index];
			VARIANT* var2 = &pDispParams->rgvarg[--index];
			VARIANT* var3 = &pDispParams->rgvarg[--index];
			VARIANT* var4 = &pDispParams->rgvarg[--index];
			return GetMaterialPhysics(V_BSTR(&var0), var1, var2, var3, var4);
		}

		case 1065: {
			// line 4234: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MaterialColor(/* [in] */ BSTR name,/* [in] */ OLE_COLOR newVal) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_BSTR);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_UI4);
			return MaterialColor(V_BSTR(&var0), (OLE_COLOR)V_UI4(&var1));
		}

		case 1066: {
			// line 4238: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WindowWidth(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_WindowWidth(&V_I4(pVarResult));
		}

		case 1067: {
			// line 4241: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WindowHeight(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return get_WindowHeight(&V_I4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> DebuggerModule::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"print"), 1000 }
};

STDMETHODIMP DebuggerModule::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP DebuggerModule::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000: {
			// line 5109: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Print(/* [optional][in] */ VARIANT *pvar) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			if (index > 0) {
				VariantCopy(&var0,  &pDispParams->rgvarg[--index]);
			}
			return Print(&var0);
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Surface::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"threshold"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"sidematerial"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"imagealignment"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"heightbottom"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"heighttop"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"topmaterial"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"candrop"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"isdropped"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"displaytexture"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"slingshotstrength"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"sideimage"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"disabled"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"sidevisible"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"slingshotmaterial"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"slingshotthreshold"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"slingshotanimation"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"flipbookanimation"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"isbottomsolid"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"disablelighting"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelighting"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelightingfrombelow"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"playslingshothit"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"physicsmaterial"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"overwritephysics"), 1036 }
};

STDMETHODIMP Surface::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Surface::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5247: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5250: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5253: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5256: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5259: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 5262: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5265: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5268: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5271: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Threshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 5274: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Threshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5277: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5280: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5283: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SideMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_SideMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5286: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SideMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_SideMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5289: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageAlignment(/* [retval][out] */ ImageAlignment *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_ImageAlignment((ImageAlignment*)&V_I4(pVarResult));
			}

			case 1: {
				// line 5292: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageAlignment(/* [in] */ ImageAlignment newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_ImageAlignment((ImageAlignment)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5295: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HeightBottom(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HeightBottom(&V_R4(pVarResult));
			}

			case 1: {
				// line 5298: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HeightBottom(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HeightBottom(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5301: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HeightTop(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HeightTop(&V_R4(pVarResult));
			}

			case 1: {
				// line 5304: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HeightTop(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HeightTop(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5307: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TopMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_TopMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5310: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TopMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_TopMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5313: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanDrop(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_CanDrop(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5316: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CanDrop(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_CanDrop(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5319: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5322: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5325: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDropped(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsDropped(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5328: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDropped(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsDropped(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5331: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayTexture(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisplayTexture(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5334: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayTexture(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisplayTexture(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5337: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlingshotStrength(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SlingshotStrength(&V_R4(pVarResult));
			}

			case 1: {
				// line 5340: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlingshotStrength(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SlingshotStrength(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5343: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 5346: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5349: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 5352: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5355: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SideImage(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_SideImage(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5358: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SideImage(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_SideImage(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5361: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5364: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5367: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Disabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Disabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5370: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Disabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Disabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5373: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SideVisible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_SideVisible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5376: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SideVisible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_SideVisible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5379: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 5382: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5385: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlingshotMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_SlingshotMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5388: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlingshotMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_SlingshotMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5391: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlingshotThreshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SlingshotThreshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 5394: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlingshotThreshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SlingshotThreshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5397: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlingshotAnimation(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_SlingshotAnimation(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5400: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlingshotAnimation(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_SlingshotAnimation(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5403: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlipbookAnimation(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_FlipbookAnimation(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5406: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FlipbookAnimation(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_FlipbookAnimation(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5409: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsBottomSolid(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsBottomSolid(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5412: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsBottomSolid(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsBottomSolid(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5415: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableLighting(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisableLighting(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5418: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableLighting(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisableLighting(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5421: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLighting(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLighting(&V_R4(pVarResult));
			}

			case 1: {
				// line 5424: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLighting(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLighting(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5427: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLightingFromBelow(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLightingFromBelow(&V_R4(pVarResult));
			}

			case 1: {
				// line 5430: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLightingFromBelow(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLightingFromBelow(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5433: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 5436: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5439: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 5442: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5445: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5448: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1034: {
			// line 5451: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlaySlingshotHit( void) = 0;
			return PlaySlingshotHit();
		}

		case 1035:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5453: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PhysicsMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 5456: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PhysicsMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1036:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 5459: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwritePhysics(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverwritePhysics(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 5462: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwritePhysics(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverwritePhysics(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> DragPoint::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"x"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"z"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"calcheight"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"smooth"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"isautotexturecoordinate"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"texturecoordinateu"), 1006 }
};

STDMETHODIMP DragPoint::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP DragPoint::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6297: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 6300: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6303: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 6306: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6309: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Z(&V_R4(pVarResult));
			}

			case 1: {
				// line 6312: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Z(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003: {
			// line 6315: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CalcHeight(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_CalcHeight(&V_R4(pVarResult));
		}

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6318: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Smooth(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Smooth(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6321: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Smooth(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Smooth(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6324: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAutoTextureCoordinate(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsAutoTextureCoordinate(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6327: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsAutoTextureCoordinate(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsAutoTextureCoordinate(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6330: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TextureCoordinateU(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TextureCoordinateU(&V_R4(pVarResult));
			}

			case 1: {
				// line 6333: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TextureCoordinateU(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TextureCoordinateU(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Flipper::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"baseradius"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"endradius"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"length"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"startangle"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"rotatetoend"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"rotatetostart"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"endangle"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"currentangle"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"mass"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"overridephysics"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"rubbermaterial"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"rubberthickness"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"strength"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"enabled"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"return"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"rubberheight"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"rubberwidth"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"rampup"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"eostorque"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"eostorqueangle"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"flipperradiusmin"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1036 }
};

STDMETHODIMP Flipper::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Flipper::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6567: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseRadius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BaseRadius(&V_R4(pVarResult));
			}

			case 1: {
				// line 6570: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BaseRadius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BaseRadius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6573: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndRadius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EndRadius(&V_R4(pVarResult));
			}

			case 1: {
				// line 6576: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndRadius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EndRadius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6579: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Length(&V_R4(pVarResult));
			}

			case 1: {
				// line 6582: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Length(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6585: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_StartAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 6588: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_StartAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004: {
			// line 6591: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RotateToEnd( void) = 0;
			return RotateToEnd();
		}

		case 1005: {
			// line 6593: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RotateToStart( void) = 0;
			return RotateToStart();
		}

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6595: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EndAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 6598: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EndAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6601: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6604: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6607: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 6610: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009: {
			// line 6613: virtual /* [helpstring][nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAngle(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_CurrentAngle(&V_R4(pVarResult));
		}

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6616: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 6619: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6622: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 6625: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6628: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 6631: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6634: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mass(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Mass(&V_R4(pVarResult));
			}

			case 1: {
				// line 6637: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Mass(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Mass(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6640: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverridePhysics(/* [retval][out] */ PhysicsSet *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_OverridePhysics((PhysicsSet*)&V_I4(pVarResult));
			}

			case 1: {
				// line 6643: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverridePhysics(/* [in] */ PhysicsSet newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_OverridePhysics((PhysicsSet)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6646: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RubberMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_RubberMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 6649: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RubberMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_RubberMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6652: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RubberThickness(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RubberThickness(&V_R4(pVarResult));
			}

			case 1: {
				// line 6655: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RubberThickness(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RubberThickness(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6658: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Strength(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Strength(&V_R4(pVarResult));
			}

			case 1: {
				// line 6661: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Strength(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Strength(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6664: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6667: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6670: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Enabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6673: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Enabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6676: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 6679: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6682: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 6685: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6688: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Return(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Return(&V_R4(pVarResult));
			}

			case 1: {
				// line 6691: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Return(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Return(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6694: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RubberHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RubberHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 6697: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RubberHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RubberHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6700: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RubberWidth(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RubberWidth(&V_R4(pVarResult));
			}

			case 1: {
				// line 6703: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RubberWidth(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RubberWidth(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6706: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 6709: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6712: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RampUp(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RampUp(&V_R4(pVarResult));
			}

			case 1: {
				// line 6715: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RampUp(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RampUp(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6718: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 6721: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6724: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 6727: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6730: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 6733: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6736: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 6739: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6742: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 6745: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6748: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EOSTorque(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EOSTorque(&V_R4(pVarResult));
			}

			case 1: {
				// line 6751: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EOSTorque(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EOSTorque(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6754: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EOSTorqueAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EOSTorqueAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 6757: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EOSTorqueAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EOSTorqueAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1034:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6760: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlipperRadiusMin(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FlipperRadiusMin(&V_R4(pVarResult));
			}

			case 1: {
				// line 6763: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FlipperRadiusMin(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FlipperRadiusMin(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1035:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6766: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 6769: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1036:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 6772: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 6775: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Timer::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"enabled"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"interval"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1003 }
};

STDMETHODIMP Timer::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Timer::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7593: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Enabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 7596: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Enabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7599: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Interval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Interval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 7602: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Interval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Interval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7605: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 7608: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7611: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 7614: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Plunger::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"pullback"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"fire"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"pullspeed"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"firespeed"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"createball"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"position"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"pullbackandretract"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"motiondevice"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"width"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"zadjust"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"type"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"animframes"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"tipshape"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"roddiam"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"ringgap"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"ringdiam"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"ringwidth"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"springdiam"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"springgauge"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"springloops"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"springendloops"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"mechplunger"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"autoplunger"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"mechstrength"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"parkposition"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"stroke"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"scattervelocity"), 1036 },
	robin_hood::pair<wstring, int> { wstring(L"momentumxfer"), 1037 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1038 }
};

STDMETHODIMP Plunger::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Plunger::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000: {
			// line 7930: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PullBack( void) = 0;
			return PullBack();
		}

		case 1001: {
			// line 7932: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fire( void) = 0;
			return Fire();
		}

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7934: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PullSpeed(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_PullSpeed(&V_R4(pVarResult));
			}

			case 1: {
				// line 7937: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PullSpeed(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_PullSpeed(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7940: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FireSpeed(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FireSpeed(&V_R4(pVarResult));
			}

			case 1: {
				// line 7943: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FireSpeed(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FireSpeed(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004: {
			// line 7946: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBall(/* [retval][out] */ IBall **Ball) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return CreateBall((IBall**)&V_DISPATCH(pVarResult));
		}

		case 1005: {
			// line 7949: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Position(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return Position(&V_R4(pVarResult));
		}

		case 1006: {
			// line 7952: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PullBackandRetract( void) = 0;
			return PullBackandRetract();
		}

		case 1007: {
			// line 7954: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MotionDevice(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return MotionDevice(&V_I4(pVarResult));
		}

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7957: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 7960: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7963: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 7966: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7969: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 7972: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7975: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 7978: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7981: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Width(&V_R4(pVarResult));
			}

			case 1: {
				// line 7984: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Width(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7987: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZAdjust(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ZAdjust(&V_R4(pVarResult));
			}

			case 1: {
				// line 7990: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZAdjust(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ZAdjust(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7993: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 7996: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 7999: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 8002: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8005: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 8008: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8011: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type(/* [retval][out] */ PlungerType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Type((PlungerType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 8014: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type(/* [in] */ PlungerType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Type((PlungerType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8017: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 8020: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8023: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 8026: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8029: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AnimFrames(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_AnimFrames(&V_I4(pVarResult));
			}

			case 1: {
				// line 8032: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AnimFrames(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_AnimFrames(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8035: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TipShape(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_TipShape(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 8038: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TipShape(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_TipShape(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8041: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RodDiam(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RodDiam(&V_R4(pVarResult));
			}

			case 1: {
				// line 8044: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RodDiam(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RodDiam(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8047: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingGap(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RingGap(&V_R4(pVarResult));
			}

			case 1: {
				// line 8050: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingGap(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RingGap(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8053: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingDiam(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RingDiam(&V_R4(pVarResult));
			}

			case 1: {
				// line 8056: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingDiam(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RingDiam(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8059: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingWidth(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RingWidth(&V_R4(pVarResult));
			}

			case 1: {
				// line 8062: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingWidth(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RingWidth(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8065: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpringDiam(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SpringDiam(&V_R4(pVarResult));
			}

			case 1: {
				// line 8068: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpringDiam(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SpringDiam(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8071: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpringGauge(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SpringGauge(&V_R4(pVarResult));
			}

			case 1: {
				// line 8074: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpringGauge(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SpringGauge(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8077: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpringLoops(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SpringLoops(&V_R4(pVarResult));
			}

			case 1: {
				// line 8080: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpringLoops(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SpringLoops(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8083: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpringEndLoops(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_SpringEndLoops(&V_R4(pVarResult));
			}

			case 1: {
				// line 8086: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpringEndLoops(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_SpringEndLoops(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8089: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MechPlunger(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_MechPlunger(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 8092: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MechPlunger(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_MechPlunger(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8095: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoPlunger(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_AutoPlunger(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 8098: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoPlunger(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_AutoPlunger(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8101: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 8104: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8107: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MechStrength(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_MechStrength(&V_R4(pVarResult));
			}

			case 1: {
				// line 8110: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MechStrength(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_MechStrength(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1034:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8113: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParkPosition(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ParkPosition(&V_R4(pVarResult));
			}

			case 1: {
				// line 8116: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ParkPosition(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ParkPosition(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1035:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8119: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stroke(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Stroke(&V_R4(pVarResult));
			}

			case 1: {
				// line 8122: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Stroke(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Stroke(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1036:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8125: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScatterVelocity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ScatterVelocity(&V_R4(pVarResult));
			}

			case 1: {
				// line 8128: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScatterVelocity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ScatterVelocity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1037:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8131: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MomentumXfer(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_MomentumXfer(&V_R4(pVarResult));
			}

			case 1: {
				// line 8134: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MomentumXfer(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_MomentumXfer(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1038:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8137: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 8140: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Textbox::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"backcolor"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"fontcolor"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"text"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"font"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"putref_font"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"width"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"alignment"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"istransparent"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"dmd"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"intensityscale"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1017 }
};

STDMETHODIMP Textbox::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Textbox::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8965: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_BackColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 8968: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_BackColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8971: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_FontColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 8974: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_FontColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8977: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Text(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 8980: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Text(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1003: {
			// line 8983: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Font(/* [retval][out] */ IFontDisp **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return get_Font((IFontDisp**)&V_DISPATCH(pVarResult));
		}

		case 1004: {
			// line 8986: virtual /* [helpstring][id][propputref] */ HRESULT STDMETHODCALLTYPE putref_Font(/* [in] */ IFontDisp *newVal) = 0;
			return putref_Font((IFontDisp*)pDispParams->rgvarg);
		}

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8989: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Width(&V_R4(pVarResult));
			}

			case 1: {
				// line 8992: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Width(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 8995: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 8998: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9001: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alignment(/* [retval][out] */ TextAlignment *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Alignment((TextAlignment*)&V_I4(pVarResult));
			}

			case 1: {
				// line 9004: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alignment(/* [in] */ TextAlignment newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Alignment((TextAlignment)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9007: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsTransparent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsTransparent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9010: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsTransparent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsTransparent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9013: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DMD(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DMD(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9016: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMD(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DMD(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9019: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9022: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9025: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 9028: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9031: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 9034: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9037: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 9040: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9043: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IntensityScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_IntensityScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 9046: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IntensityScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_IntensityScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9049: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9052: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9055: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 9058: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9061: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9064: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Bumper::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"radius"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"basematerial"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"skirtmaterial"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"force"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"threshold"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"capmaterial"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"ringmaterial"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"heightscale"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"orientation"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"ringspeed"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"ringdropoffset"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"capvisible"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"basevisible"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"ringvisible"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"skirtvisible"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"enableskirtanimation"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"playhit"), 1027 }
};

STDMETHODIMP Bumper::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Bumper::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9588: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Radius(&V_R4(pVarResult));
			}

			case 1: {
				// line 9591: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Radius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9594: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 9597: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9600: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 9603: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9606: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BaseMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9609: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BaseMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BaseMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9612: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SkirtMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_SkirtMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9615: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SkirtMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_SkirtMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9618: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 9621: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9624: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9627: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9630: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Force(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Force(&V_R4(pVarResult));
			}

			case 1: {
				// line 9633: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Force(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Force(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9636: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Threshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 9639: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Threshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9642: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9645: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9648: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 9651: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9654: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CapMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_CapMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9657: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CapMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_CapMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9660: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_RingMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9663: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_RingMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9666: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HeightScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HeightScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 9669: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HeightScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HeightScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9672: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Orientation(&V_R4(pVarResult));
			}

			case 1: {
				// line 9675: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Orientation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9678: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingSpeed(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RingSpeed(&V_R4(pVarResult));
			}

			case 1: {
				// line 9681: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingSpeed(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RingSpeed(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9684: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingDropOffset(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RingDropOffset(&V_R4(pVarResult));
			}

			case 1: {
				// line 9687: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingDropOffset(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RingDropOffset(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9690: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 9693: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9696: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9699: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9702: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CapVisible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_CapVisible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9705: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CapVisible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_CapVisible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9708: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseVisible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_BaseVisible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9711: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BaseVisible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_BaseVisible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9714: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RingVisible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_RingVisible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9717: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RingVisible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_RingVisible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9720: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SkirtVisible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_SkirtVisible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9723: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SkirtVisible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_SkirtVisible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9726: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9729: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9732: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9735: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9738: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 9741: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 9744: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableSkirtAnimation(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableSkirtAnimation(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 9747: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableSkirtAnimation(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableSkirtAnimation(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1027: {
			// line 9750: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlayHit( void) = 0;
			return PlayHit();
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Trigger::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"radius"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"enabled"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"triggershape"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"ballcntover"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"destroyball"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"hitheight"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"rotation"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"wirethickness"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"animspeed"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1018 }
};

STDMETHODIMP Trigger::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Trigger::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10440: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Radius(&V_R4(pVarResult));
			}

			case 1: {
				// line 10443: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Radius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10446: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 10449: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10452: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 10455: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10458: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 10461: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10464: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 10467: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10470: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Enabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 10473: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Enabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10476: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 10479: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10482: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerShape(/* [retval][out] */ TriggerShape *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TriggerShape((TriggerShape*)&V_I4(pVarResult));
			}

			case 1: {
				// line 10485: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerShape(/* [in] */ TriggerShape newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TriggerShape((TriggerShape)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10488: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 10491: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10494: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 10497: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10500: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 10503: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1011: {
			// line 10506: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BallCntOver(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return BallCntOver(&V_I4(pVarResult));
		}

		case 1012: {
			// line 10509: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DestroyBall(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return DestroyBall(&V_I4(pVarResult));
		}

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10512: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HitHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 10515: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HitHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HitHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10518: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 10521: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10524: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Rotation(&V_R4(pVarResult));
			}

			case 1: {
				// line 10527: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Rotation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10530: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WireThickness(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WireThickness(&V_R4(pVarResult));
			}

			case 1: {
				// line 10533: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WireThickness(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WireThickness(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10536: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AnimSpeed(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AnimSpeed(&V_R4(pVarResult));
			}

			case 1: {
				// line 10539: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AnimSpeed(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AnimSpeed(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 10542: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 10545: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Light::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"falloff"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"falloffpower"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"state"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"getinplaystate"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"getinplaystatebool"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"getinplayintensity"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"color"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"colorfull"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"blinkpattern"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"blinkinterval"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"duration"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"intensity"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"transmissionscale"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"intensityscale"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"imagemode"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"depthbias"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"fadespeedup"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"fadespeeddown"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"bulb"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"showbulbmesh"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"staticbulbmesh"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"showreflectiononball"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"scalebulbmesh"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"bulbmodulatevsadd"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"bulbhaloheight"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1033 }
};

STDMETHODIMP Light::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Light::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11085: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Falloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Falloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 11088: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Falloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Falloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11091: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FalloffPower(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FalloffPower(&V_R4(pVarResult));
			}

			case 1: {
				// line 11094: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FalloffPower(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FalloffPower(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11097: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State(/* [retval][out] */ LightState *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_State((LightState*)&V_I4(pVarResult));
			}

			case 1: {
				// line 11100: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State(/* [in] */ LightState newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_State((LightState)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003: {
			// line 11103: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInPlayState(/* [retval][out] */ LightState *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return GetInPlayState((LightState*)&V_I4(pVarResult));
		}

		case 1004: {
			// line 11106: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInPlayStateBool(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_BOOL;
			return GetInPlayStateBool(&V_BOOL(pVarResult));
		}

		case 1005: {
			// line 11109: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInPlayIntensity(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return GetInPlayIntensity(&V_R4(pVarResult));
		}

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11112: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_Color(&V_UI4(pVarResult));
			}

			case 1: {
				// line 11115: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_Color((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11118: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorFull(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_ColorFull(&V_UI4(pVarResult));
			}

			case 1: {
				// line 11121: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorFull(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_ColorFull((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11124: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11127: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11130: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 11133: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11136: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 11139: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11142: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 11145: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11148: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlinkPattern(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_BlinkPattern(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 11151: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlinkPattern(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_BlinkPattern(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11154: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlinkInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_BlinkInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 11157: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlinkInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_BlinkInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014: {
			// line 11160: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Duration(/* [in] */ long startState,/* [in] */ long newVal,/* [in] */ long endState) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_I4);
			return Duration(V_I4(&var0), V_I4(&var1), V_I4(&var2));
		}

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11165: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Intensity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Intensity(&V_R4(pVarResult));
			}

			case 1: {
				// line 11168: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Intensity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Intensity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11171: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransmissionScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TransmissionScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 11174: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransmissionScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TransmissionScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11177: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IntensityScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_IntensityScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 11180: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IntensityScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_IntensityScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11183: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 11186: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11189: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 11192: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11195: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 11198: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11201: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 11204: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11207: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageMode(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ImageMode(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11210: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageMode(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ImageMode(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11213: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DepthBias(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DepthBias(&V_R4(pVarResult));
			}

			case 1: {
				// line 11216: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DepthBias(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DepthBias(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11219: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FadeSpeedUp(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FadeSpeedUp(&V_R4(pVarResult));
			}

			case 1: {
				// line 11222: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FadeSpeedUp(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FadeSpeedUp(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11225: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FadeSpeedDown(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_FadeSpeedDown(&V_R4(pVarResult));
			}

			case 1: {
				// line 11228: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FadeSpeedDown(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_FadeSpeedDown(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11231: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Bulb(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Bulb(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11234: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Bulb(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Bulb(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11237: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBulbMesh(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowBulbMesh(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11240: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBulbMesh(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowBulbMesh(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11243: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StaticBulbMesh(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_StaticBulbMesh(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11246: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StaticBulbMesh(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_StaticBulbMesh(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11249: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowReflectionOnBall(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowReflectionOnBall(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11252: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowReflectionOnBall(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowReflectionOnBall(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11255: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleBulbMesh(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ScaleBulbMesh(&V_R4(pVarResult));
			}

			case 1: {
				// line 11258: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleBulbMesh(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ScaleBulbMesh(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11261: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BulbModulateVsAdd(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BulbModulateVsAdd(&V_R4(pVarResult));
			}

			case 1: {
				// line 11264: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BulbModulateVsAdd(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BulbModulateVsAdd(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11267: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BulbHaloHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BulbHaloHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 11270: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BulbHaloHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BulbHaloHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 11273: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 11276: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Kicker::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"createball"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"createsizedball"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"createsizedballwithmass"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"destroyball"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"kick"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"kickxyz"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"kickz"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"enabled"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"drawstyle"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"ballcntover"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"hitaccuracy"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"hitheight"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"orientation"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"radius"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"fallthrough"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"legacy"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"lastcapturedball"), 1025 }
};

STDMETHODIMP Kicker::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Kicker::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12042: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12045: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001: {
			// line 12048: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBall(/* [retval][out] */ IBall **Ball) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return CreateBall((IBall**)&V_DISPATCH(pVarResult));
		}

		case 1002: {
			// line 12051: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSizedBall(/* [in] */ float radius,/* [retval][out] */ IBall **Ball) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
			V_VT(pVarResult) = VT_DISPATCH;
			return CreateSizedBall(V_R4(&var0), (IBall**)&V_DISPATCH(pVarResult));
		}

		case 1003: {
			// line 12055: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSizedBallWithMass(/* [in] */ float radius,/* [in] */ float mass,/* [retval][out] */ IBall **Ball) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			V_VT(pVarResult) = VT_DISPATCH;
			return CreateSizedBallWithMass(V_R4(&var0), V_R4(&var1), (IBall**)&V_DISPATCH(pVarResult));
		}

		case 1004: {
			// line 12060: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DestroyBall(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return DestroyBall(&V_I4(pVarResult));
		}

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12063: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 12066: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12069: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 12072: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007: {
			// line 12075: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Kick(float angle,float speed,/* [defaultvalue] */ float inclination = 0) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var2(0);
			VariantChangeType(&var2, (index > 0) ? &pDispParams->rgvarg[--index] : &var2, 0, VT_R4);
			return Kick(V_R4(&var0), V_R4(&var1), V_R4(&var2));
		}

		case 1008: {
			// line 12080: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KickXYZ(float angle,float speed,float inclination,float x,float y,float z) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var4;
			VariantChangeType(&var4, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var5;
			VariantChangeType(&var5, &pDispParams->rgvarg[--index], 0, VT_R4);
			return KickXYZ(V_R4(&var0), V_R4(&var1), V_R4(&var2), V_R4(&var3), V_R4(&var4), V_R4(&var5));
		}

		case 1009: {
			// line 12088: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KickZ(float angle,float speed,float inclination,float heightz) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var2;
			VariantChangeType(&var2, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var3;
			VariantChangeType(&var3, &pDispParams->rgvarg[--index], 0, VT_R4);
			return KickZ(V_R4(&var0), V_R4(&var1), V_R4(&var2), V_R4(&var3));
		}

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12094: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 12097: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12100: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 12103: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12106: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Enabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 12109: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Enabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12112: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawStyle(/* [retval][out] */ KickerType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_DrawStyle((KickerType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 12115: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawStyle(/* [in] */ KickerType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_DrawStyle((KickerType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12118: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12121: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12124: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12127: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12130: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 12133: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1017: {
			// line 12136: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BallCntOver(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return BallCntOver(&V_I4(pVarResult));
		}

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12139: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 12142: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12145: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitAccuracy(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HitAccuracy(&V_R4(pVarResult));
			}

			case 1: {
				// line 12148: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HitAccuracy(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HitAccuracy(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12151: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HitHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 12154: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HitHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HitHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12157: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Orientation(&V_R4(pVarResult));
			}

			case 1: {
				// line 12160: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Orientation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12163: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Radius(&V_R4(pVarResult));
			}

			case 1: {
				// line 12166: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Radius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12169: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FallThrough(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_FallThrough(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 12172: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FallThrough(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_FallThrough(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12175: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Legacy(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Legacy(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 12178: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Legacy(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Legacy(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025: {
			// line 12181: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastCapturedBall(/* [retval][out] */ IBall **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return get_LastCapturedBall((IBall**)&V_DISPATCH(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Decal::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"rotation"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"width"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"type"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"text"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"sizingtype"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"fontcolor"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"font"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"putref_font"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"hasverticaltext"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1014 }
};

STDMETHODIMP Decal::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Decal::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12790: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Rotation(&V_R4(pVarResult));
			}

			case 1: {
				// line 12793: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Rotation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12796: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12799: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12802: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Width(&V_R4(pVarResult));
			}

			case 1: {
				// line 12805: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Width(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12808: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 12811: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12814: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 12817: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12820: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 12823: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12826: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type(/* [retval][out] */ DecalType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Type((DecalType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 12829: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type(/* [in] */ DecalType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Type((DecalType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12832: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Text(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12835: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Text(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12838: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizingType(/* [retval][out] */ SizingType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_SizingType((SizingType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 12841: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SizingType(/* [in] */ SizingType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_SizingType((SizingType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12844: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_FontColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 12847: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_FontColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12850: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12853: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1011: {
			// line 12856: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Font(/* [retval][out] */ IFontDisp **pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_DISPATCH;
			return get_Font((IFontDisp**)&V_DISPATCH(pVarResult));
		}

		case 1012: {
			// line 12859: virtual /* [helpstring][id][propputref] */ HRESULT STDMETHODCALLTYPE putref_Font(/* [in] */ IFontDisp *newVal) = 0;
			return putref_Font((IFontDisp*)pDispParams->rgvarg);
		}

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12862: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasVerticalText(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasVerticalText(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 12865: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasVerticalText(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasVerticalText(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 12868: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 12871: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Primitive::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"playanim"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"playanimendless"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"stopanim"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"showframe"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"continueanim"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"displaytexture"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"sides"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"sidecolor"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"drawtexturesinside"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"normalmap"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"z"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"size_x"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"size_y"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"size_z"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra0"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"rotx"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra1"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"roty"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra2"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"rotz"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra3"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"transx"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra4"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"transy"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra5"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"transz"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra6"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"objrotx"), 1033 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra7"), 1034 },
	robin_hood::pair<wstring, int> { wstring(L"objroty"), 1035 },
	robin_hood::pair<wstring, int> { wstring(L"rotandtra8"), 1036 },
	robin_hood::pair<wstring, int> { wstring(L"objrotz"), 1037 },
	robin_hood::pair<wstring, int> { wstring(L"edgefactorui"), 1038 },
	robin_hood::pair<wstring, int> { wstring(L"collisionreductionfactor"), 1039 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1040 },
	robin_hood::pair<wstring, int> { wstring(L"enablestaticrendering"), 1041 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1042 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1043 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1044 },
	robin_hood::pair<wstring, int> { wstring(L"istoy"), 1045 },
	robin_hood::pair<wstring, int> { wstring(L"backfacesenabled"), 1046 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1047 },
	robin_hood::pair<wstring, int> { wstring(L"threshold"), 1048 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1049 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1050 },
	robin_hood::pair<wstring, int> { wstring(L"disablelighting"), 1051 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelighting"), 1052 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelightingfrombelow"), 1053 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1054 },
	robin_hood::pair<wstring, int> { wstring(L"opacity"), 1055 },
	robin_hood::pair<wstring, int> { wstring(L"addblend"), 1056 },
	robin_hood::pair<wstring, int> { wstring(L"color"), 1057 },
	robin_hood::pair<wstring, int> { wstring(L"depthbias"), 1058 },
	robin_hood::pair<wstring, int> { wstring(L"physicsmaterial"), 1059 },
	robin_hood::pair<wstring, int> { wstring(L"overwritephysics"), 1060 },
	robin_hood::pair<wstring, int> { wstring(L"hitthreshold"), 1061 },
	robin_hood::pair<wstring, int> { wstring(L"objectspacenormalmap"), 1062 }
};

STDMETHODIMP Primitive::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Primitive::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000: {
			// line 13225: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlayAnim(/* [in] */ float startFrame,/* [in] */ float speed) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_R4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_R4);
			return PlayAnim(V_R4(&var0), V_R4(&var1));
		}

		case 1001: {
			// line 13229: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlayAnimEndless(/* [in] */ float speed) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
			return PlayAnimEndless(V_R4(&var0));
		}

		case 1002: {
			// line 13232: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopAnim( void) = 0;
			return StopAnim();
		}

		case 1003: {
			// line 13234: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowFrame(/* [in] */ float frame) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
			return ShowFrame(V_R4(&var0));
		}

		case 1004: {
			// line 13237: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ContinueAnim(/* [in] */ float speed) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
			return ContinueAnim(V_R4(&var0));
		}

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13240: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayTexture(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisplayTexture(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13243: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayTexture(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisplayTexture(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13246: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sides(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Sides(&V_I4(pVarResult));
			}

			case 1: {
				// line 13249: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Sides(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Sides(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13252: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13255: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13258: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 13261: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13264: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SideColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_SideColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 13267: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SideColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_SideColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13270: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawTexturesInside(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DrawTexturesInside(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13273: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawTexturesInside(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DrawTexturesInside(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13276: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 13279: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13282: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 13285: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13288: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NormalMap(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_NormalMap(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 13291: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NormalMap(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_NormalMap(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13294: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 13297: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13300: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 13303: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13306: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Z(&V_R4(pVarResult));
			}

			case 1: {
				// line 13309: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Z(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13312: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Size_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 13315: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Size_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13318: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Size_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 13321: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Size_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13324: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size_Z(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Size_Z(&V_R4(pVarResult));
			}

			case 1: {
				// line 13327: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size_Z(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Size_Z(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13330: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra0(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra0(&V_R4(pVarResult));
			}

			case 1: {
				// line 13333: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra0(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra0(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13336: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotX(&V_R4(pVarResult));
			}

			case 1: {
				// line 13339: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13342: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra1(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra1(&V_R4(pVarResult));
			}

			case 1: {
				// line 13345: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra1(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra1(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13348: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotY(&V_R4(pVarResult));
			}

			case 1: {
				// line 13351: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13354: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra2(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra2(&V_R4(pVarResult));
			}

			case 1: {
				// line 13357: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra2(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra2(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13360: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 13363: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13366: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra3(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra3(&V_R4(pVarResult));
			}

			case 1: {
				// line 13369: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra3(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra3(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13372: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TransX(&V_R4(pVarResult));
			}

			case 1: {
				// line 13375: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TransX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13378: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra4(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra4(&V_R4(pVarResult));
			}

			case 1: {
				// line 13381: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra4(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra4(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13384: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TransY(&V_R4(pVarResult));
			}

			case 1: {
				// line 13387: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TransY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13390: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra5(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra5(&V_R4(pVarResult));
			}

			case 1: {
				// line 13393: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra5(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra5(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13396: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_TransZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 13399: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_TransZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13402: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra6(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra6(&V_R4(pVarResult));
			}

			case 1: {
				// line 13405: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra6(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra6(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1033:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13408: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjRotX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ObjRotX(&V_R4(pVarResult));
			}

			case 1: {
				// line 13411: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ObjRotX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ObjRotX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1034:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13414: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra7(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra7(&V_R4(pVarResult));
			}

			case 1: {
				// line 13417: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra7(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra7(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1035:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13420: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjRotY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ObjRotY(&V_R4(pVarResult));
			}

			case 1: {
				// line 13423: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ObjRotY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ObjRotY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1036:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13426: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotAndTra8(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotAndTra8(&V_R4(pVarResult));
			}

			case 1: {
				// line 13429: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotAndTra8(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotAndTra8(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1037:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13432: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjRotZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ObjRotZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 13435: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ObjRotZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ObjRotZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1038:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13438: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeFactorUI(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_EdgeFactorUI(&V_R4(pVarResult));
			}

			case 1: {
				// line 13441: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EdgeFactorUI(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_EdgeFactorUI(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1039:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13444: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CollisionReductionFactor(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_CollisionReductionFactor(&V_R4(pVarResult));
			}

			case 1: {
				// line 13447: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CollisionReductionFactor(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_CollisionReductionFactor(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1040:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13450: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 13453: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1041:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13456: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableStaticRendering(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableStaticRendering(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13459: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableStaticRendering(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableStaticRendering(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1042:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13462: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 13465: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1043:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13468: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 13471: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1044:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13474: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13477: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1045:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13480: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsToy(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsToy(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13483: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsToy(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsToy(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1046:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13486: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackfacesEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_BackfacesEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13489: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackfacesEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_BackfacesEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1047:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13492: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13495: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1048:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13498: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Threshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 13501: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Threshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1049:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13504: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 13507: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1050:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13510: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 13513: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1051:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13516: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableLighting(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisableLighting(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13519: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableLighting(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisableLighting(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1052:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13522: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLighting(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLighting(&V_R4(pVarResult));
			}

			case 1: {
				// line 13525: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLighting(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLighting(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1053:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13528: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLightingFromBelow(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLightingFromBelow(&V_R4(pVarResult));
			}

			case 1: {
				// line 13531: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLightingFromBelow(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLightingFromBelow(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1054:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13534: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13537: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1055:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13540: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Opacity(&V_R4(pVarResult));
			}

			case 1: {
				// line 13543: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Opacity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1056:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13546: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddBlend(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_AddBlend(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13549: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AddBlend(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_AddBlend(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1057:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13552: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_Color(&V_UI4(pVarResult));
			}

			case 1: {
				// line 13555: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_Color((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1058:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13558: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DepthBias(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DepthBias(&V_R4(pVarResult));
			}

			case 1: {
				// line 13561: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DepthBias(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DepthBias(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1059:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13564: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PhysicsMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 13567: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PhysicsMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1060:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13570: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwritePhysics(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverwritePhysics(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13573: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwritePhysics(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverwritePhysics(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1061: {
			// line 13576: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitThreshold(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_HitThreshold(&V_R4(pVarResult));
		}

		case 1062:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 13579: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectSpaceNormalMap(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ObjectSpaceNormalMap(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 13582: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ObjectSpaceNormalMap(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ObjectSpaceNormalMap(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> HitTarget::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"z"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"scalex"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"scaley"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"scalez"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"orientation"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"threshold"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"disablelighting"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelighting"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"blenddisablelightingfrombelow"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"depthbias"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"dropspeed"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"isdropped"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"drawstyle"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"legacymode"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"raisedelay"), 1030 },
	robin_hood::pair<wstring, int> { wstring(L"physicsmaterial"), 1031 },
	robin_hood::pair<wstring, int> { wstring(L"overwritephysics"), 1032 },
	robin_hood::pair<wstring, int> { wstring(L"hitthreshold"), 1033 }
};

STDMETHODIMP HitTarget::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP HitTarget::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14794: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14797: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14800: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 14803: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14806: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14809: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14812: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 14815: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14818: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 14821: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14824: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 14827: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14830: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 14833: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14836: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 14839: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14842: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Z(&V_R4(pVarResult));
			}

			case 1: {
				// line 14845: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Z(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14848: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ScaleX(&V_R4(pVarResult));
			}

			case 1: {
				// line 14851: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ScaleX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14854: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ScaleY(&V_R4(pVarResult));
			}

			case 1: {
				// line 14857: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ScaleY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14860: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ScaleZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 14863: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ScaleZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14866: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Orientation(&V_R4(pVarResult));
			}

			case 1: {
				// line 14869: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Orientation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14872: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 14875: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14878: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 14881: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14884: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 14887: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14890: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14893: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14896: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14899: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14902: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Threshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 14905: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Threshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14908: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 14911: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14914: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 14917: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14920: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableLighting(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisableLighting(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14923: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableLighting(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisableLighting(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14926: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLighting(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLighting(&V_R4(pVarResult));
			}

			case 1: {
				// line 14929: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLighting(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLighting(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14932: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlendDisableLightingFromBelow(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BlendDisableLightingFromBelow(&V_R4(pVarResult));
			}

			case 1: {
				// line 14935: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlendDisableLightingFromBelow(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BlendDisableLightingFromBelow(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14938: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14941: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14944: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DepthBias(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DepthBias(&V_R4(pVarResult));
			}

			case 1: {
				// line 14947: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DepthBias(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DepthBias(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14950: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DropSpeed(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DropSpeed(&V_R4(pVarResult));
			}

			case 1: {
				// line 14953: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DropSpeed(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DropSpeed(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14956: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDropped(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsDropped(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14959: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDropped(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsDropped(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14962: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawStyle(/* [retval][out] */ TargetType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_DrawStyle((TargetType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 14965: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawStyle(/* [in] */ TargetType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_DrawStyle((TargetType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14968: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LegacyMode(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_LegacyMode(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14971: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LegacyMode(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_LegacyMode(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14974: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RaiseDelay(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_RaiseDelay((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 14977: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RaiseDelay(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_RaiseDelay(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1031:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14980: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PhysicsMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 14983: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PhysicsMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1032:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 14986: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwritePhysics(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverwritePhysics(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 14989: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwritePhysics(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverwritePhysics(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1033: {
			// line 14992: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitThreshold(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_HitThreshold(&V_R4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Gate::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"length"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"rotation"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"open"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"damping"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"gravityfactor"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"move"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"closeangle"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"openangle"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"twoway"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"showbracket"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"currentangle"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"drawstyle"), 1025 }
};

STDMETHODIMP Gate::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Gate::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15780: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 15783: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15786: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15789: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15792: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 15795: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15798: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Length(&V_R4(pVarResult));
			}

			case 1: {
				// line 15801: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Length(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15804: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 15807: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15810: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Rotation(&V_R4(pVarResult));
			}

			case 1: {
				// line 15813: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Rotation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15816: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 15819: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15822: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 15825: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15828: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Open(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Open(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15831: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Open(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Open(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15834: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Damping(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Damping(&V_R4(pVarResult));
			}

			case 1: {
				// line 15837: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Damping(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Damping(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15840: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GravityFactor(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_GravityFactor(&V_R4(pVarResult));
			}

			case 1: {
				// line 15843: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GravityFactor(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_GravityFactor(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011: {
			// line 15846: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Move(int dir,/* [defaultvalue] */ float speed = 0,/* [defaultvalue] */ float angle = 0) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1(0);
			VariantChangeType(&var1, (index > 0) ? &pDispParams->rgvarg[--index] : &var1, 0, VT_R4);
			CComVariant var2(0);
			VariantChangeType(&var2, (index > 0) ? &pDispParams->rgvarg[--index] : &var2, 0, VT_R4);
			return Move(V_I4(&var0), V_R4(&var1), V_R4(&var2));
		}

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15851: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 15854: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15857: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 15860: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15863: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 15866: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15869: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 15872: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15875: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CloseAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_CloseAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 15878: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CloseAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_CloseAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15881: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OpenAngle(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_OpenAngle(&V_R4(pVarResult));
			}

			case 1: {
				// line 15884: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OpenAngle(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_OpenAngle(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15887: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15890: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15893: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 15896: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15899: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15902: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15905: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TwoWay(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TwoWay(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15908: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TwoWay(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TwoWay(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15911: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBracket(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowBracket(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15914: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBracket(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowBracket(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1023: {
			// line 15917: virtual /* [helpstring][nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAngle(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_CurrentAngle(&V_R4(pVarResult));
		}

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15920: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 15923: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 15926: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawStyle(/* [retval][out] */ GateType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_DrawStyle((GateType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 15929: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawStyle(/* [in] */ GateType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_DrawStyle((GateType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Spinner::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"length"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"rotation"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"damping"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"surface"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"showbracket"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"anglemax"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"anglemin"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"currentangle"), 1019 }
};

STDMETHODIMP Spinner::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Spinner::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16583: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 16586: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16589: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 16592: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16595: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 16598: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16601: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Length(&V_R4(pVarResult));
			}

			case 1: {
				// line 16604: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Length(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16607: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Rotation(&V_R4(pVarResult));
			}

			case 1: {
				// line 16610: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Rotation(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16613: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 16616: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16619: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Damping(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Damping(&V_R4(pVarResult));
			}

			case 1: {
				// line 16622: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Damping(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Damping(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16625: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 16628: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16631: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 16634: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16637: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 16640: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16643: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 16646: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16649: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Surface(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 16652: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Surface(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Surface(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16655: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 16658: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16661: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBracket(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ShowBracket(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 16664: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBracket(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ShowBracket(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16667: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleMax(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngleMax(&V_R4(pVarResult));
			}

			case 1: {
				// line 16670: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleMax(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngleMax(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16673: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleMin(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngleMin(&V_R4(pVarResult));
			}

			case 1: {
				// line 16676: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleMin(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngleMin(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16679: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 16682: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16685: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 16688: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 16691: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 16694: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019: {
			// line 16697: virtual /* [helpstring][nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAngle(/* [retval][out] */ float *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_R4;
			return get_CurrentAngle(&V_R4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Ramp::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"heightbottom"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"heighttop"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"widthbottom"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"widthtop"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"type"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"imagealignment"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"haswallimage"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"leftwallheight"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"rightwallheight"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"visibleleftwallheight"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"visiblerightwallheight"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"threshold"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"depthbias"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"wirediameter"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"wiredistancex"), 1026 },
	robin_hood::pair<wstring, int> { wstring(L"wiredistancey"), 1027 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1028 },
	robin_hood::pair<wstring, int> { wstring(L"physicsmaterial"), 1029 },
	robin_hood::pair<wstring, int> { wstring(L"overwritephysics"), 1030 }
};

STDMETHODIMP Ramp::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Ramp::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17261: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 17264: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17267: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17270: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17273: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 17276: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17279: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HeightBottom(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HeightBottom(&V_R4(pVarResult));
			}

			case 1: {
				// line 17282: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HeightBottom(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HeightBottom(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17285: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HeightTop(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HeightTop(&V_R4(pVarResult));
			}

			case 1: {
				// line 17288: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HeightTop(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HeightTop(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17291: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WidthBottom(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WidthBottom(&V_R4(pVarResult));
			}

			case 1: {
				// line 17294: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WidthBottom(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WidthBottom(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17297: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WidthTop(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WidthTop(&V_R4(pVarResult));
			}

			case 1: {
				// line 17300: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WidthTop(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WidthTop(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17303: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 17306: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17309: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type(/* [retval][out] */ RampType *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Type((RampType*)&V_I4(pVarResult));
			}

			case 1: {
				// line 17312: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type(/* [in] */ RampType newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Type((RampType)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17315: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 17318: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17321: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageAlignment(/* [retval][out] */ RampImageAlignment *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_ImageAlignment((RampImageAlignment*)&V_I4(pVarResult));
			}

			case 1: {
				// line 17324: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageAlignment(/* [in] */ RampImageAlignment newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_ImageAlignment((RampImageAlignment)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17327: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasWallImage(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasWallImage(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17330: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasWallImage(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasWallImage(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17333: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeftWallHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_LeftWallHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 17336: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LeftWallHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_LeftWallHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17339: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RightWallHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RightWallHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 17342: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RightWallHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RightWallHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17345: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 17348: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17351: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibleLeftWallHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_VisibleLeftWallHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 17354: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibleLeftWallHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_VisibleLeftWallHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17357: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibleRightWallHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_VisibleRightWallHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 17360: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibleRightWallHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_VisibleRightWallHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17363: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 17366: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17369: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17372: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17375: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17378: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17381: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Threshold(&V_R4(pVarResult));
			}

			case 1: {
				// line 17384: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Threshold(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17387: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17390: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17393: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 17396: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17399: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 17402: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17405: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DepthBias(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DepthBias(&V_R4(pVarResult));
			}

			case 1: {
				// line 17408: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DepthBias(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DepthBias(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17411: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WireDiameter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WireDiameter(&V_R4(pVarResult));
			}

			case 1: {
				// line 17414: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WireDiameter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WireDiameter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17417: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WireDistanceX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WireDistanceX(&V_R4(pVarResult));
			}

			case 1: {
				// line 17420: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WireDistanceX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WireDistanceX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1027:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17423: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WireDistanceY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_WireDistanceY(&V_R4(pVarResult));
			}

			case 1: {
				// line 17426: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WireDistanceY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_WireDistanceY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1028:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17429: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17432: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1029:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17435: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PhysicsMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 17438: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PhysicsMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1030:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 17441: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwritePhysics(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverwritePhysics(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 17444: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwritePhysics(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverwritePhysics(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Flasher::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"imagealignment"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"rotz"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"roty"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"rotx"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"color"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"imagea"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"imageb"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"displaytexture"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"opacity"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"intensityscale"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"modulatevsadd"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"addblend"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"dmd"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"videocapwidth"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"videocapheight"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"videocapupdate"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"depthbias"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"filter"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"amount"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1026 }
};

STDMETHODIMP Flasher::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Flasher::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18070: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18073: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18076: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 18079: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18082: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 18085: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18088: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageAlignment(/* [retval][out] */ RampImageAlignment *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_ImageAlignment((RampImageAlignment*)&V_I4(pVarResult));
			}

			case 1: {
				// line 18091: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageAlignment(/* [in] */ RampImageAlignment newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_ImageAlignment((RampImageAlignment)V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18094: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 18097: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18100: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 18103: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18106: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotY(&V_R4(pVarResult));
			}

			case 1: {
				// line 18109: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18112: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotX(&V_R4(pVarResult));
			}

			case 1: {
				// line 18115: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18118: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_Color(&V_UI4(pVarResult));
			}

			case 1: {
				// line 18121: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_Color((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18124: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageA(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_ImageA(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18127: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageA(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_ImageA(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18130: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageB(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_ImageB(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18133: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageB(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_ImageB(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18136: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayTexture(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DisplayTexture(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18139: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayTexture(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DisplayTexture(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18142: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Opacity((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 18145: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Opacity(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18148: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IntensityScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_IntensityScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 18151: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IntensityScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_IntensityScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18154: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModulateVsAdd(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ModulateVsAdd(&V_R4(pVarResult));
			}

			case 1: {
				// line 18157: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ModulateVsAdd(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ModulateVsAdd(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18160: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 18163: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18166: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18169: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18172: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddBlend(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_AddBlend(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18175: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AddBlend(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_AddBlend(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18178: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DMD(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DMD(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18181: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DMD(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DMD(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019: {
			// line 18184: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VideoCapWidth(/* [in] */ long cWidth) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return put_VideoCapWidth(V_I4(&var0));
		}

		case 1020: {
			// line 18187: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VideoCapHeight(/* [in] */ long cHeight) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return put_VideoCapHeight(V_I4(&var0));
		}

		case 1021: {
			// line 18190: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VideoCapUpdate(/* [in] */ BSTR cWinTitle) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
			return put_VideoCapUpdate(V_BSTR(&var0));
		}

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18193: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DepthBias(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_DepthBias(&V_R4(pVarResult));
			}

			case 1: {
				// line 18196: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DepthBias(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_DepthBias(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18199: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Filter(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Filter(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18202: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Filter(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Filter(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18205: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Amount(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Amount((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 18208: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Amount(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Amount(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18211: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18214: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1026:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18217: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 18220: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> Rubber::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"hitheight"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"hashitevent"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"thickness"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"rotx"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"rotz"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"roty"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"material"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"elasticity"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"elasticityfalloff"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"collidable"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"friction"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"scatter"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"enablestaticrendering"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"enableshowineditor"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"physicsmaterial"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"overwritephysics"), 1023 }
};

STDMETHODIMP Rubber::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP Rubber::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18758: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18761: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18764: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 18767: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18770: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitHeight(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_HitHeight(&V_R4(pVarResult));
			}

			case 1: {
				// line 18773: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HitHeight(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_HitHeight(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18776: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasHitEvent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_HasHitEvent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18779: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasHitEvent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_HasHitEvent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18782: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Thickness(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_Thickness(&V_I4(pVarResult));
			}

			case 1: {
				// line 18785: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Thickness(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_Thickness(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18788: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotX(&V_R4(pVarResult));
			}

			case 1: {
				// line 18791: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18794: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 18797: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18800: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RotY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_RotY(&V_R4(pVarResult));
			}

			case 1: {
				// line 18803: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RotY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_RotY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18806: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Material(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Material(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18809: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Material(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Material(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18812: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18815: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18818: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Elasticity(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Elasticity(&V_R4(pVarResult));
			}

			case 1: {
				// line 18821: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Elasticity(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Elasticity(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18824: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElasticityFalloff(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_ElasticityFalloff(&V_R4(pVarResult));
			}

			case 1: {
				// line 18827: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ElasticityFalloff(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_ElasticityFalloff(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18830: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collidable(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Collidable(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18833: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collidable(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Collidable(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18836: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18839: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18842: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Friction(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Friction(&V_R4(pVarResult));
			}

			case 1: {
				// line 18845: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Friction(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Friction(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18848: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scatter(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Scatter(&V_R4(pVarResult));
			}

			case 1: {
				// line 18851: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scatter(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Scatter(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18854: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableStaticRendering(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableStaticRendering(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18857: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableStaticRendering(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableStaticRendering(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18860: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableShowInEditor(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_EnableShowInEditor(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18863: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableShowInEditor(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_EnableShowInEditor(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18866: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18869: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18872: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18875: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18878: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 18881: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18884: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 18887: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18890: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PhysicsMaterial(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_PhysicsMaterial(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 18893: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PhysicsMaterial(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_PhysicsMaterial(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 18896: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwritePhysics(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_OverwritePhysics(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 18899: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwritePhysics(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_OverwritePhysics(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> BallEx::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"x"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"velx"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"vely"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"z"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"velz"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"angvelx"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"angvely"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"angvelz"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"angmomx"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"angmomy"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"angmomz"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"color"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"frontdecal"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"decalmode"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"mass"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"radius"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"id"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"bulbintensityscale"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"reflectionenabled"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"playfieldreflectionscale"), 1023 },
	robin_hood::pair<wstring, int> { wstring(L"forcereflection"), 1024 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1025 },
	robin_hood::pair<wstring, int> { wstring(L"destroyball"), 1026 }
};

STDMETHODIMP BallEx::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP BallEx::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19413: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 19416: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19419: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 19422: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19425: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VelX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_VelX(&V_R4(pVarResult));
			}

			case 1: {
				// line 19428: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VelX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_VelX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19431: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VelY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_VelY(&V_R4(pVarResult));
			}

			case 1: {
				// line 19434: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VelY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_VelY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19437: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Z(&V_R4(pVarResult));
			}

			case 1: {
				// line 19440: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Z(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19443: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VelZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_VelZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 19446: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VelZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_VelZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19449: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngVelX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngVelX(&V_R4(pVarResult));
			}

			case 1: {
				// line 19452: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngVelX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngVelX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19455: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngVelY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngVelY(&V_R4(pVarResult));
			}

			case 1: {
				// line 19458: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngVelY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngVelY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19461: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngVelZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngVelZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 19464: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngVelZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngVelZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19467: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngMomX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngMomX(&V_R4(pVarResult));
			}

			case 1: {
				// line 19470: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngMomX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngMomX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19473: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngMomY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngMomY(&V_R4(pVarResult));
			}

			case 1: {
				// line 19476: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngMomY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngMomY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19479: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngMomZ(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_AngMomZ(&V_R4(pVarResult));
			}

			case 1: {
				// line 19482: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngMomZ(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_AngMomZ(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19485: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_Color(&V_UI4(pVarResult));
			}

			case 1: {
				// line 19488: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_Color((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19491: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 19494: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19497: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrontDecal(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_FrontDecal(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 19500: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrontDecal(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_FrontDecal(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19503: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DecalMode(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_DecalMode(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 19506: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DecalMode(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_DecalMode(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19509: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 19512: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19515: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mass(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Mass(&V_R4(pVarResult));
			}

			case 1: {
				// line 19518: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Mass(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Mass(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19521: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Radius(&V_R4(pVarResult));
			}

			case 1: {
				// line 19524: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Radius(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19527: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID(/* [retval][out] */ int *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_ID(&V_I4(pVarResult));
			}

			case 1: {
				// line 19530: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID(/* [in] */ int newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_ID(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19533: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 19536: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1021:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19539: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BulbIntensityScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_BulbIntensityScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 19542: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BulbIntensityScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_BulbIntensityScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1022:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19545: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReflectionEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ReflectionEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 19548: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReflectionEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ReflectionEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1023:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19551: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlayfieldReflectionScale(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_PlayfieldReflectionScale(&V_R4(pVarResult));
			}

			case 1: {
				// line 19554: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlayfieldReflectionScale(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_PlayfieldReflectionScale(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1024:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19557: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ForceReflection(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_ForceReflection(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 19560: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ForceReflection(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_ForceReflection(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1025:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 19563: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 19566: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1026: {
			// line 19569: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DestroyBall(/* [retval][out] */ int *pVal) = 0;
			if (pVarResult == NULL) {
				VARIANT valResult;
				VariantInit(&valResult);
				pVarResult = &valResult;
			}
			V_VT(pVarResult) = VT_I4;
			return DestroyBall(&V_I4(pVarResult));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> DispReel::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"backcolor"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"image"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"reels"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"width"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"height"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"spacing"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"istransparent"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"sound"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"steps"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1009 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1010 },
	robin_hood::pair<wstring, int> { wstring(L"x"), 1011 },
	robin_hood::pair<wstring, int> { wstring(L"y"), 1012 },
	robin_hood::pair<wstring, int> { wstring(L"range"), 1013 },
	robin_hood::pair<wstring, int> { wstring(L"name"), 1014 },
	robin_hood::pair<wstring, int> { wstring(L"updateinterval"), 1015 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1016 },
	robin_hood::pair<wstring, int> { wstring(L"useimagegrid"), 1017 },
	robin_hood::pair<wstring, int> { wstring(L"visible"), 1018 },
	robin_hood::pair<wstring, int> { wstring(L"imagespergridrow"), 1019 },
	robin_hood::pair<wstring, int> { wstring(L"addvalue"), 1020 },
	robin_hood::pair<wstring, int> { wstring(L"resettozero"), 1021 },
	robin_hood::pair<wstring, int> { wstring(L"spinreel"), 1022 },
	robin_hood::pair<wstring, int> { wstring(L"setvalue"), 1023 }
};

STDMETHODIMP DispReel::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP DispReel::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20489: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor(/* [retval][out] */ OLE_COLOR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_UI4;
				return get_BackColor(&V_UI4(pVarResult));
			}

			case 1: {
				// line 20492: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor(/* [in] */ OLE_COLOR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_UI4);
				return put_BackColor((OLE_COLOR)V_UI4(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20495: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Image(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 20498: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Image(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20501: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Reels(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Reels(&V_R4(pVarResult));
			}

			case 1: {
				// line 20504: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reels(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Reels(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20507: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Width(&V_R4(pVarResult));
			}

			case 1: {
				// line 20510: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Width(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20513: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Height(&V_R4(pVarResult));
			}

			case 1: {
				// line 20516: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Height(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20519: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Spacing(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Spacing(&V_R4(pVarResult));
			}

			case 1: {
				// line 20522: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Spacing(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Spacing(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20525: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsTransparent(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_IsTransparent(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 20528: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsTransparent(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_IsTransparent(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20531: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sound(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Sound(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 20534: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Sound(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Sound(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1008:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20537: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Steps(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Steps(&V_R4(pVarResult));
			}

			case 1: {
				// line 20540: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Steps(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Steps(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1009:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20543: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 20546: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1010:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20549: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 20552: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1011:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20555: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_X(&V_R4(pVarResult));
			}

			case 1: {
				// line 20558: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_X(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1012:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20561: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Y(&V_R4(pVarResult));
			}

			case 1: {
				// line 20564: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Y(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1013:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20567: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Range(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_Range(&V_R4(pVarResult));
			}

			case 1: {
				// line 20570: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Range(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_Range(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1014:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20573: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 20576: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1015:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20579: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UpdateInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_UpdateInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 20582: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UpdateInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_UpdateInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1016:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20585: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 20588: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1017:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20591: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseImageGrid(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_UseImageGrid(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 20594: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseImageGrid(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_UseImageGrid(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1018:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20597: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_Visible(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 20600: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_Visible(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1019:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 20603: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImagesPerGridRow(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_ImagesPerGridRow((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 20606: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImagesPerGridRow(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_ImagesPerGridRow(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1020: {
			// line 20609: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddValue(/* [in] */ long Value) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return AddValue(V_I4(&var0));
		}

		case 1021: {
			// line 20612: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetToZero( void) = 0;
			return ResetToZero();
		}

		case 1022: {
			// line 20614: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SpinReel(/* [in] */ long ReelNumber,/* [in] */ long PulseCount) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1;
			VariantChangeType(&var1, &pDispParams->rgvarg[--index], 0, VT_I4);
			return SpinReel(V_I4(&var0), V_I4(&var1));
		}

		case 1023: {
			// line 20618: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue(/* [in] */ long Value) = 0;
			CComVariant var0;
			VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
			return SetValue(V_I4(&var0));
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

robin_hood::unordered_map<wstring, int> LightSeq::m_nameIDMap = {
	robin_hood::pair<wstring, int> { wstring(L"name"), 1000 },
	robin_hood::pair<wstring, int> { wstring(L"collection"), 1001 },
	robin_hood::pair<wstring, int> { wstring(L"centerx"), 1002 },
	robin_hood::pair<wstring, int> { wstring(L"centery"), 1003 },
	robin_hood::pair<wstring, int> { wstring(L"updateinterval"), 1004 },
	robin_hood::pair<wstring, int> { wstring(L"timerenabled"), 1005 },
	robin_hood::pair<wstring, int> { wstring(L"timerinterval"), 1006 },
	robin_hood::pair<wstring, int> { wstring(L"uservalue"), 1007 },
	robin_hood::pair<wstring, int> { wstring(L"play"), 1008 },
	robin_hood::pair<wstring, int> { wstring(L"stopplay"), 1009 }
};

STDMETHODIMP LightSeq::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {
	wstring name = wstring(*rgszNames);
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);
	if (it != m_nameIDMap.end()) {
		*rgDispId = it->second;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

STDMETHODIMP LightSeq::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {
	switch(dispIdMember) {
		case 1000:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21222: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Name(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 21225: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Name(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1001:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21228: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Collection(/* [retval][out] */ BSTR *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BSTR;
				return get_Collection(&V_BSTR(pVarResult));
			}

			case 1: {
				// line 21231: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Collection(/* [in] */ BSTR newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BSTR);
				return put_Collection(V_BSTR(&var0));
			}

			default:
			break;
		}
		break;

		case 1002:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21234: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterX(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_CenterX(&V_R4(pVarResult));
			}

			case 1: {
				// line 21237: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CenterX(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_CenterX(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1003:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21240: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterY(/* [retval][out] */ float *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_R4;
				return get_CenterY(&V_R4(pVarResult));
			}

			case 1: {
				// line 21243: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CenterY(/* [in] */ float newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_R4);
				return put_CenterY(V_R4(&var0));
			}

			default:
			break;
		}
		break;

		case 1004:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21246: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UpdateInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_UpdateInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 21249: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UpdateInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_UpdateInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1005:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21252: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerEnabled(/* [retval][out] */ VARIANT_BOOL *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_BOOL;
				return get_TimerEnabled(&V_BOOL(pVarResult));
			}

			case 1: {
				// line 21255: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerEnabled(/* [in] */ VARIANT_BOOL newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_BOOL);
				return put_TimerEnabled(V_BOOL(&var0));
			}

			default:
			break;
		}
		break;

		case 1006:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21258: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimerInterval(/* [retval][out] */ long *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				V_VT(pVarResult) = VT_I4;
				return get_TimerInterval((long*)&V_I4(pVarResult));
			}

			case 1: {
				// line 21261: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimerInterval(/* [in] */ long newVal) = 0;
				CComVariant var0;
				VariantChangeType(&var0, pDispParams->rgvarg, 0, VT_I4);
				return put_TimerInterval(V_I4(&var0));
			}

			default:
			break;
		}
		break;

		case 1007:
		switch(pDispParams->cArgs) {
			case 0: {
				// line 21264: virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserValue(/* [retval][out] */ VARIANT *pVal) = 0;
				if (pVarResult == NULL) {
					VARIANT valResult;
					VariantInit(&valResult);
					pVarResult = &valResult;
				}
				return get_UserValue(pVarResult);
			}

			case 1: {
				// line 21267: virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserValue(/* [in] */ VARIANT *newVal) = 0;
				CComVariant var0;
				VariantCopy(&var0, pDispParams->rgvarg);
				return put_UserValue(&var0);
			}

			default:
			break;
		}
		break;

		case 1008: {
			// line 21270: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Play(/* [in] */ SequencerState Animation,/* [defaultvalue] */ long TailLength = 0,/* [defaultvalue] */ long Repeat = 1,/* [defaultvalue] */ long Pause = 0) = 0;
			int index = pDispParams->cArgs;
			CComVariant var0;
			VariantChangeType(&var0, &pDispParams->rgvarg[--index], 0, VT_I4);
			CComVariant var1(0);
			VariantChangeType(&var1, (index > 0) ? &pDispParams->rgvarg[--index] : &var1, 0, VT_I4);
			CComVariant var2(1);
			VariantChangeType(&var2, (index > 0) ? &pDispParams->rgvarg[--index] : &var2, 0, VT_I4);
			CComVariant var3(0);
			VariantChangeType(&var3, (index > 0) ? &pDispParams->rgvarg[--index] : &var3, 0, VT_I4);
			return Play((SequencerState)V_I4(&var0), V_I4(&var1), V_I4(&var2), V_I4(&var3));
		}

		case 1009: {
			// line 21276: virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopPlay( void) = 0;
			return StopPlay();
		}

		default:
		break;
	}

	return DISP_E_UNKNOWNNAME;
}

