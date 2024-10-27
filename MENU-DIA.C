#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* bugs of the code
1.The code return multiples lines of the same answer when greater
than 10 number is inputed from user for the case(4) Prime number case

2.The code returns the corrct answer for the inputed user once and will
then onwards deny the correct answer no matter how many times inputed
case(2) Perfect number case
*/

int main(){
int no,choice,fact=1,i,sum=0,f1=0,f2=1,f3,flag;
	clrscr();

do
{
	//take input of your choice
	printf("\n \n1.Find factorial\n2.Check for perfect no\n3.Check for fibonacci number or not\n4.Check prime number or not\n5.Exit");
	printf("\nEnter choice from above operations: ");
	scanf("%d",&choice);

	if(choice!=5)
	{//take input for the test
	printf("\nEnter the input number:");
	scanf("%d",&no);
	}
	//switch-case statement for all of the tests on number
	switch(choice)
	{
	case 1://logic to find factorial of a number
		for(i=1;i<=no;i++)
		fact=fact*i;
		printf("\n %d! = %d",no,fact);
		break;
	case 2://logic to check for perfect number [6's factors = 1,2,3 ; 1+2+3=6]
		for(i=1;i<=no/2;i++)
		{
		 if(no%i==0)
		 sum=sum+i;
		}
		if(sum==no)
		printf("\n%d is perfect number",no);
		else
		printf("\n %d is not a perfect number",no);
		break;
	case 3://logic to check for input number is fibonacci number
		if(no==f1 || no==f2)
		printf("\n %d is fibonacci number",no);
		else
		{
			while(1)
			{
				f3=f1+f2;
				if(f3==no)
				{
				flag=1;
				break;
				}
				if(f3>no)
				{
				flag=0;
				break;
				}
				f1=f2;
				f2=f3;
			}
			if(flag==1)
			printf("\n %d is fibonacci number",no);
			else
			printf("\n %d is not fibonacci number",no);
		}
		break;
	case 4://logic to check if a number is prime or not
		printf("\n Logic to check if a number is prime or not");
		for(i=2;i*i<=no;i++)
		{
			if(no==2)
			{
			printf("\nThe entered number %d is a prime number",no);
			}
			if(no%i==0)
			{
			printf("\nThe enetered number %d is not a prime number",no);
			}
			else
			printf("\nThe entered number %d is a prime number",no);
		}
		break;
	case 5://Exit the program
		exit(0);

	default:
		printf("\nInvalid operation number");
	}
}
while(choice!=5);
getch();
return 0;
}
