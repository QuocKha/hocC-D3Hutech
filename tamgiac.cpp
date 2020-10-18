#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a,b,c,cv,dt,ncv;
	printf("Nhap 3 canh tam giac lan luot: "); scanf("%f%f%f",&a,&b,&c); // Nhập dữ liệu
	if ( (a+b) > c && (c+b) > a && (a+c) > b) {
	   cv = a+b+c; // Tính chu vi
	   ncv = cv / 2; // Nửa chu vi
	   dt = sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c)); // Tính diện tích bằng công thức Herong
	   printf("Chu vi: %f\nDien tich: %f",cv,dt);}
	else printf("It's even not a triangle!"); // Không phải tam giác nếu không thỏa 3 điều kiện if trên
}
