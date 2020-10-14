#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a,b;
	printf("Nhap chieu dai:"); scanf("%f",&a);
	printf("Nhap chieu rong:"); scanf("%f",&b);
	if (a <= 0 || b <= 0) printf("Day khong phai hinh chu nhat!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	else {
		printf("Chu vi = %f",(a+b)*2);
		printf("\nDien tich= %f",a*b);
	}
	return 0;
}
