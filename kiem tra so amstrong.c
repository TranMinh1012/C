#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int g1, g2;
	g1 = n; g2 = n;
	int i, k;
	int j = 0;
	int sum = 0;
	while ( n > 0){
		i = n % 10;
		j++;
		n  /= 10;
	}
	while ( g1 > 0){
		k = g1 % 10;
		sum += pow(k ,j);
		g1 /= 10;
	}
	if ( g2 == sum){
		printf("1");
	} else {
		printf("0");
	}
	return 0;

}
