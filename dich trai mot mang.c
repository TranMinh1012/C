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
	for( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void DichTrai(int a[], int n, int m)
{
	while(m--)
	{
		int i;
		int temp = a[0];
		for( i = 0; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		a[n - 1] = temp;
	}
}
int main(){
	int n, m;
	int a[MAX];
	scanf("%d", &n);
	NhapMang(a, n);
	scanf("%d", &m);
	DichTrai(a, n, m);
	XuatMang(a, n);
	return 0;
}
