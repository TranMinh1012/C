#include<stdio.h>
#define max 100

int a[max];
int b[max];
int n;
void NhapMang()
{
	scanf("%d", &n);
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for( i = 0; i < n; i++){
		b[i] = 1; // gia tri a[i] tuong ung chua dc xet
	}
}
void LietKe()
{
	int i, j;
	for( i = 0; i < n; i++){
		if( b[i] ){
			b[i] = 0; // da xet a[i]
			for( j = i + 1; j < n; j++){
				if( a[i] == a[j]){
					b[j] = 0;
				}
			}
			printf("%d ", a[i]);
		}
	}
}
int main()
{
	NhapMang();
	LietKe();
	return 0;
}
