//ref: C语言趣味编程100例
#include "stdio.h"

#define N 14

int main(){
	int row, col, k, n = 0, a[N][N];
	while(n <= 0||n >= 13){
		printf("Input the total number of row: ");
		scanf("%d", &n);
	}
	printf("print %d row of Yanghui Triangle: \n\n", n);
	for (row = 1; row <= n; row++) //calculate the value of each position
		a[row][1] = a[row][row] = 1; //the first number is saved in a[row][1]
	for (row = 3; row <= n; row++) //calculate the rest place
		for (col = 2; col <= row - 1; col++)
			a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
	for (row = 1; row <= n; row++){  //print the triangle
		for (k = 1; k <= n - row; k++)
			printf("   "); // three spaces to make the print result look better
		for (col = 1; col <= row; col++)
			printf("%6d", a[row][col]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
