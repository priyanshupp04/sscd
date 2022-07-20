#include<iostream>
using namespace std ;

int main()
{
	int n,qt,time=0;
	printf("Enter the number of process:\n");
	cin>>n;
	int bt[n],rt[n];
	cout<<"Enter the burst time\n";
	for(int i = 0 ; i<n ; i++)
	{
		cin>>bt[i];
		rt[i]=bt[i];
	}
	cout<<"Enter the quant time\n";
	cin>>qt;
	int x=n,i=0;
	cout<<"0 | ";
	while(x!=0)
	{
		if(rt[i]>qt)
		{
			rt[i] = rt[i] - qt ;
			time = time+qt;
			cout<<"p"<<i+1<<"| "<<time;
		}
		else if(rt[i]>0 && rt[i]<=qt)
		{
			time = time + rt[i];
			rt[i] = 0 ;
			x--;
			cout<<"p"<<i+1<<"| "<<time;
		}
		i++;
		
		if(i==n)
			i=0;
	}
	cout<<"|"<<time<<endl;
}
	
	
	
	
	
	
	
	
		
		
