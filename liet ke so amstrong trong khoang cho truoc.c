#include<stdio.h>
#include<math.h>
int Dem( int n)
{
	int dem = 0;
	while ( n > 0){
		n /= 10;
		dem++;		
	}
	return dem;
}
int KiemTraAmStrong( int n)
{
	int i;
	int sum = 0;
	int m;
	m = n;
	while ( n > 0){
		i = n % 10;
		sum += pow(i, Dem(m));
		n /= 10;
	}
	if( sum == m){
		return 1;
	} else{
		return 0;
	}
}
int main(){
	int a, b;
	int c = 0;
	scanf("%d%d", &a, &b);
	int i;
	if( a < b){
	for( i = a; i <= b; i++){
		if( KiemTraAmStrong(i) == 1){
			printf("%d ", i);
			c++;
		}
	}
	}
	if( a > b){
	for( i = b; i <= a; i++){
		if( KiemTraAmStrong(i) == 1){
			printf("%d ", i);
			c++;
		}
	}
	}
	if ( c == 0){
		printf("0");
	}
	return 0;
}

