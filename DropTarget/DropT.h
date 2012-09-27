// DropT.h : Declaration of the CDropT
#pragma once
#include <vector>
#include <string>
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "DropTarget_i.h"
#include "_IDropTEvents_CP.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CDropT
class ATL_NO_VTABLE CDropT :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CStockPropImpl<CDropT, IDropT>,
	public IPersistStreamInitImpl<CDropT>,
	public IOleControlImpl<CDropT>,
	public IOleObjectImpl<CDropT>,
	public IOleInPlaceActiveObjectImpl<CDropT>,
	public IViewObjectExImpl<CDropT>,
	public IOleInPlaceObjectWindowlessImpl<CDropT>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CDropT>,
	public CProxy_IDropTEvents<CDropT>,
	public IPersistStorageImpl<CDropT>,
	public IQuickActivateImpl<CDropT>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CDropT>,
#endif
	public IProvideClassInfo2Impl<&CLSID_DropT, &__uuidof(_IDropTEvents), &LIBID_DropTargetLib>,
	public IPropertyNotifySinkCP<CDropT>,
	public CComCoClass<CDropT, &CLSID_DropT>,
	public CComControl<CDropT>,
	public IDropTarget
{
public:

	CDropT() { }
	HRESULT FinalConstruct() {	return S_OK; }
	void FinalRelease()	{ }

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_DROPT)

BEGIN_COM_MAP(CDropT)
	COM_INTERFACE_ENTRY(IDropT)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
END_COM_MAP()

BEGIN_PROP_MAP(CDropT)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	PROP_ENTRY_TYPE("AutoSize", DISPID_AUTOSIZE, CLSID_NULL, VT_BOOL)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CDropT)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
	CONNECTION_POINT_ENTRY(__uuidof(_IDropTEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CDropT)
	CHAIN_MSG_MAP(CComControl<CDropT>)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
	
// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

public:
	DECLARE_PROTECT_FINAL_CONSTRUCT()
	
	HRESULT CDropT::OnDraw(ATL_DRAWINFO& di);
	void OnAutoSizeChanged() {	ATLTRACE(_T("OnAutoSizeChanged\n")); }
	
	STDMETHOD(GetDropTarget)(IDropTarget** ppDropTarget);

//IDropTarget
  STDMETHOD(DragEnter)(IDataObject* pDataObj, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect);
  STDMETHOD(DragOver)(DWORD grfKeyState, POINTL pt, DWORD* pdwEffect);
  STDMETHOD(DragLeave)();
  STDMETHOD(Drop)(IDataObject* pDataObj, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect);

private:
	std::vector<std::wstring> m_lsDroppedFiles;
};

OBJECT_ENTRY_AUTO(__uuidof(DropT), CDropT)
