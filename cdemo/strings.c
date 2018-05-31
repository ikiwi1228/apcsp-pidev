#include <stdio.h>
#include <string.h>
int main()
{
	char string1[27]="abcdefghijklmnopqrstuvwxyz";
	char string2[27]="                          ";
	char letter = 'a';
	for (int i = 0; string2[i]!='\0'; i++)
	{
		string2[i]=letter;
		letter++;
	}
	printf("%s , %s\n",string1,string2);

	if (string1==string2)
	{
		printf("they are same\n");
	}
	else
	{
		printf("they are not same\n");
	}

	for (int i = 0; string1[i]!='\0'; i++)
	{
		string1[i]=string1[i]-32;
	}

	printf("%s , %s\n",string1,string2);

	char string3[60];
	strcpy(string3, string1);
	strcat(string3, string2);
	printf("%s , %s , %s\n",string1,string2,string3);
}
