#include<iostream>
using namespace std;

int checkSum( int *arr, int k){
      int count = 0;
    for ( int i = 0; i < 6 - 1; i++){
        for ( int j = i + 1; j < 6; j++){
            if ( ((arr[i] + arr[j]) % k == 0)){
                count++;
            }
        }
    }

  return count;
}


int main() {

     int arr[6] = {1, 3, 2, 6, 1, 2};
     int k = 3;

     cout << checkSum(arr,k);
}