# include <stdio.h>
/* this programme takes two numbers and display the sum
-------------------------------------------------------------------------------------------------*/
int main()
{
	int number1,number2,sum;                       // declearing the varibales
	
	printf("Enter your first number : ");          // taking the user input for first value
	scanf("%d",&number1);
	printf("Enter your second number : ");         // taking the second value for the second value
	scanf("%d",&number2);
	
	sum=number1+number2;                            // this line add up the two given numbers
	printf("\nThe sum of enterd numbers are : %d",sum); // this displays the summed numbers
	
	return 0;                                        // this line gives 0 when successfully excuted the programme
	
}
