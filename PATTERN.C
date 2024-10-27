#include<stdio.h>
#include<conio.h>
int main()
{
int x=0,i,j,w,rows;
clrscr();
while(x==0)
{
printf("\n1.Upper Left Triangle (|~\) \n2.Lower Left Triangle (|_\) \n3.Lower Right Triangle (/_|)");
printf("\nChoose the pattern you want to print:");
scanf("%d",&x);
printf("Enter the number of rows you want to print:");
scanf("%d",&rows);
if(x==5){
break;
	}
	switch(x)
	{
		case 1://Upper left triangle pattern (|~\)
		for(i=rows;i>=1;i--)//iterate the number of row times
		{
			for(j=1;j<=i;j++)//to print the elements of each row
			{
			printf("%d\t",j);
			}
			printf("\n");//switch to the next line to print next row elements
		}
		break;

		case 2://Lower left traingle pattern (|_\)
		for(i=1;i<=rows;i++)//iterate the number of row times
		{
			for(j=1;j<=i;j++)//to print the elements of each row
			{
			printf("%d\t",j);
			}
			printf("\n");//switch to the next line to print next row elements
		}
		break;

		case 3://Lower Right Triangle (/_|)
		for(i=1;i<=rows;i++)//rows
		{
			for(w=i;w<rows;w++)//space
			{
			printf("\t");
			}
			for(j=1;j<=i;j++)//coloumn
			{
			printf("%d\t",j);
			}
			printf("\n");

			}
			break;

		case  4://Upper Right Triangle (\~|)




		case 5://exit
		break;
	}

}
getch();
return 0;
}
