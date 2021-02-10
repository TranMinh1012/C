#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for( i = 1; i <= a; i++){
		for( j = 1; j <= b; j++){
			if( ( i % 2 == 0 && j % 2 == 0) || ( i % 2 == 1 && j % 2 == 1) ){
				printf("1");
			} else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
