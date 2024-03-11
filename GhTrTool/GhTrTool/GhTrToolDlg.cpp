﻿
// GhTrToolDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "GhTrTool.h"
#include "GhTrToolDlg.h"
#include "afxdialogex.h"
#include<string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "PlantID.h"
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CGhTrToolDlg 对话框



CGhTrToolDlg::CGhTrToolDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_GhTrTool_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_bIsRed = true;
}
void CGhTrToolDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_TEXT, m_StaticText);
}

BEGIN_MESSAGE_MAP(CGhTrToolDlg, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDC_BTN_SUN, &CGhTrToolDlg::OnBnClickedBtnSun)
	ON_BN_CLICKED(IDC_BTN_SP, &CGhTrToolDlg::OnBnClickedBtnSeedPacket)
	ON_BN_CLICKED(IDC_BTN_ModifySeedPacket, &CGhTrToolDlg::OnBnClickedBtnModifySeedPacket)
	ON_BN_CLICKED(IDC_BTN_DifficultySwitcher, &CGhTrToolDlg::OnBnClickedBtnDifficultySwitcher)
	ON_BN_CLICKED(IDC_BTN_Plant, &CGhTrToolDlg::OnBnClickedBtnPlant)
    ON_BN_CLICKED(IDC_BTN_SUN_NOP, &CGhTrToolDlg::OnBnClickedBtnSunNop)
    ON_BN_CLICKED(IDC_BTN_NO_CD, &CGhTrToolDlg::OnBnClickedBtnNoCd)
    ON_BN_CLICKED(IDC_BTN_BGId, &CGhTrToolDlg::OnBnClickedBtnBGId)
    ON_BN_CLICKED(IDC_BTN_BUILD, &CGhTrToolDlg::OnBnClickedBtnBuild)
    ON_BN_CLICKED(IDC_BTN_AUTO, &CGhTrToolDlg::OnBnClickedBtnAuto)
    ON_BN_CLICKED(IDC_BTN_CARD, &CGhTrToolDlg::OnBnClickedBtnCard)
    ON_BN_CLICKED(IDC_BTN_Fast, &CGhTrToolDlg::OnBnClickedBtnFast)
    ON_BN_CLICKED(IDC_BTN_TheWorld, &CGhTrToolDlg::OnBnClickedBtnTheWorld)
    ON_BN_CLICKED(IDC_BTN_NoModelCD, &CGhTrToolDlg::OnBnClickedBtnNoModelCD)
    ON_BN_CLICKED(IDC_BTN_Mowers, &CGhTrToolDlg::OnBnClickedBtnMowers)
	ON_BN_CLICKED(IDC_BTN_PeaSDamage, &CGhTrToolDlg::OnBnClickedBtnPeaSDamage)
	ON_BN_CLICKED(IDC_BTN_NoBuildTime, &CGhTrToolDlg::OnBnClickedBtnNoBuildTime)
	ON_BN_CLICKED(IDC_BTN_NOSUNMAX, &CGhTrToolDlg::OnBnClickedBtnNoSunMax)
    ON_BN_CLICKED(IDC_BTN_ZombieDC, &CGhTrToolDlg::OnBnClickedBtnZombieDC)
    ON_BN_CLICKED(IDC_BTN_NotSubvert, &CGhTrToolDlg::OnBnClickedBtnNotSubvert)
    ON_BN_CLICKED(IDC_BTN_GodMode, &CGhTrToolDlg::OnBnClickedBtnGodMode)
	ON_BN_CLICKED(IDC_BTN_ItemNoDie, &CGhTrToolDlg::OnBnClickedBtnItemNoDie)
	ON_BN_CLICKED(IDC_BTN_LingSDamage, &CGhTrToolDlg::OnBnClickedBtnLingSDamage)
	ON_BN_CLICKED(IDC_BTN_IgnoreSun, &CGhTrToolDlg::OnBnClickedBtnIgnoreSun)
	ON_BN_CLICKED(IDC_BTN_SummonCup, &CGhTrToolDlg::OnBnClickedBtnSummonCup)
	ON_BN_CLICKED(IDC_BTN_LoursMC, &CGhTrToolDlg::OnBnClickedBtnLoursMC)
	ON_BN_CLICKED(IDC_BTN_MeowFast, &CGhTrToolDlg::OnBnClickedBtnMeowFast)
	ON_BN_CLICKED(IDC_BTN_POINT, &CGhTrToolDlg::OnBnClickedBtnPoint)
	ON_BN_CLICKED(IDC_BTN_POINT2, &CGhTrToolDlg::OnBnClickedBtnPoint2)
	ON_BN_CLICKED(IDC_BTN_DX, &CGhTrToolDlg::OnBnClickedBtnDX)
	ON_BN_CLICKED(IDC_BTN_CherryFast, &CGhTrToolDlg::OnBnClickedBtnCherryFast)
	ON_BN_CLICKED(IDC_BTN_CherryNo, &CGhTrToolDlg::OnBnClickedBtnCherryNo)
	ON_BN_CLICKED(IDC_BTN_ApplayerNoCD, &CGhTrToolDlg::OnBnClickedBtnApplayerNoCD)
	ON_BN_CLICKED(IDC_BTN_ApplayerNoLag, &CGhTrToolDlg::OnBnClickedBtnApplayerNoLag)
	ON_BN_CLICKED(IDC_BTN_PlantageNoCD, &CGhTrToolDlg::OnBnClickedBtnPlantageNoCD)
	ON_BN_CLICKED(IDC_BTN_SunFlowerNoCD, &CGhTrToolDlg::OnBnClickedBtnSunFlowerNoCD)
	ON_BN_CLICKED(IDC_BTN_PeaNoCD, &CGhTrToolDlg::OnBnClickedBtnPeaNoCD)
	ON_BN_CLICKED(IDC_BTN_SuperReed, &CGhTrToolDlg::OnBnClickedBtnSuperReed)
	ON_BN_CLICKED(IDC_BTN_PowerFlowerNoCD, &CGhTrToolDlg::OnBnClickedBtnPowerFlowerNoCD)
	ON_BN_CLICKED(IDC_BTN_AwayMax, &CGhTrToolDlg::OnBnClickedBtnAwayMax)
	ON_BN_CLICKED(IDC_BTN_SunNoDelay, &CGhTrToolDlg::OnBnClickedBtnSunNoDelay)
	ON_BN_CLICKED(IDC_BTN_BuildTheArray, &CGhTrToolDlg::OnBnClickedBtnBuildTheArray)
	ON_BN_CLICKED(IDC_BTN_ClearZombie, &CGhTrToolDlg::OnBnClickedBtnClearZombie)
	ON_BN_CLICKED(IDC_BTN_FixCrashBug, &CGhTrToolDlg::OnBnClickedBtnFixCrashBug)
	ON_BN_CLICKED(IDC_BTN_ToDaoXiangJi, &CGhTrToolDlg::OnBnClickedBtnToDaoXiangJi)
	ON_BN_CLICKED(IDC_BTN_ToHongZhen, &CGhTrToolDlg::OnBnClickedBtnToHongZhen)
	ON_BN_CLICKED(IDC_BTN_ClearPlant, &CGhTrToolDlg::OnBnClickedBtnClearPlant)
	ON_BN_CLICKED(IDC_BTN_ClearBullet, &CGhTrToolDlg::OnBnClickedBtnClearBullet)
	ON_BN_CLICKED(IDC_BTN_Plant2, &CGhTrToolDlg::OnBnClickedBtnPlantIDList)
	ON_BN_CLICKED(IDC_BTN_Plant3, &CGhTrToolDlg::OnBnClickedBtnPlantIDList)
	ON_BN_CLICKED(IDC_BTN_Plant4, &CGhTrToolDlg::OnBnClickedBtnPlantIDList)
	ON_BN_CLICKED(IDC_BTN_Plant5, &CGhTrToolDlg::OnBnClickedBtnPlantIDList)
