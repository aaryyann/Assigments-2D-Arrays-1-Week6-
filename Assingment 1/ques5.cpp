#include<iostream>
using namespace std ;

int main() {
    int m;
    cin >> m ;
    int n;
    cin >> n;
    
    int arr[m][n];

    for ( int i = 0 ; i <= m-1; i++){
        for ( int j = 0 ; j <= n-1; j++){
            cin >> arr[i][j];
        }
     }

     int sum[m];
 
        
    for ( int j = 0 ; j <= m-1 ; j++){
        int s = 0;
        for ( int k =0 ; k <= n-1; k++){
            s = s + arr[j][k];
        }
        sum[j]= s;
    }

    int max = 0;

    for ( int i = 0 ; i<= m-2; i++){
        if ( sum[i] > sum[i+1]){
           max = i;
        }
    }
    cout << max;

}