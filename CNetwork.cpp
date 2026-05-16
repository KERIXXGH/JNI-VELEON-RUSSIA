// -- -- -- -- -- -- -- 
// by snowy
// -- -- -- -- -- -- --
#include "CNetwork.h"
#include <stdint.h>

#include "util/CJavaWrapper.h"

const char* g_szServerNames[MAX_SERVERS] = {
	"VISKI SLIV INVENTORY REYTIZ | RED",
	"VISKI SLIV INVENTORY REYTIZ | TEST"
};

const CSetServer::CServerInstanceEncrypted g_sEncryptedAddresses[MAX_SERVERS] = {
	CSetServer::create("194.93.2.226", 1, 16, 6070, false),
	CSetServer::create("194.93.2.226", 1, 16, 6070, false)	
};