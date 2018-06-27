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

int stringContains(char *msg, char *contains)
{
    int i;
  char *temp, *strptr;
  temp = malloc(256);
  
  strptr = msg;
  
  for(i=0;i<10;i++)
  {
    temp[i] = *strptr;
    strptr++;
  }
  
  temp[i] = '\0';
  
  if(stringCompare("my name is", temp))
  {
    return 1;
  }
  
  else 
    return 0;
}

char *extractName(char *msg)
{
	int i=11, j=0;
	char *name;
	name = malloc(256);
	
	while(msg[i]!='\0')
	{
		name[j] = msg[i];
		j++;
		i++;
	}
	return name;
	//free(name);
}

char *concatenateString(char *Str1, char *Str2)
{
	char *combined = malloc(strlen(Str1) + strlen(Str2) + 1);
	strcpy(combined, Str1);
    strcat(combined, Str2);
	return combined;
	//free(combined);
}

char *speakToAiMachine(char *msg)
{
	if(stringCompare(msg, "hi") == 1 || stringCompare(msg, "hey") == 1 || stringCompare(msg, "hello") == 1 || stringCompare(msg, "greeting") == 1)
	{
		return "Hi there! My name is TheMachine. What is yours?";
	}
  
	else if(stringContains(msg, "my name is") == 1)
    {
		char *reply, *name;
		reply = malloc(256);
		name = extractName(msg);
		reply = concatenateString("Nice to meet you, ", name);
		return reply;
		//free(reply);
	}
  
  else if(stringCompare(msg, "bye") == 1)
  {
    return "Goodbye. Have a nice day";
  }
  
  else
    return NULL;
}