#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,r,c,mul[10][10],a[10][10],b[10][10];
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	printf("Enter number of columns : ");
	scanf("%d",&c);

		//for first matrix
	printf("Enter values for 1st matrix : ") ;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}

	//for second matrix
	printf("Enter values for 2nd matrix :\n ") ;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
		//printf("\n");
	}

	printf("Multiplying matrices :\n ");

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]=0;
			for(k=0;k<c;k++){
				mul[i][j]+=a[i][k] * b[k][j];
			}
		}
	}

	//result matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}


	 getch();
	 return 0;
}







