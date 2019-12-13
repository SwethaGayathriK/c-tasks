#include<iostream>
using namespace std;
main()
{
	int yr,days,week;
	cout<<"enter number of days:"<<endl;
	cin>>days;
	yr=days/365;
	days=days%365;
	week=days/7;
	days=days%7;
	cout<<"years:"<<yr<<endl;
	cout<<"weeks:"<<week<<endl;
	cout<<"days:"<<days<<endl;
	return 0;
}
