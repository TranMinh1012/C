#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= 2*n-i; j++){
			if( j < n - i + 1){
				printf("~");
			} else if (j==n-i+1||j==2*n-i||(i==1&&j>=n-i+1)||(i==n&&j>=n-i+1)){
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
