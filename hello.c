#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

char* get_string(char *ptr, int iSize);

int main(void)
{
	char *answer;
	printf("What's your name?\n");

//	gets(answer);
	answer = get_string(answer,80);

	printf("Hello World, lets welcome %s !\n", answer);

	for(int i=0; i<5; i++)
	{
		printf("i=%d\n",i);
	}
	
}
char* get_string(char *name, int iSize)
{
//	char* name;
	int sw=0;
        name = (char *)malloc(sizeof(char) * iSize);
	do{
		gets(name);
		if(strlen(name)>0 && strlen(name)<iSize)
			sw=1;
		else
			printf("\nlength 1-80");

		
	} while (sw==0);
	return name;

}
