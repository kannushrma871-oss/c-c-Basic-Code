#include<stdio.h>
int main()
{
	int x = 5, y , b = 10;
	y = x++;
	y = ++x;
	y = x++*b;
	y = ++x*b;
	y = x--;
	y = --x;
	y = x--*b;
	y = --x*b;
	printf("%d\n",x);
	printf("%d",y);
	return 0;
}
