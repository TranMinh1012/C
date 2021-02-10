#include<stdio.h>

int main(){
	int a, b, i;
	int sum = 0;
	scanf("%d%d", &a, &b);
	if (a == b){
		printf("");
	} else if(a < b){
		for (i = a;  ( (a <= i) & ( i <= b) ); ++i ){
		sum += i;
	}
	} else {
		for (i = a;  ( (b <= i) & ( i <= a) ); --i ){
		sum += i;
	}
	}
	printf("%d", sum);
	return 0;
}

