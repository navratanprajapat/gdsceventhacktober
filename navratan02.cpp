#include<iostream>
using namespace std;
int main(){
	int a[10][10], b[10][10], c[10][10], n, m, i, j;
	cout<<"Enter number of rows and columns: "<<endl;
	cin>>n>>m;
		cout<<"Enter elements in first matrix: ";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements in second matrix: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	cout<<"Multiplication of matrices are: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}
}
