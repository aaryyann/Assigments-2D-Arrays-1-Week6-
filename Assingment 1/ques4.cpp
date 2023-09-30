#include<bits/stdc++.h>
using namespace std ;

int main (){
    int m ;
    cin >> m ;

    int n ;
    cin >> n;

    int arr[m][n];

    int max = INT_MIN; 

    for ( int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1 ; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0 ; i <= m-1 ; i++){
        for ( int j = 0 ; j <= n-1 ; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }

    cout << max;
}