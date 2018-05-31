#include <stdio.h>
#include <string.h>

int main()
{
	char myString[27] = "";
	char c;
	int i = 0;
	for (c = 'a'; c <= 'z'; c++)
	{
		myString[i] = c;
		i++;
	}
	printf("%s \n", myString);
	char strConstantA[] = "abcdefghijklmnopqrstuvwxyz";
	char strCapital[55] = "";
	for ( int i = 0; i < 26; i++)
	{
		c = strConstantA[i];
		strConstantA[i] = c - 32;
		printf("%c", strConstantA[i]);
	}
	printf("\n");
	strcpy(strCapital, strConstantA);
	strcat(strCapital, myString);
	printf("Concatted strings: %s\n", strCapital);
}
