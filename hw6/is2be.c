#include <stdio.h>
#include <windows.h>
#include <string.h>

#define MAXLEN 100 //max length of input word string is 100

int flag = 0;  // save whether change 0: not change,1change

void is2be(char word[MAXLEN]){
	int i, lenw = strlen(word);  //lenw: length of word
	for (i = 0; i < lenw-1; i++)
		if (word[i] == 'i' && word[i+1] == 's'){
			word[i] = 'b';
			word[i+1] = 'e';
			i++;
			flag = 1;
		}
}

int main(){
	char word[MAXLEN];
	int i;
	gets_s(word, MAXLEN);  //input the word
	is2be(word);
	if (!flag)
		printf("there is no \"is\" in the sentence");
	else{
		printf("the words become: ");
		for (i = 0; word[i] != '\0'; i++)
			printf("%c", word[i]);
	}
	Sleep(3000);
	return 0;
}
