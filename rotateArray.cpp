#include<iostream>
using namespace std;

void Rotate_array(int a[], int n){
    int x = a[n-1];
    for(int i= n-1; i>=0; i--){
        a[i+1] = a[i];
    }

        a[0] = x;

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        Rotate_array(a,n);
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        
        
        }
    return 0;
}
