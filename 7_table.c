#include<stdio.h>
int main(){
    int i,num;
    printf("\nEnter any number for the table : ");
    scanf("%d",&num);

    printf("\nTable of %d is: ",num);
    for(i=1;i<=10;i++){
        int res =num * i;
        
        printf("%d * %d = %d",num,i,res);
    }
}