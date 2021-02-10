#include<stdio.h>
#include<string.h>
#define separator ",. "

void TachTungTu( char *s)
{
	int s2[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s2[k++], p);
		p = strtok(NULL, separator);
	}
}
void TapTuRieng()
