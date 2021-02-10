#include<stdio.h>
#define MAX 100

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
	for( i = 0; i < n - 1; i++){
		printf("%d ", a[i]);
	}
}
void Xoa( int a[], int n, int vt)
{
	if( vt >= 0 && vt < n)
	{
		int i;
		for( i = vt - 1; i < n - 1; i++){
			a[i] = a[i + 1];
		}
		n--;
	}
}
int main()
{
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	int vt;
	scanf("%d", &vt);
	Xoa(a, n, vt);
	XuatMang(a, n);
	return 0;
}
