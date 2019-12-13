#include<iostream>
using namespace std;
int swap(int a,int b);
int main()
{
	int x,y;
	cout<<"enter two elements to swap:"<<endl;
	cin>>x>>y;
	swap(x,y);
	return 0;
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"the elements after swapping:"<<endl<<a<<endl<<b<<endl;
	return 0;
}

