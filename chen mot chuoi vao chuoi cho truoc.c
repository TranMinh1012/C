#include<stdio.h>
#include<string.h>

int main(){
	char s[100]; char s1[100]; char s2[100];
	gets(s);
	gets(s1);
	int i;
	scanf("%d", &i);
	strcpy(s2, s+i-1); // bo di i - 1 ky tu dau tien roi moi copy
	strcpy(s+i-1, s1); // giu lai i - 1 ky tu dau tien roi moi copy
	strcat(s, s2);
	printf("%s", s);
	return 0;
}
