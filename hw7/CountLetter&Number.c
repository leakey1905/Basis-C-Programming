#include "stdio.h"

int main(){
	char x[100], *px = x;
	int i, cntnum = 0, cntchr = 0;
	printf("请输入一个字符串，长度小于100。\n");
	scanf("%s", x);
	for (i = 0; i < 100; i++){
		if (*(px + i) >= 48 && *(px + i) <= 57)
			cntnum++;
		else if (*(px + i) >= 101 && *(px + i) <= 107)
			cntchr++;
	}
	printf("结果是数字%d个，e~k字母%d个。\n", cntnum, cntchr);
	return 0;
}
