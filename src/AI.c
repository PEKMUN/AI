#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "AI.h"

int stringCompare(char *str1, char *str2)
{
	while(*str1 != '\0' || *str2 != '\0')
	{
		if(tolower(*str1)  != tolower(*str2))
		{
			return 0;
		}
		
    else 
    {
      str1++;
      str2++;
    }
  }
  return 1;
}

char *speakToAiMachine(char *msg)
{
	if(stringCompare(msg, "hi") == 1 || stringCompare(msg, "hey") == 1 || stringCompare(msg, "hello") == 1 || stringCompare(msg, "greeting") == 1)
  {
    return "Hi there! My name is TheMachine. What is yours?";
  }
  
  else 
    return 0;
}

