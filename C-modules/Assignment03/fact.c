#include<stdio.h>
void main()
{
	int num ,i,temp,rem;
	printf("enter a number");
	scanf("%d",&num);
	i=1;
	temp=num;
	while(i<=num){
		rem=num%10;
		rem=rem*i;
		i++;
		printf("%d ",rem);
	}
}