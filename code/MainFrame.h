/*��������èFaceCat��� v1.0
�Ϻ����è��Ϣ�������޹�˾
 */

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__
#pragma once
#include "stdafx.h"
#include "..\\facecat\\include\\xml\\FCUIXml.h"

class MainFrame : public FCUIXml{
public:
	MainFrame();
	virtual ~MainFrame();
public:
	//�����ļ�
	virtual void loadFile(const String& fileName, FCView *view);
};


#endif