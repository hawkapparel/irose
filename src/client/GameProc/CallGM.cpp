#include "stdafx.h"
#include ".\callgm.h"
#include "../System/SystemProcScript.h"


CCallGM::CCallGM(void)
{
}

CCallGM::~CCallGM(void)
{
}

void CCallGM::CallGM( std::string& strServerName, std::string& strChannelName, std::string& strMsg  )
{
	std::string strSendedString = strServerName + "_" + strChannelName + "_" + strMsg;

	CSystemProcScript::GetSingleton().CallLuaFunction( "SendGMCall", 
												ZZ_PARAM_INT,
												0,
												ZZ_PARAM_STRING,
												strSendedString,
												ZZ_PARAM_END );	
}