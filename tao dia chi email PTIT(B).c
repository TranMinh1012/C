#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define separator ",. "

void ChuDauThuong( char s[] )
{
	s[0] = tolower(s[0]);
	printf("%c", s[0]); // %c la in ra ky tu
}
void ThuongTatCa( char s[] )
{
	strlwr(s);
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
	for( i = 0; i < k - 1; i++){
		ChuDauThuong((s1[i]));
	}
	ThuongTatCa(s1[k-1]);
	printf("%s", s1[k-1]);
	printf("@ptit.edu.vn");
	return 0;
}
