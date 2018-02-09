#include "mystr.h"
#include <stdio.h>
#define STR_MAX 80

int main(){
	char x[STR_MAX];
	int i;
	fgets(x, STR_MAX, stdin);
	for(i = 0; i < STR_MAX; i++){
		if(x[i] == '\n'){

			x[i] = '\0';
		}
	}
//	char  x[80] = "this is a      test";
//	printf("%s\n",x);
	remove_dup_blanks(x);
	char * w = x;
        char * y = next_word(x, w);
	while(*y !='\0'){
		char* index;
		for(index = w; index != y; index++){
			printf("%c", *index);
		}
		printf("\n");
		w = y;
		y=next_word(w, w);
	}
	char* index;
	for(index = w; index !=y; index++){
	  printf("%c", *index);
	}
	printf("\n%s", x);
	printf("\n");
	return 1;
}
