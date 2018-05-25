#include <stdio.h>

int main()
{
int a = 4;
char s = 'b';
float c = 1.23;
double d  = 10.21;
short int x = 7;
long int y = 9;
printf( "%d\n", sizeof(a+s+c+d+x+y));
return 0;
}
