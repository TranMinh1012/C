#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for( i = 0; i < a; i++){
		for( j = i+1; j <= b+i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