END_MESSAGE_MAP()
// CGhTrToolDlg 消息处理程序
HBRUSH CGhTrToolDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// 如果当前控件是你要改变颜色的静态文本
	if (pWnd->GetDlgCtrlID() == IDC_STATIC_TEXT)
	{
		if(m_bIsRed)
			pDC->SetTextColor(RGB(255, 100, 103));
		else
			pDC->SetTextColor(RGB(55, 55, 255));
		pDC->SelectObject(&m_font);  // 设置字体
		// 返回画刷句柄
		hbr = (HBRUSH)GetStockObject(NULL_BRUSH);
	}
	return hbr;
}


BOOL CGhTrToolDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// 将“关于...”菜单项添加到系统菜单中。
	UpdateText();
	SetDlgItemText(IDC_EDIT_YP, _T("0"));
	SetDlgItemText(IDC_EDIT_XP, _T("0"));
	SetDlgItemText(IDC_EDIT_ID, _T("1"));
	m_brush.CreateSolidBrush(RGB(255, 0, 0));
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
	m_font.CreatePointFont(200, _T("微软雅黑"));
	SetTimer(1, 1000, NULL); 
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CGhTrToolDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。
DWORD CGhTrToolDlg::GetGamePid()
{
	HWND hWnd = ::FindWindow(NULL, GAME_NAME);

	if (hWnd == NULL)
	{
		return -1;
	}

	DWORD dwPid = 0;
	::GetWindowThreadProcessId(hWnd, &dwPid);

	return dwPid;
}
void CGhTrToolDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}
BOOL check_dwPid2(DWORD dwPid)
{
	if (dwPid == -1)
	{
		MessageBox(NULL, L"游戏未找到，请打开游戏后点击功能", L"Info", MB_OK);
		return false;
	}
	return true;
}
//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CGhTrToolDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CGhTrToolDlg::UpdateText()
{
	int pid = GetGamePid();
	if (pid == -1)
	{
		m_bIsRed = 1;
		m_StaticText.SetWindowText(_T("游戏未找到"));
	}
	else
	{
		m_bIsRed = 0;
		m_StaticText.SetWindowText(_T("游戏已找到"));
	}
}
void CGhTrToolDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 1)
	{
		UpdateText();
	}

	CDialogEx::OnTimer(nIDEvent);
}

