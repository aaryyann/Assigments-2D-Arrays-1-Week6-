#include<iostream>
using namespace std ;

int main (){
    int m ;
    cout << "Enter the row of matrix :" ;
    cin >> m;

    int n;
    cout << "Enter the cols of matrix :" ;
    cin >> n;

    int arr[m][n];

    for ( int i = 0 ; i <= m -1 ;i++){
        for( int j = 0 ; j <= n-1 ; j++){
            arr[i][j] = 10;
        }
    }

    for ( int i = 0 ; i <= m -1 ;i++){
        for( int j = 0 ; j <= n-1 ; j++){
            cout << arr[i][j] << "\t";
        }

        cout << endl ;
    }
}