#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define separator ",. "

void HoaChuDau( char s[] )
{
	int i;
	s[0] = toupper(s[0]);
	for ( i = 1; i < strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}
void HoaTatCa( char s[] )
{
	strupr(s);
}
int main(){
	char s[100];
	gets(s);
	char s1[100][100];
	char *p;
	int k = 0;
	int i;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	for ( i = 1; i < k; i++){
		HoaChuDau(s1[i]);
	}
	for ( i = 1; i < k; i++){
		printf("%s", s1[i]);
		if ( i < k-1){
			printf(" ");
		} else {
			printf(",");
		}
	}
	HoaTatCa(s1[0]);
	printf(" %s", s1[0]);
	return 0;
}
