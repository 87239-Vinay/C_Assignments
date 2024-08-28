#include<stdio.h>
int main(){
    int a=0,b=1,c,num,i;

    printf("Enter a number :\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
      
    c=a+b;
    a=b;
    b=c;
     printf("\nFibonacci series is : %d",a); 
    }
     
   
}