数组题目（数字/字符串/字符操作）

1.一维数组

回文数的形成：

任取一个十进制正整数，将其倒过来后与原来的正整数相加，会得到一个新的正整数。重复以上过程，则最终会得到一个回文数。

现在从键盘输入一个整数，请编写程序在屏幕上打印由该整数形成回文数的过程及加法的次数和最终回文数。

参考程序：

    #include "stdio.h"
     
    #define MAX 2147483647
    
    long reverse(long int a){
    	long int t;
    	for (t = 0; a > 0; a /= 10)
    		t = t * 10 + a % 10;  //save palindromic number in t
    	return t;
    }
     
    int palindrome(long int s){  //test palindromic number
    	if (reverse(s) == s)
    		return 1;
    	else 
    		return 0;
    }
     
    int main(){
    	long int n, m;
    	int cnt = 0;
    	printf("Please enter a positive integer smaller than %d: ", MAX);
    	scanf("%ld", &n);
    	printf("Printing the process:\n");
    	while (!palindrome((m = reverse(n)) + n)){
    		if (n > 0 && m + n < n){
    			printf("Error: Over the upper bound!\n");
    			break;
    		}
    		else{
    			printf("[%d]: %ld + %ld = %ld\n", ++cnt, n, m, m + n);
    			n += m;
    		}
    	}
    	printf("[%d]: %ld + %ld = %ld\n", ++cnt, n, m, m + n);
    	printf("Total add count: %d, the final palindrome is %d\n", cnt, n + m);
    	return 0;
    }

2.二维数组

单词排序：

从键盘输入10个单词，按照字典目录顺序进行排序，并输出排序后的结果。

参考程序：

    #include "stdio.h"
    #include "string.h"
    #include "stdlib.h"
    
    int main(){
    	char word[10][10];
    	char tmpword[10];
    	int i, j;
    	printf("Please input 10 words:\n");
    	for (i = 0; i < 10; i++){
    		printf("[%d]: ", i + 1);
    		scanf("%s", word[i]);
    	}
    	for (i = 0; i < 10; i++)
    		for (j = 0; j < 10 - i; j++)
    			if (strcmp(word[j], word[j+1]) > 0){
    				strcpy(tmpword, word[j]);
    				strcpy(word[j], word[j+1]);
    				strcpy(word[j+1], tmpword);
    			}
    	printf("After sorting:\n");
    	for (i = 0; i < 10; i++)
    		printf("[%d]:%s\n", i + 1, word[i]);
    	return 0;
    }

3.三维数组

字符查找

由键盘输入26个小写字母及空格存入一个3 * 3* 3的字符型三维数组中，查找并依次打印字符串"hello world"中各个字符下标。

参考程序：

    #include "stdio.h"
    
    int main(){
    	char a[3][3][3];
    	int i, j, k, m = 0;
    	char ch[20] = "hello world";
    	printf("Please init the array:\n");
    	for (i = 0; i < 3; i ++)
    		for (j = 0; j < 3; j++)
    			for (k = 0; k < 3; k++)
    				a[i][j][k] = getchar();
    	fflush(stdin);  //clean the flash of stdin
    	
    	while(ch[m] != '\0')
    		for (i = 0; i < 3; i ++)
    			for (j = 0; j < 3; j++)
    				for (k = 0; k < 3; k++)
    					if (a[i][j][k] == ch[m])
    						printf("a[%d][%d][%d] is %c\n", i, j, k, ch[m++]);
    	return 0;
    }
