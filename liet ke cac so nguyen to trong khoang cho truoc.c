#include<stdio.h>

int SNT( int n)
{
	int i;
	int dem = 0;
	for( i = 1; i <= n; i++){
		if( n % i == 0){
			dem++;
		}
	}
	if ( dem == 2){
		return 1;
	} else{
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for( i = a; i <= b; i++){
		if( SNT(i) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}
