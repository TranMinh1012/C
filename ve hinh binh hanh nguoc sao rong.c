#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for( i = 1; i <= a; i++){
		for( j = 1; j <= b + i - 1; j++){
			if( j < i ){
				printf("~");
			} else if (j==i||j==b+i-1||(i==1&&j>=i)||(i==a&&j>=i)){
				printf("*");
			} else {
				printf(".");
			}		
		}
		printf("\n");
	}
	return 0;
}
