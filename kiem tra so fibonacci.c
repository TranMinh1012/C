#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int f0 = 0; 
	int f1 = 1;
	int fn;
	while( fn < n ){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if ( fn == n){
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}
