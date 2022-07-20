#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,qt,bt[10],wt[10],rem_bt[10],tat[10];
	int temp,sq=0,count=0;
	float awt=0,atat=0;
	printf("Enter the number of process\n");
	scanf("%d",&n);
	printf("Enter the burst time\n");
	for(int i = 0 ; i<n ; i++)
	{
		scanf("%d",&bt[i]);
		rem_bt[i]=bt[i];
	}
	printf("Enter the quantum time\n");
	scanf("%d",&qt);
	while(1)
	{
		
		for(int i=0;i<n;i++)
		{
			temp=qt;
			if(rem_bt[i]==0)
			{
				count++;
				continue;
			}
			if(rem_bt[i]>qt)
				rem_bt[i]=rem_bt[i]-qt;
			else if(rem_bt[i]>0)
			{
				temp = rem_bt[i];
				rem_bt[i]=0;
			}
			sq = sq+temp;
			tat[i]=sq;
		}
		if(n<=count)
			break;
	 }
	 printf("\nProcess\t\tBT\t\tTAT\t\tWT\n");
	 for(int i = 0 ; i<n ; i++)
	 {
	 	wt[i] = tat[i]-bt[i];
	 	awt = awt+wt[i];
	 	atat = atat+tat[i];
printf("\n%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],tat[i],wt[i]);
	 }
	 awt = awt/n;
	 atat = atat/n;
	 printf("\nAverage waiting time:%f\n",awt);
	 printf("\nAverage waitng turn around time:%f\n",atat);
}
	 
			
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
		
