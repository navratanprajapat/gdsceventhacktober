#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10],p,q,i,j,m,n;
	cout<<"Enter number of rows and columns for 1st matrix:- ";
	cin>>m>>n;
	cout<<"Enter number of rows and columns for 2nd matrix:- ";
	cin>>p>>q;
	cout<<"Enter values for matrix 1:- ";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter values for matrix 2:- ";
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			cin>>b[i][j];
		}
	}
	cout<<"Matrix 1 is "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}
	cout<<"Matrix 2 is "<<endl;
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			cout<<b[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}
	cout<<"Sum of both matrixes is "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}	
}
