#include "mystr.h"
#include <stdio.h>

char *next_word(char *str, char *word){
	char *pstr = str;
	char *pword = word;
	while(*pstr != '\0'){
	  	if(*pstr == *pword){
	    		while(*pstr == *pword){
	      			pstr++;
				pword++;
				if(*pword == ' '){
			  		pstr++;
					return pstr;
				}
				if(*pword == '\0'){
			  	return pstr;
				}
			}

		}
		*pstr++;
	}
	return '\0';
}

void remove_dup_blanks(char *str){
	char *p1 = str; 
	char *p2 = p1+1;
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
