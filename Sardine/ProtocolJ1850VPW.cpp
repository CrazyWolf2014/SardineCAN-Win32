#include "stdafx.h"
#include "ProtocolJ1850VPW.h"
#include "helper.h"


CProtocolJ1850VPW::CProtocolJ1850VPW(int ProtocolID)
	:CProtocol(ProtocolID)
{
}


CProtocolJ1850VPW::~CProtocolJ1850VPW(void)
{
}

bool CProtocolJ1850VPW:: HandleMsg( PASSTHRU_MSG * pMsg, char * flags )
{
	return false;
}

int CProtocolJ1850VPW::Connect(unsigned long channelId, unsigned long Flags)
{
	LOG(PROTOCOL,"CProtocolJ1850VPW::Connect - flags: 0x%x",Flags);

/*
// call base class implementation for general settings
	return CProtocol::Connect(channelId,Flags);
*/
	return ERR_NOT_SUPPORTED;
}

int CProtocolJ1850VPW::Disconnect() 
{
/*
return CProtocol::Disconnect();
*/
	return ERR_NOT_SUPPORTED;
}

int CProtocolJ1850VPW::ReadMsgs( PASSTHRU_MSG * pMsgs, unsigned long * pNumMsgs, unsigned long Timeout )
{
	return ERR_NOT_SUPPORTED;
}

int CProtocolJ1850VPW::WriteMsg( PASSTHRU_MSG * pMsg, unsigned long Timeout )
{
	LOG(PROTOCOL_MSG,"CProtocolJ1850VPW::DoWriteMsg - timeout %d",Timeout);
	LOG(ERR,"CProtocolJ1850VPW::DoWriteMsg  --- FIXME -- We ignore Timeout for now - call will be blocking");

	if (pMsg->ProtocolID != ProtocolID())
	{
		LOG(ERR,"CProtocolJ1850VPW::DoWriteMsg - invalid protocol id %d != J1850VPW",pMsg->ProtocolID);
		return ERR_MSG_PROTOCOL_ID;
	}

	/*....construct message here */
	/*
	LOG(PROTOCOL_MSG_VERBOSE,"CProtocolJ1850VPW::DoWriteMsg - pretending to send msg: [%s]",buf);
	// Delegate message sending to lower level
	if (SendMsg(buf,msg_len)!=(msg_len))
	{
		LOG(ERR,"CProtocolJ1850VPW::DoWriteMsg - sending message failed!");
		return ERR_FAILED;
	}
	return STATUS_NOERROR;
	*/

	return ERR_NOT_SUPPORTED;
}

/*
int CProtocolJ1850VPW::StartPeriodicMsg( PASSTHRU_MSG * pMsg, unsigned long * pMsgID, unsigned long TimeInterval)
{
	return ERR_NOT_SUPPORTED;
}

int CProtocolJ1850VPW::StopPeriodicMsg( unsigned long pMsgID)
{
	return ERR_NOT_SUPPORTED;
}

int CProtocolJ1850VPW::IOCTL(unsigned long IoctlID, void *pInput, void *pOutput)
{
#ifdef IGNORE_SILENTLY_UNIMPLEMENTED_FEATURES_WITH_DATAPRO
	return STATUS_NOERROR;
#else
	return ERR_NOT_SUPPORTED;
#endif
}

*/