void CGhTrToolDlg::OnBnClickedBtnPlantIDList()
{
	PlantID dlg;
	dlg.DoModal(); // 显示对话框
}

void CGhTrToolDlg::OnBnClickedBtnSun()
{
    DWORD dwSun = GetDlgItemInt(IDC_EDIT_SUN);

    CPvz pvz = CPvz(); pvz.WriteConfig();
    pvz.ModifySunValue(dwSun);
}

void CGhTrToolDlg::OnBnClickedBtnDifficultySwitcher()
{
	DWORD dwDiff = GetDlgItemInt(IDC_EDIT_Diff);

	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.DifficultySwitcher(dwDiff);
}

void CGhTrToolDlg::OnBnClickedBtnModifySeedPacket()
{
	DWORD dwID = GetDlgItemInt(IDC_EDIT_SPID);
	DWORD dwNum = GetDlgItemInt(IDC_EDIT_SPNUM);
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ModifySeedPacket(dwID , dwNum);
}

void CGhTrToolDlg::OnBnClickedBtnSeedPacket()
{
	DWORD dwSP = GetDlgItemInt(IDC_EDIT_SP2);

	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.SeedPacket(dwSP);
}

void CGhTrToolDlg::OnBnClickedBtnPlant()
{
	DWORD dwXP = GetDlgItemInt(IDC_EDIT_XP);
	DWORD dwYP = GetDlgItemInt(IDC_EDIT_YP);
	DWORD dwID = GetDlgItemInt(IDC_EDIT_ID);
	CPvz pvz = CPvz(); pvz.WriteConfig();
	if (dwXP == 0 && dwYP == 0)
	{
		for (int X = 1; X <= 9; ++X) 
		{
			for (int Y = 1; Y <= 5; ++Y)
			{
				pvz.Plant(X, Y, dwID);
			}
		}
	}
	else if (dwXP == 0)
	{
		for (int X = 1; X <= 9; ++X)
		{
			pvz.Plant(X, dwYP, dwID);
			Sleep(80);
		}
	}
	else if (dwYP == 0)
	{
		for (int Y = 1; Y <= 5; ++Y)
		{
			pvz.Plant(dwXP, Y, dwID);
			Sleep(80);
		}
	}
	else
		pvz.Plant(dwXP,dwYP,dwID);
}

