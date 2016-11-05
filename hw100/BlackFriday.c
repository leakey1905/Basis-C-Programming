#include<stdio.h>

#define Friday 5

int isLeapYear(int year){  // use this function to get whether a year is leap year
	if((year % 4 == 0 && year % 100 != 0) ||(year % 400 == 0 && year % 100 == 0))
	// leap year can be divided by 4 but not 100 or by 100 and 400 simultaneously
		return 1;
	else
		return 0;
}


int main(){
	int curyear, dayinmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, totalday = 0;
	int i, day = 1, cnt = 0;  // day Mon - Sun
	scanf("%d", &curyear);
	for (i = 1998; i < curyear; i++)
		if (isLeapYear(i))
			totalday += 366; // get the day before current year
		else
			totalday += 365;
	if(isLeapYear(curyear))  // check whether current year is leap year
		dayinmonth[1] = 29;
	day = (4 + totalday + 13 - 1) % 7;  // get what day is currentyear/01/13:0 == Sun
	for(i = 0; i < 11; i++){
		if(day == Friday)
			cnt++;
		day = (day + dayinmonth[i]) % 7;	
	}
	printf("%d", cnt);
	return 0;
}
