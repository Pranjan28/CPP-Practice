#include<stdio.h>
int main()
{
	int i,n;
	printf("accept number of char\n");
	scanf("%d",&n);
	char a[n];

	for(i=0;i<n;i++)
	{
        	printf("enter character\n");
		scanf(" %c",&a[i]);
	}
        a[i]='\0';
	printf("\nString is [ %s ]",a);
	return 0;




}

