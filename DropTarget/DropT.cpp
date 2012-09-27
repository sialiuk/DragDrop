// DropT.cpp : Implementation of CDropT
#include "stdafx.h"
#include "DropT.h"


// CDropT
	HRESULT CDropT::OnDraw(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		// Set Clip region to the rectangle specified by di.prcBounds
		HRGN hRgnOld = NULL;
		if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
			hRgnOld = NULL;
		bool bSelectOldRgn = false;

		HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

		if (hRgnNew != NULL)
		{
			bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
		}

		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
		SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
		LPCTSTR pszText = _T("DropT");
	#ifndef _WIN32_WCE
		TextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			pszText,
			lstrlen(pszText));
	#else
		ExtTextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			ETO_OPAQUE,
			NULL,
			pszText,
			ATL::lstrlen(pszText),
			NULL);
	#endif
		if (bSelectOldRgn)
			SelectClipRgn(di.hdcDraw, hRgnOld);

		DeleteObject(hRgnNew);
		return S_OK;
	}

	STDMETHODIMP CDropT::InterfaceSupportsErrorInfo(REFIID riid)
	{
		static const IID* const arr[] =
		{
			&IID_IDropT,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

	STDMETHODIMP CDropT::GetDropTarget (IDropTarget** ppDropTarget)
	{
		*ppDropTarget = this;
		this->AddRef();
		return S_OK;
	}

//IDropTarget
	STDMETHODIMP CDropT::DragEnter(IDataObject* pDataObj, DWORD grfKeyState,
														 POINTL pt, DWORD* pdwEffect)
	{
		COleDataObject dataObj;
		HGLOBAL global = NULL;
		HDROP dropFile = NULL;

		dataObj.Attach(pDataObj, FALSE);
		if(global = dataObj.GetGlobalData(CF_HDROP))
		{
			UINT numDropFile = 0;
			wchar_t buff[MAX_PATH];
			dropFile = static_cast<HDROP>(GlobalLock(global));
			numDropFile = DragQueryFile(dropFile, 0xFFFFFFFF, buff, MAX_PATH);
			for(UINT i = 0; i != numDropFile; ++i)
			{
				if(DragQueryFile(dropFile, i, buff, MAX_PATH))
				{
					m_lsDroppedFiles.push_back(buff);
				}
			}
			GlobalUnlock(global);
		}

		dataObj.Detach();

		if(!m_lsDroppedFiles.empty())
		{
			*pdwEffect = DROPEFFECT_COPY;
		}
		else
		{
			*pdwEffect = DROPEFFECT_NONE;
		}
		return S_OK;	
	}

  STDMETHODIMP CDropT::DragOver(DWORD grfKeyState, POINTL pt, DWORD* pdwEffect)
  {
	  *pdwEffect = DROPEFFECT_COPY;
	  return S_OK; 
  }

  STDMETHODIMP CDropT::DragLeave() 
  {
	  if(!m_lsDroppedFiles.empty())
	  {
		m_lsDroppedFiles.clear();
		m_lsDroppedFiles.shrink_to_fit();
	  }
	  return S_OK;
  }

  STDMETHODIMP CDropT::Drop(IDataObject* pDataObj, DWORD grfKeyState,
						 POINTL pt, DWORD* pdwEffect)
  {
	  std::wstring tempbuff;
	  for(auto it = m_lsDroppedFiles.cbegin(); it != m_lsDroppedFiles.cend(); ++it)
	  {
		tempbuff += *it;
		tempbuff += '\n';
	  }
	  
	  if(!m_lsDroppedFiles.empty())
	  {
		m_lsDroppedFiles.clear();
		m_lsDroppedFiles.shrink_to_fit();
	  }
	  
	  MessageBox(tempbuff.c_str(), L"Files List", MB_OK);
	  
	  *pdwEffect = DROPEFFECT_COPY;
	  return S_OK;
  }
