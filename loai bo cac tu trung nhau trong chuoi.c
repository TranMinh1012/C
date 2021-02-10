#include<stdio.h>
#include<string.h>
#define separator ",. "

void KetQua( char s1[100][100], int n)
{
	char s2[100][100]; // s2[][] la mang danh dau cua mang s1[][]
	int i, j;
	for ( i = 0; i < n; i++){
		s2[i][100] = 1;
	}
	for ( i = 0; i < n; i++){
		if ( s2[i][100] ){
			s2[i][100] = 0;
			for ( j = i + 1; j < n; j++){
				if( strcmp(s1[i], s1[j]) == 0){ // strcmp la so sanh phan biet IN HOA- in thuong
					s2[j][100] = 0;
				}
			}
			printf("%s ", s1[i]);
		}
	}
}
void BoTuTrungNhau( char *s)
{
	char s1[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	KetQua(s1, k);
}
int main(){
	char s[100];
	gets(s);
	BoTuTrungNhau(s);
	return 0;
}

