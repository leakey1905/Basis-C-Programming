#include "stdio.h"
#include "string.h"
//#include "unistd.h"   //sleep() in mac os

int main(){
    char name[8][10], inputname[10];
	int id[8], income[8];
	int i;

	printf("Please input the basic information of 8 workers:");
	for (i = 0;i <= 7; i++){ 
		printf("\nWorker No.%d:\n", i+1);
		printf("Name:");
		scanf("%s", name[i]);
		printf("%s's Id:", name[i]);
		scanf("%d", &id[i]);
		printf("%s's wage:", name[i]);
		scanf("%d", &income[i]);
	}
	
	printf("\nPlease input the name of the worker you want to search:");
	scanf("%s", inputname);
	for(i = 0; i < 8; i++)
        if (strcmp(name[i], inputname) == 0){  //name[n] = inputname
			printf("\nname is = %s, number is = %d,wages is = %d", inputname, id[i], income[i]);
			break;
		}
	if (i == 8)
		printf("not found %s in info table\n", inputname);
	//sleep(5); //stop for 5 sec
	return 0;
}


