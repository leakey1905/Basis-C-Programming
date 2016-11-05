#include <stdio.h>

#define day 13  //get date 13 for each month
#define Friday 5  //set date to calculate

int main(){
	int y, c, m, w;  //year, century, month, weekdate
	int cnt = 0;  //count how many Friday on 13th in each month
	scanf("%d", &y);  
	c = y / 100;
	y -= c * 100; 
	for (m = 1; m <= 12; m++){
		w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + day - 1; //ref: Zeller formular 
		if (w % 7 == Friday)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
