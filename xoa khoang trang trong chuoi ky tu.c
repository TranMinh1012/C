#include<stdio.h>
#include<string.h>

void Xoa( char s[], int vt)
{
	int n = strlen(s);
	int i;
	for( i = vt; i < n; i++){
		s[i] = s[i + 1];
	}
}
void XoaKhoangTrang( char s[])
{
	int i;
	for( i = 0; i < strlen(s); i++){
		if( s[i] == ' '){
			Xoa(s, i);
			i--; // nho co nhieu khoang trang canh nhau
		}
	}
}
int main()
{
	char s[100];
	gets(s);
	XoaKhoangTrang(s);
	printf("%s", s);
	return 0;	
}
