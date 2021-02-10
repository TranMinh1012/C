#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for( i = 1; i <= (a/2); i++){
		for( j = 0; j < b; j++){
			if(i == (a/2) || j == b/2){
				printf("0");
			} else {
				printf("1");
			}
		}
		printf("\n");
	}
	for( i = (a/2) + 1; i > 1; i--){
		for( j = 0; j < b; j++){
			if( i == (a/2)+1 || j == b/2){
				printf("0");
			} else {
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
