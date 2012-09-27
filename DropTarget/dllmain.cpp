// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "DropTarget_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CDropTargetModule _AtlModule;

class CDropTargetApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CDropTargetApp, CWinApp)
END_MESSAGE_MAP()

CDropTargetApp theApp;

BOOL CDropTargetApp::InitInstance()
{
#ifdef _MERGE_PROXYSTUB
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
#endif
	return CWinApp::InitInstance();
}

int CDropTargetApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
