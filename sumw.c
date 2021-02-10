#include <stdio.h>

int main()
{
	// bài sai do thêm lời dẫn không nằm trong input/output mô tả ở đề bài
	int a = 0, b = 0;
	//
	printf("nhap a va b: "); // không thêm dòng này
	scanf("%d%d", &a, &b);
	printf("ket qua:");// không thêm dòng này
	printf("%d", a+b);
	
	getch(); // không thêm lệnh này do sẽ dẫn tới lỗi timeout
	return 0;
}