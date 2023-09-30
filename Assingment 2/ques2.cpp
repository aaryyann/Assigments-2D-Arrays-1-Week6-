#include<iostream>
using namespace std ;

int main (){
    int m , n ;
    cin >> m >> n ;

    int arr[m][n];

    for (int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for ( int i = 0  ; i <= m-1; i++){
        for (int j = i+1 ; j <= n-1; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp ;
        }
    }

    for ( int i = m-1 ; i >= 0; i--){
            for ( int j = 0 ; j<= n-1 ; j++){
                cout << arr[i][j] <<"\t";
            }
        cout << endl;
    }
}