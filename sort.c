#include<stdio.h>
int accept_arr(int,int*);
int sort_arr(int,int*);
int display_arr(int*,int);
int main()
{
	int n;



	printf("how many numbers u want to be in array\n");
	scanf("%d",&n);
	int a[n];
	accept_arr(n,a);
	printf("\nBefore sort\n");
	display_arr(a,n);
	sort_arr(n,a);
	printf("\nAfter sort\n");
	display_arr(a,n);
	return 0;
}

int accept_arr(int b,int *a)
{
	int i;
	for(i=0;i<b;i++)
	{
		printf("enter the number %d\n",i+1);
		scanf("%d",&a[i]);
	}
}

int sort_arr(int b,int *a)
{

	int temp,i,j;
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}






}



int display_arr(int *a,int b)
{
	for(int i=0;i<b;i++)
	{
		printf("%d\t",a[i]);


	}
}