void CGhTrToolDlg::OnBnClickedBtnSunNop()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_SUN_NOP);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunNop(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunNop(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnNoCd()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_NO_CD);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoCd(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoCd(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnBGId()
{
    DWORD dwBGId = GetDlgItemInt(IDC_EDIT_BGId);
    CPvz pvz = CPvz(); pvz.WriteConfig();
    pvz.ModifyBGIdValue(dwBGId);
}


void CGhTrToolDlg::OnBnClickedBtnBuild()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_BUILD);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Build(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Build(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnAuto()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_AUTO);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Auto(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Auto(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnCard()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_CARD);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Card(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Card(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnPoint()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_POINT);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Point(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Point(0);
	}
}
void CGhTrToolDlg::OnBnClickedBtnPoint2()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_POINT2);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Point2(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Point2(0);
	}
}
void CGhTrToolDlg::OnBnClickedBtnDX()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_DX);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.DX(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.DX(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnFast()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_Fast);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Fast(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Fast(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnTheWorld()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_TheWorld);
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.TheWorld(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.TheWorld(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnNoModelCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_NoModelCD);	
	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoModelCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoModelCD(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnMowers()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_Mowers);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Mowers(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.Mowers(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnPeaSDamage()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_PeaSDamage);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PeaSDamage(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PeaSDamage(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnNoBuildTime()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_NoBuildTime);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoBuildTime(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoBuildTime(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnNoSunMax()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_NOSUNMAX);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoSunMax(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NoSunMax(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnZombieDC()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_ZombieDC);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ZombieDC(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ZombieDC(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnNotSubvert()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_NotSubvert);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NotSubvert(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.NotSubvert(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnGodMode()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_GodMode);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.GodMode(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.GodMode(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnItemNoDie()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_ItemNoDie);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ItemNoDie(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ItemNoDie(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnSunNoDelay()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_SunNoDelay);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunNoDelay(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunNoDelay(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnBuildTheArray()
{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.BuildTheArray();
}

void CGhTrToolDlg::OnBnClickedBtnClearZombie()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ClearZombie();
}

void CGhTrToolDlg::OnBnClickedBtnFixCrashBug()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.FixCrashBug();
}

void CGhTrToolDlg::OnBnClickedBtnToDaoXiangJi()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ToDaoXiangJi();
}

void CGhTrToolDlg::OnBnClickedBtnToHongZhen()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ToHongZhen();
}

void CGhTrToolDlg::OnBnClickedBtnClearPlant()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ClearPlant();
}

void CGhTrToolDlg::OnBnClickedBtnClearBullet()
{
	CPvz pvz = CPvz(); pvz.WriteConfig();
	pvz.ClearBullet();
}

void CGhTrToolDlg::OnBnClickedBtnSuperReed()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_SuperReed);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SuperReed(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SuperReed(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnPowerFlowerNoCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_PowerFlowerNoCD);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PowerFlowerNoCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PowerFlowerNoCD(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnAwayMax()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_AwayMax);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.AwayMax(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.AwayMax(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnApplayerNoCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_ApplayerNoCD);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ApplayerNoCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ApplayerNoCD(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnApplayerNoLag()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_ApplayerNoLag);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ApplayerNoLag(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.ApplayerNoLag(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnPlantageNoCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_PlantageNoCD);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PlantageNoCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PlantageNoCD(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnPeaNoCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_PeaNoCD); 	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PeaNoCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.PeaNoCD(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnSunFlowerNoCD()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_SunFlowerNoCD);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunFlowerNoCD(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SunFlowerNoCD(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnLingSDamage()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_LingSDamage);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.LingSDamage(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.LingSDamage(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnIgnoreSun()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_IgnoreSun);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.IgnoreSun(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.IgnoreSun(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnSummonCup()
{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.SummonCup();
}

void CGhTrToolDlg::OnBnClickedBtnLoursMC()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_LoursMC);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.LoursMC(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.LoursMC(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnMeowFast()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_MeowFast);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.MeowFast(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.MeowFast(0);
	}
}

void CGhTrToolDlg::OnBnClickedBtnCherryNo()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_CherryNo);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.CherryNo(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.CherryNo(0);
	}
}


void CGhTrToolDlg::OnBnClickedBtnCherryFast()
{
	CButton* pCheck = (CButton*)GetDlgItem(IDC_BTN_CherryFast);	if (!check_dwPid2(GetGamePid())) { pCheck->SetCheck(BST_UNCHECKED); return; }
	int checkState = pCheck->GetCheck();
	if (checkState == BST_CHECKED)
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.CherryFast(1);
	}
	else
	{
		CPvz pvz = CPvz(); pvz.WriteConfig();
		pvz.CherryFast(0);
	}
}