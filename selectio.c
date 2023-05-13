#include<stdio.h>
int main()
{
	int n,i,min,temp,j;
	printf("enter arrya size=");
	scanf("%d",&n);
	int ar[n];
	printf("Enter element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++){
			if(ar[j]<ar[min])
			{
				min = j;
			}
		}
		temp = ar[i];
		ar[i] = ar[min];
		ar[min] = temp;	
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
	
}
