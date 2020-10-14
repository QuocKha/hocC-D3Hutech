#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a,b,c,cv,dt,ncv;
	printf("Nhap 3 canh tam giac lan luot: "); scanf("%f%f%f",&a,&b,&c);
	if ( (a+b) > c && (c+b) > a && (a+c) > b) {
	   cv = a+b+c;
	   ncv = cv / 2;
	   dt = sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c));
	   printf("Chu vi: %f\nDien tich: %f",cv,dt);}
	else printf("It's even not a triangle!");
}
