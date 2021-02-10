#include<stdio.h>
#include<math.h>
int main(){
	unsigned long long n;
	scanf("%d", &n);
	int i, j;
	int l = 0;
	int dao;
	i = n % 10;
		
	int m;
	m = n - i;
	while( n > 0){
		j = n % 10;
		++l;
		n /= 10;
	}
	int q;
	q = pow (10, (l-1));
	
  if ( i != 0){
	
	if ( i > j){
		dao = m + (i-j)*q + j;  
		printf("%d", dao);
	} else if ( i < j){
		dao =  m - (i-j)*q + j; 
		printf("%d", dao);
	} else {
		printf("%d", n);
	}
}
if ( i == 0){
	dao = m - j*q +j;
		printf("%d", dao);
} 
	
//  printf("%d %d %d %d %d", i, j, l, m, q);
	return 0;
}
