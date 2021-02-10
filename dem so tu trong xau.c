#include<stdio.h>
#include<string.h>
#define separator ",. "

int main(){
	char s[100];
	gets(s);
	char *p;
	p = strtok(s, separator);
	int i = 0;
	while ( p != NULL){
		i++;
		p = strtok(NULL, separator);
	}
	printf("%d", i);
	return 0;
}
