#include<iostream>
using namespace std ;

int main () {
    int m ;
    cout << "Enter the row of matrix :" ;
    cin >> m;

    int n;
    cout << "Enter the cols of matrix :" ;
    cin >> n;

    int arr[m][n];
    int brr[m][n];

    for ( int i = 0 ; i <= m -1 ;i++){
        for( int j = 0 ; j <= n-1 ; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl ;

    for ( int i = 0 ; i <= m -1 ;i++){
        for( int j = 0 ; j <= n-1 ; j++){
            cin >> brr[i][j];
        }
    }

    //sum 

    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1 ; j++){
            cout << arr[i][j] + brr[i][j] << "\t";
        }
        cout << endl ;
    }

}