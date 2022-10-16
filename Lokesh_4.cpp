#include<stdio.h>
using namespace std;
int binary(){
	int i,l,h,m,n,k,a[10];
	printf("Enter elements:- ");
	scanf("%d",&n);
	printf("Enter integers:- ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter value to be searched:- ");
	scanf("%d",&k);
	l=0;
	h=n-1;
	m=(l+h)/2;
	while(l<=h){
	
		if(a[m]<k){
			l=m+1;
		}
		else if(a[m]==k){
			printf("%d found at location %d",k,m+1);
			break;
		}
		else{
			h=m-1;}
			m=(l+h)/2;
		}
	
	if(l>h){
		printf("Not found.");
		return 0;
	}
}
int main(){
	binary();
}
