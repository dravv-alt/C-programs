#include<stdio.h>
#include<conio.h>
int main(){
int no,i,counter=0,sum=0;
clrscr();
while(1)
{
	printf("\n Enter the number:");
	scanf("%d",&no);
		if(no>99)
		  continue;
		else
		{ sum=sum+no;
		  counter++;
		}
		if(counter==5)
		break;
}//while loop close
printf("The sum of 5 (2-digits) numbers is:%d",sum);
getch();
return 0;
}
