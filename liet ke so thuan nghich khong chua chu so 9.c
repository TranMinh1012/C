#include<stdio.h>

int SoThuanNghich( int n){
	int dao = 0;
	int m = n;
	while( m > 0){
		dao = dao*10 + m%10;
		m /= 10;
	}
	if( dao == n){
		return 1;
	}
	return -1; // bieu thi cho TH sai
}
int CheckSo9( int n){
	int i;
	while( n > 0){
		i = n % 10;
		if( i == 9){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int count = 0;
	for( i = 2; i < n; i++){
		if(SoThuanNghich(i)==1 && CheckSo9(i)==1){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}
