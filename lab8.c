#include<stdio.h>
#include<stdlib.h>

int main()
{
	int max[10][10],alloc[10][10],need[10][10],avail[10],completed[10];
	int p,r,flag;
	printf("Enter the number of process:");
	scanf("%d",&p);
	printf("Enter the number of resources:");
	scanf("%d",&r);
	for(int i = 0 ; i<p ; i++)
		completed[i]=0;
	printf("Enter the MAX Matrix\n");
	for(int i = 0 ; i<p ;i++)
	{
		for(int j = 0 ; j<r ; j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	printf("Enter the Allocation Matrix\n");
	for(int i = 0 ; i<p ;i++)
	{
		for(int j = 0 ; j<r ; j++)
		{
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("Enter the avail resources:");
	for(int i = 0;i<r;i++)
		scanf("%d",&avail[i]);
	
	for(int i = 0 ; i<p ; i++)
	{
		for(int j = 0 ; j<r ; j++)
		{
			need[i][j] = max[i][j]-alloc[i][j];
		}
	}
	for(int i = 0 ; i<p ; i++ )
	{
		for(int j = 0 ; j<p ; j++)
		{
			flag = 0 ;
			if(completed[j]==0)
			{
				for(int k=0; k<r;k++)
				{
					if(avail[k]<need[j][k])
					{
						flag=1;
						break;
					}
				}
			 if(flag==0)
			 {
			 	printf("process:%d\n",j);
				for(int k = 0 ; k<r ; k++)
				{
					avail[k] += alloc[j][k];
					completed[j]=1;
				}
			 }
		 }
	}
}
		for(int i = 0 ; i<p ; i++)
		{
			if(completed[i]==0)
			{
				printf("Unsafe\n");
				return 0 ;
			}
		}
		 printf("\nSafe");
		    return 0;
	}
			
