#include<iostream>
using namespace std;
main()
{
	int n,i,a[20],sum=0;
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
    }
	cout<<"the sum of the array elements:"<<sum<<endl;
	return 0;
}
