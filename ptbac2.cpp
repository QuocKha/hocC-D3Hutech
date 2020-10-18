#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{ 
float a,b,c,del,x1,x2,x;
printf("Nhap a,b,c tuong ung ax^2+bx+c=0: "); scanf("%f%f%f",&a,&b,&c); // Nhập dữ liệu
if (a == 0)
    if (b == 0)
       if (c == 0) printf("pt co vo so nghiem"); // Nếu cả a,b,c bằng 0 thì dẹp mẹ lun. VÔ SỐ NGHIỆM
       else printf("pt vo nghiem"); // a,b bằng 0 mà c khác 0 thì sai quá sai. Làm gì có số nào bằng 0 ngoài số 0 nên pt VÔ NGHIỆM
    else printf("x = %f",-c/b); // a = 0, b khác 0 thì tất nhiên x sẽ bằng -c/b
else { // Sau khi thỏa tất cả điệu kiện của PT bậc 2, tính Delta
    del = b*b-4*(a*c);
    if (del >= 0)
        if (del == 0) { // Delta = 0 thì pt nghiệm kép
        	x = -b/(2*a);
        	printf("nghiem kep x= %f",x);
        }
        else { // Delta lớn hơn 0 thì có 2 nghiệm phân biệt
        	x1 = (-b + sqrt(del))/(2*a);
        	x2 = (-b - sqrt(del))/(2*a);
        	printf("Nghiem thu 1 = %f",x1);
        	printf("\nNghiem thu 2 = %f",x2);
		     }		      
    else printf("PT vo nghiem"); // Delta bé hơn 0 thì dẹp. VÔ NGHIỆM 	   
   }
return 0;
}
