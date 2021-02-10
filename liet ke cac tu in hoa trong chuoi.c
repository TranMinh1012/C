#include<stdio.h>
#include<string.h>
#define separator ",. "

void LietKeInHoa( char * s)
{
	char s1[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);              // TACH CHUOI ROI CHO VAO MANG
	while( p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	int i ,j;
	int count = 0;
	for ( i = 0; i < k; i++){
		for( j = 0; j < strlen(s1[i]); j++){
			if(((s1[i])[j]>='A'&&(s1[i])[j]<='Z')||((s1[i])[j]>='0'&&(s1[i])[j]<='9')){ // xet tung ptu cua chuoi con
				count++;
			} 
		}
		if( count == strlen(s1[i])){
			printf("%s ", s1[i]);
		}
		count = 0;
	}
}
int main(){
	char s[100];
	gets(s);
	LietKeInHoa(s);
	return 0;
}
