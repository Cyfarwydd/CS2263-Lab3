#include "mystr.h"
#include <stdio.h>

char *next_word(char *str, char *word){
	
	return '\0';
}

void remove_dup_blanks(char *str){
	char *p1 = str, *p2 = p1+1;
	while(*p2){
		if(*p1 == ' ' && *p2 == ' '){
			while(*p2){
				char * tmpp = p2;
				p2++;
				*tmpp = *p2;
				tmpp++;
			}
			p2 = p1 + 1;
		}else{
			p1++;
			p2++;
		}
	}
}
