#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	fgets(s, sizeof(s), stdin);
	int i;
	for( i = 0; i < strlen(s); i++){
		printf("%c ", s[i]);
	}
	return 0;
}
