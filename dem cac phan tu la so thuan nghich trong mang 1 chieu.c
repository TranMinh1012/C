#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int Dem( int n)
{
	int dem = 0;
	while( n != 0){
		dem++;
		n /= 10;
	}
	if( dem >= 2){
		return 1;
	}
}
int SoThuanNghich( int n)
{
	int m;
	m = n;
	int dao = 0;
	while( n != 0)
	{
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if( dao == m && Dem(dao) == 1){ // so thuan nghich co it nhat hai chu so
		return 1;
	}
}
void DemVaIn( int a[], int n)
{
	int i;
	int count = 0;
	for( i = 0; i < n; i++){
		if( SoThuanNghich(a[i]) == 1){
			count++;
		}
	}
	printf("%d ", count);
	for( i = 0; i < n; i++){
		if( SoThuanNghich(a[i]) == 1 ){
			printf("%d ", a[i]);
		}
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	DemVaIn(a, n);
	return 0;
}
