#include<iostream>
using namespace std;

int main()
{
	int fifo[3]={-1};
	int hit=0,fault=0,flag,j=0;
	int n;
	cout<<"Enter the number of inputs:\n";
	cin>>n;
	int inputs[n];
	cout<<"Enter the inputs:\n";
	for(int i = 0 ; i<n ; i++)
	{
		cin>>inputs[i];
	}
	for(int i = 0 ; i<n ; i++)
	{
		flag=0;
		for(int k = 0 ; k<3 ;k++)
		{
			if(fifo[k]==inputs[i])
			{
				hit++;
				flag=1;
			}
		}
			
			if(flag==0)
			{
				fifo[j]=inputs[i];
				j++;
				fault++;
				
				if(j>=3)
					j=0;
			}
		
	}
	cout<<"Number of hits:\n"<<hit<<endl;
	cout<<"Number of faults:\n"<<fault<<endl;
	return 0;
}
				
				
				
				
				
				
				
				
				
				
				
				
	
