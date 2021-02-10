#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define separator ",. "

void HoaChuDau( char s[] )
{
	int i;
	s[0] = toupper(s[0]); // toupper la viet hoa mot ky tu
	for( i = 1; i < strlen(s); i++){
		s[i] = tolower(s[i]); // tolower la viet thuong mot ky tu
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
	while( p != NULL ){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	HoaTatCa(s1[k-1]);
	printf("%s", s1[k-1]);
	printf(", ");
	for ( i = 0; i < k-1; i++){
		HoaChuDau(s1[i]);
	}
	for( i = 0; i < k - 1; i++){
		printf("%s ", s1[i]);
	}
	return 0;
}
