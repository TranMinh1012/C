#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	fgets(str, sizeof(str), stdin);
	printf("%s\n", strupr(str));
	return 0;
}
