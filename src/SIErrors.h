#pragma once

typedef enum class SISTATUS : int {
	SUCCESS								= 0x00,
	FILE_OPEN_FAILED					= 0x01,
	IMAGE_MAPPING_FAILED				= 0x02,
	OPEN_PROCESS_FAILED					= 0x03,
	PRIVILEGE_ADJUST_FAILED				= 0x04,
	QUERY_SYSTEM_INFORMATION_FAILED		= 0x05,
	HANDLE_RETRIEVAL_FAILED				= 0x06,
	PROCESS_NOT_FOUND					= 0x07
} SISTATUS;
