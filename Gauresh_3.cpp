#include<iostream>
using namespace std;
class array
{
int i,j;
public:
void getdata(int x,int y){
	i=x;
	j=y;
	int a[i][j];
}
void process(){
	int a[i][j],k,l;
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			cout<<"Enter a["<<k<<"]["<<l<<"]= ";
			cin>>a[k][l];
		}
	}
}
void putdata(){
	int a[i][j],k,l;
	cout<<"Formed Array is:- "<<endl;
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			cout<<a[k][l]<<"  ";
		}
	cout<<endl;
	}
}
};
int main(){
	int a,b;
	cout<<"Enter no. of rows:- ";
	cin>>a;
	cout<<"Enter no. of columns:- ";
	cin>>b;
	array ar;
	ar.getdata(a,b);
	ar.process();
	ar.putdata();
}
