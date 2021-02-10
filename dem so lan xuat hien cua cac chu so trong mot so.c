#include<stdio.h>

int Dem( int n){
	int count = 0;
	while( n != 0){
		count++;
		n /= 10;
	}
	return count;
}
int main(){
	unsigned long long n;
	scanf("%lld", &n);
	int i, j, count;
	int a[100], b[100];
	int m;
	m = n;
	int na = Dem(n) - 1;
	while( n != 0){
		i = n % 10;
		a[na] = i;
		na--;
		n /= 10;
	}
	na = Dem(m);
	for( i = 0; i < na; i++){
		b[i] = 1;
	}
	for( i = 0; i < na; i++){
		count = 1;
		if( b[i] ){
			b[i] = 0;
			for( j = i+1; j < na; j++){
				if(a[i] == a[j]){
					count++;
					b[j] = 0;
				}
			}
			printf("%d %d\n", a[i], count);
		}
	} 
	return 0;
}


