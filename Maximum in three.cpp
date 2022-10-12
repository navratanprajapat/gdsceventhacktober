#include <iostream>
using namespace std;
int main() 
{
	int a,b,c;
	cout<<"Enter the value of A,B and C";
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"A is maximum";
		}
		else if(b>c){
			if(b>a){
			
			cout<<"B is maximum";
		}
		}
		else if(c>a){
			if(c>b){
			
		}
			cout<<"C is maximum";
		}
		return 0;
	}
}
	
