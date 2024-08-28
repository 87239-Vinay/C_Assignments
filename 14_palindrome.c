#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[]=" ";
	int i,length,flag=0;
	
	printf("Enter any stream : ");
	scanf("%s",&str);
	length=strlen(str);

	for(i=0;i<=length;i++){
		if(str[i] != str[length-i-1]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("%s is Not a Palindrom",str);
	}
	else{
		printf("%s is a palindrom",str);
	}
	getch();
}