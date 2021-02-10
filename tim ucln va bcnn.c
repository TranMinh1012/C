#include<stdio.h>

int TimUCLN( int a, int b)
{
	int temp = 0;
	int i;
	for( i = 1; i <= a && i <= b; i++){
		if( a%i == 0 && b%i == 0){
			temp = i;
		}
	}
	return temp;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d", TimUCLN(a, b), (a*b) / TimUCLN(a, b));
	return 0;
}
