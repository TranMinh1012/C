#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	fgets(s, sizeof(s), stdin);
	int i;
	int dem1 = 0;
	int dem2 = 0;
	int dem3 = 0;
	for( i = 0; i < strlen(s) - 1; i++){ // strlen(s) do fgets doc ca ky tu /n
		if( (s[i] >= 'A' && s[i] <= 'Z') || ( s[i] >= 'a' && s[i] <= 'z') ){
			dem1++;
		} else if( s[i] >= '0' && s[i] <= '9'){
			dem2++;
		} else {
			dem3++;
		}
	}
	printf("%d %d %d", dem1, dem2, dem3);
	return 0;
}
