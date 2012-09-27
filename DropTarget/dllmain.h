// dllmain.h : Declaration of module class.

class CDropTargetModule : public ATL::CAtlDllModuleT< CDropTargetModule >
{
public :
	DECLARE_LIBID(LIBID_DropTargetLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DROPTARGET, "{AFE81E13-53B3-4759-BC49-E4912E54DB3E}")
};

extern class CDropTargetModule _AtlModule;
