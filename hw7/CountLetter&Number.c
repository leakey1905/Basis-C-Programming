//ref: assignment of 范弘毅
#include<stdio.h>

#define MaxLen 100 //the max length of input string

int main(){
	char s[MaxLen], *pe, *pk, *pl, *pn; //pointer to e, k, letter number
	int nl=0, nn=0, f=0; //nl number of letter, nn number of number, f flag of exist of e&k
	pn = pe = gets_s(s, MaxLen);
	while (*pe != '\0'){
		if(*pe == 'e' || *pe =='E'){
			for(pk = s + MaxLen; pk != pe; pk--){
				if(*pk == 'k'||*pk == 'K'){
					f = 1;
					for(pl = pe + 1; pl != pk; pl++){
						if((*pl >= 'A' && *pl <= 'Z')||(*pl >= 'a' && *pl <= 'z'))
							nl++;
					}
					printf("Found e & k, there are %d letters between them.\n", nl);
					break;
				}
			}
			break;
		}
		pe++;
	}
	if(f==0)
		printf("No matched e & k\n");

	while (*pn != '\0'){
		if(*pn >= '0' && *pn <= '9')
			nn++;
		pn++;
	}
	printf("Count of number in string is %d.\n",nn);
	printf("\nP.S. Count the first e and last k.\n");
	printf("    Do not count the k before e. Do not count the upper and lower letter.\n");
	return 0;
}
