#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
	char *str, c;
  int i = 0;

  str = (char*)malloc(sizeof(char));

  printf("Enter String : ");

  while (c != '\n') {
    // read the input from keyboard standard input
    c = getc(stdin);

    // re-allocate (resize) memory for character read to be stored
    str = (char*)realloc(str, (i+1) * sizeof(char));

    // store read character by making pointer point to c
    str[i] = c;

    i++;
  }
  i--;
  str[i] = '\0'; // at the end append null character to mark end of string

  printf("\nThe entered string is :%s: length=%ld i=%d\n", str,strlen(str), i);

  free(str); // important step the pointer declared must be made free
}
