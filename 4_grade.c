#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,per,total;
	
	printf("Enter marks of 5 subjects : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	total=a+b+c+d+e;
	printf("\nTotal Marks: %d ",total);

	per=total/5;
	printf("\nPercentage : %d %",per);

	if(per>=90){
		printf("\nGrade : Ex");
	}
	else if(per>=80 && per<=90){
		printf("\nGrade : A");
	}
	else if(per >=70 && per<=80){
		printf("\nGrade : B");
	}
	else if(per >=60 && per <=70){
		printf("\nGrade : C");
	}
	else{
		printf("\nGrade : Fail");
	}
	getch();
}