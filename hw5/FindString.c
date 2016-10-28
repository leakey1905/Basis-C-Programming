#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(){
	char s[2][50], str[50];
	int lens, lenstr;  //length 
	int cnt = 0; 
	int i, j, k;

	printf("Please input two strings:\n");
	scanf("%s %s", s[0], s[1]);
	printf("Please input another string:\n");
	scanf("%s", str);

	lenstr = strlen(str);  
	for (i = 0; i < 2; i++){  //for each string saved in s
		lens = strlen(s[i]);  //get its length
		for (j = 0; j < (lens - lenstr + 1); j++){  //compare each position
			for (k = 0; k < lenstr; k++)
				if (str[k] != s[i][k+j])
					break;
			if (k == lenstr)
				cnt++;
		}
	}
	if (!cnt)
		printf("not found");
	else
		printf("there are %d same string", cnt);
	Sleep(3000);
	return 0;
}
