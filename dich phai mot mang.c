#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void XuatMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void DichPhai( int a[], int n, int m)
{
	while(m--){
	int i;	
	int temp = a[ n - 1 ];
	for( i = n - 1; i > 0; i--){
		a[i] = a[i - 1];
	}
	a[0] = temp;
	}
}

int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	int m;
	scanf("%d", &m);
	DichPhai(a, n, m);
	XuatMang(a, n);
	return 0;
}
