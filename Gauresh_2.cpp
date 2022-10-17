#include <iostream>
using namespace std;
int main(){
    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;
    cout << "Enter rows and columns for first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns for second matrix: ";
    cin >> p >> q;
    cout <<"Enter elements of matrix 1:" << endl;
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
        {
            cout << "Enter element of a  : ";
            cin >> a[i][j];
        }

    cout <<"Enter elements of matrix 2:" << endl;
    for(i = 0; i < p; ++i)
        for(j = 0; j < q; ++j)
        {
            cout << "Enter element of b : ";
            cin >> b[i][j];
        }

    for(i = 0; i < m; ++i)
        for(j = 0; j < q; ++j)
        {
            c[i][j]=0;
        }

    for(i = 0; i < m; ++i)
        for(j = 0; j < q; ++j)
            for(k = 0; k < n; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < m; ++i){
    for(j = 0; j < q; ++j)
    {
        cout << " " << c[i][j];
    }
    cout<<"\n";
}
    return 0;
}
