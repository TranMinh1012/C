#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	fgets(s, sizeof(s), stdin);
	int i;
	for( i = strlen(s) - 1; i >= 0; i--){
		printf("%c ", s[i]);
	}
	return 0;
}
