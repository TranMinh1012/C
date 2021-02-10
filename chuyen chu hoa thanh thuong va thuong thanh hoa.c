#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	fgets(s, sizeof(s), stdin);
	int i;
	for( i = 0; i < strlen(s); i++){
		if( s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		} else if ( s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
		} else {
		}
		printf("%c", s[i]);
	}
	return 0;
}
