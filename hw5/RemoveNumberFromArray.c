#include "stdio.h"
#include "windows.h" 

#define N 10 //define the length of array

int main(){ 
	int int1[N], int2[N];
	int x, i, j = 0, k, m;
	printf("Input an integer:"); 
	scanf("%d", &x);
	printf("Input no more than %d integers, seperate with spaces, press [Enter] to end:\n", N);
	for(m = 0; m < N; m++){
		scanf("%d", &int1[m]);
		if(getchar() == '\n')
			break;
	}
	for(i = 0; i <= m; i++){ 
		if(int1[i] != x){
			int2[j] = int1[i];
			j++;
		}
	}
	for(k = 0; k < j; k++) 
		printf("%d ",int2[k]);

	printf("\nEnd in 3 sec...\n");
	Sleep(3000); 
	return 0; 
}
