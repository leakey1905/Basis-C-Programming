#include <stdio.h>
#include <windows.h>
#include <string.h>

#define MAXLEN 100 //max length of input word string is 100

int maxlena = 0;  //max length of word with 'a'
int has_a = 0;	  //flag: whether the current word has 'a' - 0:none,1:has

int findWord(char word[MAXLEN]){
	int curlenw = 0;  //current length of word
	int i, p = 0;     //p: start point of a word
	for (i = 0; word[i] != '\0'; i++){
		if (word[i] != ' '){  // still in a word
			curlenw++;
			if (word[i] == 'a')
				has_a = 1;
		}
		else{ // end of one word
			if ((has_a == 1) && (maxlena < curlenw)){
				maxlena = curlenw;
				p = i; // point to the end+1 of the first longest word with a
			}
			curlenw = 0;
			has_a = 0;
		}
	}
	if ((has_a == 1) && (maxlena < curlenw)){//check the last word
		maxlena = curlenw;
		p = i; // point to the end+1 of the word
	}
	has_a = 0;
	return p;
}

void printWord(char word[MAXLEN], int wordstart, int wordend){  //print words
	int i;
	for (i = wordstart; i < wordend; i++)
		printf("%c", word[i]);
	printf(" ");
}

void checkMultiLongest(char word[MAXLEN], int p, int maxlena){ //check if more than one longest
	int i;
	int curlenw = 0;  //current length of word
	for (i = p; word[i] != '\0'; i++){
		if (word[i] != ' '){  // still in a word
			curlenw++;
			if (word[i] == 'a')
				has_a = 1;
		}
		else{ // end of one word
			if ((has_a == 1) && (maxlena == curlenw))
				printWord(word, i - maxlena, i);
			curlenw = 0;
			has_a = 0;
		}
	}
	if ((has_a == 1) && (maxlena == curlenw)) //check the last word
		printWord(word, i - maxlena, i);
	has_a = 0;
}


int main(){
	char word[MAXLEN];
	int i, p;
	gets_s(word, MAXLEN);  //input the word
	p = findWord(word);  //p point to the space behind first largest word with a
	if (!maxlena)
		printf("There are no word with letter a!");	
	else{
		printf("The longest word(s) with letter a: ");
		printWord(word, p - maxlena, p);
		checkMultiLongest(word, p, maxlena); 
		printf("\n");
	}
	Sleep(3000);
	return 0;
}
