#include<stdio.h>
#include<math.h>

int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else {
		for( i = 2; i <= sqrt(n); i++){
			if( n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	unsigned long long n;
	scanf("%lld", &n);
	int i, j;
	int count = 0;
	int m = n;
	while( m > 0){
		i = m % 10;
		if(SNT(i) == 1){
			count++;
		}
		m /= 10;
	}
	int a[100], b[100];
	int na = count - 1;
	while( n > 0){
		i = n % 10;
		if(SNT(i) == 1){
			a[na] = i;
			na--;
		}
		n /= 10;
	}
	na = count;
	for( i = 0; i < na; i++){
		b[i] = 1;
	}
	int dem;
	for( i = 0; i < na; i++){
		dem = 1;
		if(b[i]){
			b[i] = 0;
			for( j = i+1; j < na; j++){
				if(a[i]==a[j]){
					dem++;
					b[j] = 0;
				}
			}
			printf("%d %d\n", a[i], dem);
		}
	}
	return 0;	
}
