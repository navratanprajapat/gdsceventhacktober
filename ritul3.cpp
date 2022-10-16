#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"Manipulators:"<<endl;
	cout<<setfill('*')<<setw(10)<<"hello"<<endl;
	cout<<setw(15)<<setprecision(2)<<2.5455<<endl;
	//cout<<setiosflags(ios::hex);
	cout<<"hexadecimal of 84 is "<< ios::hex ;
	return 0;
 } 
