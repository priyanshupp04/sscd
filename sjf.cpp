#include<iostream>
using namespace std ;
int main()
{
	int n,temp;
	cout<<"Enter the numbr of process\n";
	cin>>n;
	int wt[n]={0},bt[n],tat[n],index[n];
	cout<<"Enter the burst time";
	for(int i = 0 ; i<n ; i++)
	{
		cin>>bt[i];
		index[i]=i;
	}
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = i+1 ; j<n ; j++ )
		{
			if(bt[i]>bt[j])
			{
				temp = bt[i] ;
				bt[i] = bt[j] ;
				bt[j] = temp;
				index[i] = j;
				j = j+1;
			}
		}
	}
	wt[0]=0;
	for(int i = 0 ; i<n-1 ; i++)
		wt[i+1] = wt[i] + bt[i] ;
	
	cout<<"process--bursttime--waiting time--tat\n";
	for(int i = 0 ; i<n ; i++)
	{
		cout<<index[i]<<"\t"<<bt[i]<<"\t"<<wt[i]<<"\t"<<bt[i]+wt[i]<<endl;
	}
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
