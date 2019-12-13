#include<iostream>
using namespace std;
main()
{
	int n,a[20],temp,i;
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"the sorted list is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<""<<endl;
		
	}
	
}
