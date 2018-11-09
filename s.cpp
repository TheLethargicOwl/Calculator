#include<stdio.h>
int add(int a, int b);
int main()
{
	int a,b,c;
	printf("enter the no to be added");
	scanf("%d%d",&a ,&b);
	c=add(a,b);
	printf("%d",c);
	return 0;
}
int add(int a, int b)
{
	int z;
	z=a+b;
	return (z);
}
