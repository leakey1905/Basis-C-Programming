//from 闫闯
#include<stdio.h>

int func1(int n);
int func2(int n);
int main()
{
	int(*f)(int);
	int n;
	scanf("%d", &n);
	f = func1;
	printf("f1(n) == %d\n", (*f)(n));
	f = func2;
	printf("f2(n) == %d\n", (*f)(n));
	return 0;
}
int func1(int n)
{
	if (n == 0)  return 1;
	if (n == 1)  return 2;
	return (2 * func1(n - 1) + func1(n - 2));
}
int func2(int n)
{
	if (n == 0)  return 0;
	if (n == 1)  return 1;
	return (func1(n - 1) + 2 * func1(n - 2));
}
