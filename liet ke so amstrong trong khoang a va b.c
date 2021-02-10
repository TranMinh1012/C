#include<stdio.h>
#include<math.h>
int dem( int n)
{
	int count = 0;
	while( n > 0){
		n /= 10;
		count++;
	}
	return count;
}
int kiemTraAmstrong( int n){
	int a, b;
	int sum = 0;
	b = n;
	while( b > 0){
		a = b % 10;
		sum += pow(a, dem(n));
		b /= 10;
	}
	if ( sum == n){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	if ( a < b){
		for ( i = a; i <= b; i++){
			if ( kiemTraAmstrong(i) == 1){
				printf("%d ", i);
			}
		}
	} else {
		for ( i = b; i <= a; i++){
			if ( kiemTraAmstrong(i) == 1){
				printf("%d ", i);
			}
		}
	}
	return 0;
}
