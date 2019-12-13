//to get estimates of catreing cost
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
string nameofevent,customername;
double numberofguests;
int numberofminutes;
cout<<"enter the name of the event:"<<endl;
getline(cin,nameofevent);
cout<<"enter the customer's name:"<<endl;
getline(cin,customername);
cout<<"enter the number of guests:"<<endl;
cin>>numberofguests;
cout<<"enter number of minutes in the event:"<<endl;
cin>>numberofminutes;
cout<<"fall dinner"<<endl;
cout<<"event estimate for:"<<customername<<endl;
int numberofservers,cost1;
double costforoneserver,test,totalfoodcost,averagecost,cost2,depositamount,totalcost;
const double costperhour=18.50;
const double costperminute=0.40;
const double costofdinner=20.70;
//get number of servers
test=numberofguests/20;
numberofservers=ceil(test);
//get cost of one server
cost1=(numberofminutes/60)*costperhour;
cost2=(numberofminutes%60)*costperminute;
costforoneserver=cost1+cost2;
//get cost for food
totalfoodcost=numberofguests*costofdinner;
//get average cost per person
averagecost=totalfoodcost/numberofguests;
//get total cost
totalcost=totalfoodcost+(costforoneserver*numberofservers);
//get deposit amount(25%)
depositamount=totalcost*0.25;
//print values above
cout<<"number of servers:"<<numberofservers<<fixed<<setprecision(2)<<endl;
cout<<"the cost for servers:"<<setw(5)<<costforoneserver<<endl;
cout<<"the cost for food is:"<<setw(5)<<totalfoodcost<<endl;
cout<<"average cost per person:"<<setw(5)<<averagecost<<endl;
cout<<"tostal cost is:"<<setw(5)<<totalcost<<endl;
cout<<"please deposit a 25% deposit to reserve the event "<<endl;
cout<<"the deposit needed is:"<<setw(5)<<depositamount<<endl;
return 0;
}
