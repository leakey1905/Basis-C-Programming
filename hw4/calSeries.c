//from 范弘毅
#include<stdio.h>

float calFraction(float i) {
	return i * i / (i + 1);
}

int main() {
	printf("1. P61编程题3\n要求Σ(i=1,n,i^2/(i+1))，请键入 正整数n：");
	int n;
	scanf_s("%d", &n);
	float i, s = 0;
	//for loop
	for (i = 1; i <= n; i++) {
		s += i*i / (i + 1);
	}
	printf("结果：%f\n", s);
	//recursion	
  s = 0;
	i = 1;
	while (i <= n)
		s += calFraction(i++);
	printf("结果：%f\n", s);
	return 0;
}
