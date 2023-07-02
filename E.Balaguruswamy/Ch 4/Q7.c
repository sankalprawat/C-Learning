#include<stdio.h>
#include<math.h>

int main()
{
  float Drate  , Scost , Hcost , EOQ , TBO ;
  printf("Enter the Demand rate :");
  scanf("%f" , &Drate);
  printf("Enter the Setup costs :");
  scanf("%f" ,&Scost);
  printf("Enter the Holding cost :");
  scanf("%f" ,&Hcost);
  
  EOQ = (int)sqrt((2*Drate*Scost)/Hcost);
  TBO = (int)sqrt((2*Scost)/(Drate*Hcost));

  printf("EOQ = %.2f" , EOQ);
  printf("\nTBO = %.2f" , TBO);

  return 0 ;

}