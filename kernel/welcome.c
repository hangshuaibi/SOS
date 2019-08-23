#include "type.h"
#include "stdio.h"
#include "const.h"
#include "protect.h"
#include "string.h"
#include "fs.h"
#include "proc.h"
#include "tty.h"
#include "console.h"
#include "global.h"
#include "proto.h"

void welcomeAnimation(){
	int t=200;
	milli_delay(t);
	int i = 0;
	for (i = 1; i <= 100; ++i)
	{
		printf("-");
	}
	for (i = 1; i <= 100; ++i)
	{
		printf("\b");
	}
	for (i = 1; i <= 240; ++i)
	{
		printf(">");
		milli_delay(t);
	}

	printf("\n");
	milli_delay(t);
	printf("\n");
}

PUBLIC void welcome(){   
	printf("\n");
       	printf("                           _____     ___  _____                          \n");
	printf("                          / ___/    /__ \\/ ___/                       \n");
	printf("                          \\__ \\   / / / /\\__ \\                        \n");
	printf("                          ___/ / / /_/ /___/ /                           \n");
	printf("                          ____/  \\____//____/                          \n");                                        
	printf(" ___________________________________________________________________________ \n");
	printf("|                                                                           |\n");
	printf("|==================================WoWOS====================================|\n");
	printf("|                                                                           |\n");
	printf("|                             1651162 Shi Chenghang                         |\n");
	printf("|                             1651162 Shi Chenghang                         |\n");
	printf("|                             1651162 Shi Chenghang                         |\n");
	printf("|                                                                           |\n");
	printf("|===========================================================================|\n");
	printf("|___________________________________________________________________________|\n");
	printf("\n");
	printf("\n");
	printf("\n");       
	//printf("help\n");
}

