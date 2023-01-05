// ========================================================================
//
// The Forth interpreter-compiler by Prof. Boguslaw Cyganek (C) 2021
//
// The software is supplied as is and for educational purposes
// without any guarantees nor responsibility of its use in any application. 
//
// ========================================================================



#include "Interfaces.h"
#include "ESP32_config.h"

extern "C" {
	void app_main();
}

void app_main()
{
	BCForth::Run();
}


