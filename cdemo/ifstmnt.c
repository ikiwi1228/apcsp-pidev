#include <stdio.h>
int main()
{
	int a=3;
	int b=0;
	//This if statement test whether a is 0 or not
	if (a==0||b==0)
	{
		printf("a or b is equal to 0\n");
	}
	else
	{
		printf("a and b is not equal to 0\n");
	}

	if (a!=b)
	{
		printf("a is not equal to b\n");
	}
	else
	{
		printf("a is equal to b\n");
	}

	if (a>=b)
	{
		printf("a maybe bigger than b\n");
	}
	else
	{
		printf("b maybe bigger than a\n");
	}

	if (a == 0 && b==0)
	{
		printf("a and b is equal to 0\n");
	}
	else
	{
		printf("a and b is not all equal to 0\n");
	}
	if (!(a==0) || !(b==0))
	{
		printf("a or b is not equal to 0\n");
	}
	else
	{
		printf("a or b is equal to 0\n");
	}
	printf("a is %d, b is %d\n",a,b);
}
