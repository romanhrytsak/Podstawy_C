#include <stdio.h>

int a=2147483647;

int main()
{
	printf("integer - %d bajty, \n",sizeof(int));
	printf("wartosc zmiennej a: %d\n",a);
	a++;
	printf("wartosc zmiennej a+1: %d\n", a);
	
	system("pause");
	return 0;
}
