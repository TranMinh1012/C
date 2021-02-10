#include<stdio.h> // nho xet truong hop so am 
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
void SapXepTang( int a[], int n)
{
	int i, j;
	for( i = 0; i < n - 1; i++){
		for( j = i + 1; j < n; j++){
			if( a[i] > a[j]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}
void TachChan( int a[], int n)
{
	int i;
	int b[max];
	int nb = 0;
	for( i = 0; i < n; i++){
		if( a[i] % 2 == 0){
			b[nb] = a[i];
			nb++;
		}
	}
	SapXepTang(b, nb);
	XuatMang(b, nb);
}
void TachLe( int a[], int n)
{
	int i;
	int c[max];
	int nc = 0;
	for( i = 0; i < n; i++){
		if( a[i] % 2 == 0){
			continue; // xet truong hop khong phai so le
		} else {
			c[nc] = a[i];
			nc++;
		}
	}

	SapXepTang(c, nc);
	XuatMang(c, nc);
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	TachChan(a, n);
	TachLe(a, n);
    return 0;
}





