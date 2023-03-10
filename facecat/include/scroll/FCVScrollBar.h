/*
 * FaceCat图形通讯框架(非开源)
 * 著作权编号:2015SR229355+2020SR0266727
 * 上海卷卷猫信息技术有限公司
 */

#ifdef __FCVSCROLLBAR_H__
#else                                                                            
#define __FCVSCROLLBAR_H__ _declspec(dllexport) 
#endif
#pragma once
#include "..\\..\\stdafx.h"
#include "FCScrollBar.h"

namespace FaceCat{
	/*
	* 纵向滚动条
	*/
	class __FCVSCROLLBAR_H__ FCVScrollBar:public FCScrollBar{
	public:
		/*
		* 构造函数
		*/
		FCVScrollBar();
		/*
		* 析构函数
		*/
		virtual ~FCVScrollBar();
		/*
		* 触摸事件
		*/
		virtual void callTouchEvent(String eventName, Object sender, FCTouchInfo touchInfo, Object invoke);
		/**
		 * 获取视图类型
		 */
		virtual String getViewType();
		/**
		 * 滚动条背景按钮触摸按下回调方法
		 */
		virtual void onBackButtonTouchDown(FCTouchInfo touchInfo);
		/**
		 * 滚动条背景按钮触摸抬起方法
		 */
		virtual void onBackButtonTouchUp(FCTouchInfo touchInfo);
		/**
		 * 拖动滚动方法
		 */
		virtual void onDragScroll();
		/**
		 * 添加视图方法
		 */
		virtual void onLoad();
		/**
		 * 重新布局方法
		 */
		virtual void update();
	};
}
