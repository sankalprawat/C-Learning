#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pie 3.14

int main()
{
        float x = 4 , h = 0 , y = 5 , k = 0 , r=6.40 , a , p  ;
        r = sqrt(pow((x-h),2) + pow((y-k),2)) ;
        a = pie*pow(sqrt(r),2) ;
        p = 2*pie*sqrt(r) ;
        printf("\nThe radius of the given circle is : %.2lfcm " , r );
        printf("\nThe area of the given circle is %.2lfsq/cm" , a);
        printf("\nThe perimeter of the given circle is %.2lfcm" , p);
        return 0;
}