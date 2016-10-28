#include "stdio.h"
#include "windows.h"

int nthpowerof2(int n){
	int p = 1;  // 2^n = p
	if (n >= 1)
		p = 2 * nthpowerof2(n-1);
	else //n == 1
		return p;
}

int nthfactorial(int n)
{
	int f = 1; // n! = f
	if (n > 1)
		f = n * nthfactorial(n-1);
	else
		return f;
}

int getS(int n){
	int S = 0; // S = 2^1*1!+2^2*2!+...+2^n*n!
	while(n >= 1){
		S += (nthpowerof2(n) * nthfactorial(n));
		n--;
	}
	return S;
}	

int main(){
	int n, S;
	printf("Please input number n:");
	scanf("%d", &n);
	S = getS(n);
	printf("S = %d", S);
	Sleep(3000);
	return 0;
}
