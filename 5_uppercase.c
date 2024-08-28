#include<stdio.h>
#include<conio.h>
#include<ctype.h>		//for is upper(), islower(), isdigit()
#include<string.h>

void analyze_char(const char *input_string){
	//Initialize counters
	int uppercase_count = 0;
	int lowercase_count = 0;
	int digit_count = 0;
	int other_count = 0;

	//Iterate over each character in the string
	for(int i=0;input_string[i] != '\0';i++){
		char ch = input_string[i];

		if(isupper(ch)){
			uppercase_count++;
		}
		else if(islower(ch)){
			lowercase_count++;
		}
		else if(isdigit(ch)){
			digit_count++;
		}
		else{
			other_count++;
		}
	}

	//Displays the results
	printf("Number of uppercase characters : %d \n",uppercase_count);
	printf("Number of lowercase characters : %d \n",lowercase_count);
	printf("Number of digits : %d \n",digit_count);
	printf("Number of others characters : %d \n",other_count);
}

int main() {
	char input_string[100];   //Buffer for the input string

	
	//Prompt the user for input
	printf("Enter a string : ");
	fgets(input_string,sizeof(input_string),stdin);

	//Remove the newline characters if present
	input_string[strcspn(input_string,"\n")] = '\0';

	//Analyze the characters in the input string
	analyze_char(input_string);

	getch();
	return 0;

}
