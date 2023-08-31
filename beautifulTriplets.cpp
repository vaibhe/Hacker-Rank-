#include<iostream>
using namespace std;



int main(){
    int arr[5] = {2,2,3,4,5};
    int d = 1;
    int count = 0;

    for ( int i = 0; i < 5 - 2; i++){
        for ( int j = i + 1; j < 5 - 1; j++){
            for ( int k = j +1; k < 5; k++  ){
                if ( ((arr[j] - arr[i]) == d) &&  (arr[k] - arr[j]) == d )
                  cout << "Beautiful triplet --> " << arr[i] << " " << arr[j] << " " << arr[k]<< endl;
                    count++;
            }
        }
    }

    cout << count << endl;
    



}


