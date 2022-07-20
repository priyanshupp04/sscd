#include<iostream>
using namespace std ;

int main()
{
	int fifo[3]={-1};
	int n;
	cout<<"Enter the number of inputs"<<endl;
	cin>>n;
	int inputs[n];
	cout<<"Enter the inputs:"<<endl;
	for(int i = 0 ; i<n ;i++)
	{
		cin>>inputs[i];
	}
	int hit = 0,fault = 0 ;
	int j=0 , flag;
	for(int i = 0 ; i<n ; i++)
	{
		flag = 0 ;
		for(int k = 0 ; k<3 ; k++)
		{
			if(fifo[k]==inputs[i])
			{
				flag = 1 ;
				hit++;
				break;
			}
		}
		if(flag==0)
		{
			fifo[j]=inputs[i];
			j++;
			fault++;
		}
		if(j==3)
			j=0;
	}
	cout<<"Number of hits:"<<hit<<endl;
	cout<<"Number of fault:"<<fault<<endl;
}
	
