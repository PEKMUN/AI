#include "AI.h"

int stringCompare(char *str1, char *str2)
{
	//char *ptr1, *ptr2;
	//ptr1 = str1;
	//ptr2 = str2;
	
	if(*str1 == *str2)
	{
		while(*str1 != '\0' && *str2 != '\0')
		{
			str1++;
			str2++;
		}
		return 1;
	}
	else 
		return 0;
}

/*char *speakToAiMachine(char *msg)
{
	return NULL;
}*/