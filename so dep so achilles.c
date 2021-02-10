#include<stdio.h>
#include<math.h>

int SNT( int n){
	int i;
	if( n < 2){
		return 0;
	} else {
		for( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return n>1;
}
int KiemTraAchilles( int n){
	int i;
	for( i = 2; i <= n; i++){
		if( SNT(i)==1 && n%i==0 && n%(i*i)!=0){
			return 0;
		}
	}
	return n>1;
}
int Max( int a, int b){
	return a < b ? b : a;
}
int Min( int a, int b){
	return a < b ? a : b;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for( i = Min(a,b); i <= Max(a,b); i++){
		if( KiemTraAchilles(i) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}
