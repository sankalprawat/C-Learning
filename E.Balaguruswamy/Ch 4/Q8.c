#include<stdio.h>
#include<math.h>


int main()
{
    float C , frequency , L , R ; 
    printf("Enter the value of Inductance or L :");
    scanf("%f" ,&L);
    printf("Enter the value of Resistance or R :");
    scanf("%f" , &R);
    printf("C\t\tFrequency\n");
    printf("-----------------------\n");

    for(C = 0.01 ; C<=0.1 ; C += 0.01) 
    {
        frequency = sqrt((1/(L*C)) - ((R*R)/4*(C*C)));
        printf("%.2f\t%.4f\n" , C , frequency);
    }
}