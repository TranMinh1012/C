#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	int k = 1;
	for ( i = 1; i <= a; i++){
		for ( j = 1; j <= b; j++){
			printf("%d", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
