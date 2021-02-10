#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void XuatMang( int a[], int n){
	int i;
	for ( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void ChenMang( int a[], int b[], int m, int n, int p)
{
	int c[max];
	int q = 0; // so phan tu cua mang c[max]
	int i;
	for ( i = 0; i < p; i++){
		c[q] = a[i];
		q++;
	}
	for ( i = 0; i < n; i++){
		c[q] = b[i];
		q++;
	}
	for ( i = p; i < m; i++){
		c[q] = a[i];
		q++;
	}
	XuatMang(c, q);
}
int main(){
	int a[max]; int b[max];
	int m, n, p;
	scanf("%d%d%d", &m, &n, &p);
	NhapMang(a, m);
	NhapMang(b, n);
	ChenMang(a, b, m, n, p);
	return 0;
}
