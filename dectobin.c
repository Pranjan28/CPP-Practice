#include<stdio.h>
int dectobin(int);
int main()
{
	int number;
	printf("\nEnter decimal number: ");
	scanf("%d",&number);
	printf("\n[ %d ]=[ %d ]",number,dectobin(number));
}

int dectobin(int number)
{
	if(number==0)
		return 0;
	else
	{
		return number%2+10*dectobin(number/=2);
	}
}
