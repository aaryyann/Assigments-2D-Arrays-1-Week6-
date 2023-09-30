#include<iostream>
using namespace std ;

int main (){
    
    int m , n ;
    cin >> m >> n ;

    int arr[m][n];

    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1; j++){
            cin >> arr[i][j];
        }
    }

    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1; j++){
           if (i == j || j == n-i-1){
            cout << arr[i][j] << "\t";
           }
           else {
            cout << " " <<"\t";
           }
        }
        cout << endl ;
    }

}