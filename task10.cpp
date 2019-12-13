#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[20];
	cout<<"input a string to convert to lower case:"<<endl;
	cin.getline(str,20);
	cout<<"character in lower case:"<<strlwr(str);
	return 0;
}
