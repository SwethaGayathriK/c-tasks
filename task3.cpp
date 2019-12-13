#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"enter the year:"<<endl;
	cin>>x;
	if(x%4==0)
	cout<<"the given year is leap year.";
	else
	cout<<"the given year is not leap year.";
	return 0;
}
