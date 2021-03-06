#ifndef DRAW_WND2_HEAD_FILE
#define DRAW_WND2_HEAD_FILE

#pragma once

#include "Stdafx.h"
#include "Resource.h"

//////////////////////////////////////////////////////////////////////////
#define IDM_GAME_START2			(WM_USER+404)						//扑克操作
//////////////////////////////////////////////////////////////////////////

//控制窗口
class CDrawSiceWnd2 : public CWnd
{
	//配置变量
protected:
	CSkinImage						m_ImageBack;						//背景图案
	CSkinImage						m_ImageDrawSiceFirst;				//动作解释
	CSkinImage						m_ImageDrawSiceSecond;				//
	BYTE                            m_bSicePos;
	int m_nXPos;
	int m_nYPos;
	CDC      *ParentDC;
	//函数定义
public:
	//构造函数
	CDrawSiceWnd2();
	//析构函数
	virtual ~CDrawSiceWnd2();

	//内部函数
public:
	void SetSiceInfo(CDC *dc,BYTE bMoveTime,BYTE SiceFirst,BYTE SiceSecond);
	void SetBenchmarkPos(int nXPos, int nYPos);
	//消息映射
protected:
	//重画函数
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_MESSAGE_MAP()
};

//////////////////////////////////////////////////////////////////////////

#endif