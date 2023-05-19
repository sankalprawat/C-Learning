#include <conio.h>
#include <stdio.h>
int  main (){
 
 int grades ;
 printf("\n Enter the grades of students :");
 scanf("%d" , &grades);

 if (grades >=90)
 {
     printf("\n A1");

 }
 else if (grades >=80 && grades <90){

    printf("\n A2");
}
 else if(grades >= 70 && grades <80){
    printf("\n B1");
 }
 else if (grades >=60 && grades <70){
    printf("\n B2");

 }
 else if(grades >=50 && grades<60){
    printf("\n C1");

 }
 else if (grades >=40 && grades<50){
    printf("\n C2");

 }
 else{
    printf("\n D");
 }
return 0;
}