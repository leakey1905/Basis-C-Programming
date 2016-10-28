#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

#define MAXLEN 100 //max length of input word string is 100

int maxlena = 0;  //max length of word with 'a'

int findWord(char word[MAXLEN]){
	int curlenw = 0;  //current length of word, max..
	int has_a = 0;	  //flag: whether the current word has 'a' - 0:none,1:has
	int i, p = 0;     // p: start point of a word
	for (i = 0; word[i] != '\0'; i++){
		if (word[i] != ' '){
			curlenw++;
			if (word[i] == 'a')
				has_a = 1;
		}
		else{ // end of one word
			if ((has_a == 1) && (maxlena < curlenw)){
				maxlena = curlenw;
				p = i; // point to the end+1 of the world
			}
			curlenw = 0;
			has_a = 0;
		}
	}
	if ((has_a == 1) && (maxlena < curlenw)){//check the last word
		maxlena = curlenw;
		p = i; // point to the end+1 of the world
	}
	return p;
}

int main(){
	char word[MAXLEN];
	int i, p;
	gets_s(word,MAXLEN);  //input the word
	//split the string by space
	p = findWord(word);
	if (!maxlena)
		printf("There are no word with letter a!");
	else{
		printf("The longest word with letter a is: ");
		for (i = p-maxlena;i < p; i++){
			printf("%c", word[i]);
		}
		printf("\n");
	}
	Sleep(3000);
	return 0;
}
