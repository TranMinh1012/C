#include<stdio.h>
#include<string.h>
#define separator ",. "

int main(){
	char s[100];
	char s1[100];
	gets(s);
	gets(s1);
	char s2[100][100]; // tach chuoi s[]
	char *p;
	int a = 0;
	p = strtok(s, separator);
	while( p != NULL){
		strcpy(s2[a++], p);
		p = strtok(NULL, separator);
	}
	char s3[100][100]; // tach chuoi s1[]
	char *q;
	int b = 0;
	q = strtok(s1, separator);
	while( q != NULL){
		strcpy(s3[b++], q);
		q = strtok(NULL, separator);
	}
	char s4[100][100];
	int c = 0;
	int i, j;
	for( i = 0; i < a; i++){
		int count = 0;
		for( j = 0; j < b; j++){
			if( strcmp(s2[i], s3[j]) == 0){
				count++;
			}
		}
		if( count == 0){
			strcpy(s4[c++], s2[i]);
		}
	}
	for( i = 0; i < c-1; i++){
		for( j = i+1; j < c; j++){
			if( strcmp(s4[i], s4[j]) > 0 ){
				char temp[100];
				strcpy(temp, s4[i]);
				strcpy(s4[i], s4[j]);
				strcpy(s4[j], temp);
			}
		}
	}
	for( i = 0; i < c; i++){
		if(strcmp(s4[i], s4[i+1]) != 0){
			printf("%s ", s4[i]);
		}
	}
	return 0;
}
