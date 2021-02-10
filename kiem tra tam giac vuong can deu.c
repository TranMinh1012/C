#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a+b>c & a+c>b & b+c>a & a>0 & b>0 & c>0){
		if ( (a==b) & (b==c) & (a==c) ){
			printf("3");
		} else if ( (a*a+b*b==c*c) | (a*a+c*c==b*b) | (b*b+c*c==a*a) ){
			printf("1");
		} else if ( (a==b) | (b==c) | (a==c) ){
			printf("2");
		}
	} else {
		printf("");
	}
	return 0;
}
