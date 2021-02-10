#include<stdio.h>
#include<string.h>
#define SEPARATOR " "

int main(){
	char s[100];
	gets(s);
	char *s1;
	s1 = strtok(s,  SEPARATOR);
	while( s1 != NULL){
		printf("%s\n", s1);
		s1 = strtok(NULL, SEPARATOR);
	}
	return 0;
}
