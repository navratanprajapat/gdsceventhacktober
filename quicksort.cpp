#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high) {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {
        // Find leftmost element greater than
        // or equal to pivot
        do {
            i++;
        } while (arr[i] < pivot);
 
        // Find rightmost element smaller than
        // or equal to pivot
        do {
            j--;
        } while (arr[j] > pivot);
 
        // If two pointers met.
        if (i >= j)
            return j;
 
        swap(arr[i], arr[j]);
    }
}
void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<< a[i] << " ";
    }
}




};

int main()
{
    int t; 
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0 ; i<n; i++){
            cin>>a[i];

        }
        Solution ob;
        ob.quickSort(a, 0, n-1);
        ob.printArray(a,n);
    }
    return 0;
}
