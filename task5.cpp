#include<iostream>
using namespace std;
main()
{
	int n,i,j,a[20],l,s;
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(j=0;j<n;j++)
	cin>>a[j];
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		l=a[i];
		if(s>a[i])
		s=a[i];
	}
	cout<<"largest element in array is:"<<l<<endl;
	cout<<"smallest element in array is:"<<s<<endl;
		return 0;
	
}
