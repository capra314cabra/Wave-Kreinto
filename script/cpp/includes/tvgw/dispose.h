#pragma once

#include"tvgw/constant.h"
#include"tvgw/structs.h"

//
// Free the memories which have been alocated by TVGW_RIFF_FILE
//
extern "C" void tvgw_Dispose(TVGW_RIFF_File* filedata);
