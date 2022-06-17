#include "mApp.h"
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include "struct.h"
 

int main() {
	if (mApp_Init("HOTEL ENSAH", 400, 440) == 0)
		return 0;

	mApp_SetFrameCallback(frame);


	mApp_MainLoop();

	mApp_Shutdown();


	return 0;
}





/*

init

while () {

	frame();
}

shutdown

*/
