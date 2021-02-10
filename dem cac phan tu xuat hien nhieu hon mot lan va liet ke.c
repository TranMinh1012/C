#include<stdio.h>
#define max 100

int a[max];
int b[max];
int c[max];
int n;
void NhapMang()
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for( i = 0; i < n; i++){
		b[i] = 1; // mang b[] de dem
	}
	for( i = 0; i < n; i++){
		c[i] = 1; // mang c[] de liet ke
	}
}
void LietKe()
{
	int i, j;
	int count;
	int dem = 0;
	for( i = 0; i < n; i++){
		 count = 0;
		if( b[i] ){
			b[i] = 0;
			for( j = 0; j < n; j++){
				if(a[i] == a[j] && i != j){
					count = 1;
					b[j] = 0;
				}
			}
			if( count == 1){
				dem++;
			}
		} 
	}
	printf("%d\n", dem);
	for( i = 0; i < n; i++){
		 count = 0;
		if( c[i] ){
			c[i] = 0;
			for( j = 0; j < n; j++){
				if(a[i] == a[j] && i != j){
					count = 1;
					c[j] = 0;
				}
			}
			if( count == 1){
				printf("%d ", a[i]);
			}
		} 
	}
}
int main()
{
	scanf("%d", &n);
	NhapMang();
	LietKe();
	return 0;
}
