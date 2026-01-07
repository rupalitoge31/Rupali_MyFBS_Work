#include<stdio.h>
void main()
{
int no,rem;
	int sum=0;
	int temp;
	printf("enter a number :");
	scanf("%d",&no);
	temp = no;
	while(temp>0)
	{
	    rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;	
	}
	if(no==sum){
		printf("number is Armstrong");
	}
	else
	{
		printf("number is not Armstrong");
	}
}