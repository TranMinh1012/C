#include<stdio.h>
#define max 100
#include<math.h>

void NhapMang(int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int SNT( int n )
{
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
	return 1;
}
void KiemTraSNT( int a[], int n)
{
	int i;
	int count = 0;
	for( i = 0; i < n; i++){
		if( SNT(a[i]) == 1){
			count++;
		}
	}
	printf("%d ", count);
	for( i = 0; i < n; i++){
		if( SNT(a[i]) == 1){
			printf("%d ", a[i]);
		}
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	KiemTraSNT(a, n);
	return 0;
}
