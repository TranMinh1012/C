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
void TachMang( int a[], int n)
{
	int i;
	int b[max], nb = 0;
	int c[max], nc = 0;
	for( i = 0; i < n; i++){
		if( a[i] % 2 == 0){
			b[nb] = a[i];
			nb++;
		}
	}
	for( i = 0; i < n; i++){
		if( a[i] % 2 == 1){
			c[nc] = a[i];
			nc++;
		}
	}
	XuatMang(b, nb);
	printf("\n");
	XuatMang(c, nc);
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	TachMang(a, n);
	return 0;
}

