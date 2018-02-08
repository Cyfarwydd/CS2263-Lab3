#include "mystr.h"
#include <stdio.h>

int main(){
	char x[80];
	scanf("%s", x);
	//char  x[80] = "this is a      test";
	printf("%s\n",x);
	remove_dup_blanks(x);
	char * w = x;
        char * y = next_word(x, w);
	printf("y read:\t %s\n", *y);
	while(*y !='\0'){
	  printf("wat");
		char* index;
		for(index = w; index != y; index++){
			printf("%c", *index);
		}
		printf("\n");
		w = y;
		y=next_word(w, w);
	}
	printf("while loop finished\n");
	char* index;
	for(index = w; index !=y; index++){
	  printf("%c", *index);
	}
	printf("\n%s", x);
	printf("\n");
	return 1;
}
