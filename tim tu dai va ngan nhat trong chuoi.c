#include<stdio.h>
#include<string.h>
#define separator ",. "

void TuDaiVaNganNhat( char *s)
{
	char s1[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	int max = strlen(s1[0]);
	int min = strlen(s1[0]);
	int ind = 0;
	int i;
	for ( i = 0; i < k; i++){
		if ( max < strlen(s1[i]) ){
			max = strlen(s1[i]);
			ind = i;
		}
	}
	printf("%s ", s1[ind]);
	ind = 0;
	for ( i = 0; i < k; i++){
		if( min > strlen(s1[i]) ){
			min = strlen(s1[i]);
			ind = i;
		}
	}
	printf("%s", s1[ind]);
}
int main(){
	char s[100];
	gets(s);
	TuDaiVaNganNhat(s);
	return 0;
}
