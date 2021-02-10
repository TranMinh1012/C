#include<stdio.h>
#include<string.h>
#define separator ",. "

void TuNhieuNhat( char s1[100][100], int n)
{
	char s2[100][100];
	int i, j;
	for ( i = 0; i < n; i++){
		s2[i][100] = 1;
	}
	int max = 0;
	int ind = 0;
	for ( i = 0; i < n; i++){
		int count = 1;
		if ( s2[i][100] ){
			s2[i][100] = 0;
			for ( j = i + 1; j < n; j++){
				if( stricmp(s1[i], s1[j]) == 0){
					count++;
					s2[j][100] = 0;
				}
			}
			if ( max < count ){
				max = count;
				ind = i;
			}
		}
	}
	printf("%s %d", strlwr(s1[ind]), max);
}
void TachTu( char *s)
{
	char s1[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	TuNhieuNhat(s1, k);
}
int main(){
	char s[100];
	gets(s);
	TachTu(s);
	return 0;
}
