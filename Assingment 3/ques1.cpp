#include<iostream>
using namespace std ;

int main(){
    int m , n ;
    cin >> m >> n ;

    int arr[m][n];

    int row_no = 0 ;
    int col_no = 0 ;


    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1 ; j++){
            cin >> arr[i][j];
        }
    }

    // checking row no and col no

    for (int i = 0 ; i <= m-1 ; i++){
        for (int j = 0 ; j <= n-1 ; j++){
            if (arr[i][j] == 0){
                row_no = i;
                col_no = j;
            }
        }
    }

    for (int i = 0 ; i <= m-1 ; i++){
        for (int j = 0 ; j <= n-1 ; j++){
            if (i == row_no || j == col_no){
                arr[i][j] = 0;
            }

            else{
                arr[i][j] = 1;
            }
        }
    }

    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1 ; j++){
            cout << arr[i][j] <<"\t";
        }
        cout << endl ;
    }


}