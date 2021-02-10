#include<stdio.h>
#include<math.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void KhoangCachNhoNhat( int a[], int n)
{
	int i, j;
	int d = abs( a[i] - a[i+1]);
	int ind1 = 0;
	int ind2 = 0;
	for( i = 0; i < n-1; i++){
		for( j = i+1; j < n; j++){
			if (d > abs(a[i] - a[j])){
				d = abs(a[i] - a[j]);
				ind1 = i;
				ind2 = j;
			}
		}
	}
	printf("%d %d %d", d, a[ind2], a[ind1]);
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	KhoangCachNhoNhat(a, n);
	return 0;
}
