#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{ 
float a,b,c,del,x1,x2,x;
printf("Nhap a,b,c tuong ung ax^2+bx+c=0: "); scanf("%f%f%f",&a,&b,&c);
if (a == 0)
    if (b == 0)
       if (c == 0) printf("pt co vo so nghiem");
       else printf("pt vo nghiem");
    else printf("x = %f",-c/b);
else {
    del = b*b-4*(a*c);
   	if (del >= 0)
        if (del == 0) {
        	x = -b/(2*a);
        	printf("nghiem kep x= %f",x);
        }
        else {
        	x1 = (-b + sqrt(del))/(2*a);
        	x2 = (-b - sqrt(del))/(2*a);
        	printf("Nghiem thu 1 = %f",x1);
        	printf("\nNghiem thu 2 = %f",x2);
		     }		      
    else printf("PT vo nghiem");   	   
   }
return 0;
}
