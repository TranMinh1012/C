#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int c = a * b;
	while ( a != b)
	if ( (a>0) & (b>0) ){
		if (a > b){
			a = a - b;
		} else {
			b = b - a;
		}
	}
	printf("%d", c / a);
	return 0;
}
