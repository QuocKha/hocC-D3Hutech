#include <stdio.h> // Khai báo thư viện
#include <conio.h>
#include <math.h>
int main()
{
	float a,b;
	printf("Nhap chieu dai:"); scanf("%f",&a);
	printf("Nhap chieu rong:"); scanf("%f",&b); // Nhập dữ liệu
	if (a <= 0 || b <= 0) printf("Day khong phai hinh chu nhat!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"); // Xét để xem đây có phải hình chữ nhật. Vì các cạnh mà âm hoặc bằng 0 thì dẹp mẹ đi.
	else {
		printf("Chu vi = %f",(a+b)*2); // Tính chu vi
		printf("\nDien tich= %f",a*b); // Tính diện tích
	}
	return 0;
}
