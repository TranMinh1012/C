#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void LietKe( int a[], int n)
{
	int i, j;
	int count = 1;
	for( i = 0; i < n - 1; i++){
		for( j = i + 1; j < n; j++){
			if( a[i] == a[j]){
				count = 0;
			}
		}
		if( count == 1){
			printf("%d ", a[i]);
		} else {
			printf("0");
		}
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	LietKe(a, n);
	return 0;
}
