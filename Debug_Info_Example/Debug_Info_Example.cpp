#include "pch.h"
#include "debug_info.h"

int main()
{
	char str[] = "! HELLO !";
	int value = 0x55;
	clear_log();
	DEBUG_TO_FILE("START TEST:\r\n");
	DEBUG_TO_FILE("Hex_Value = %x Dec_Value = %d\r\n", value, value);
	DEBUG_TO_FILE("Debug_Str = %s\r\n", str);
	DEBUG_TO_FILE("TEST OK!\r\n");
	return 0;
}

