#include<iostream>
using namesoace std;



void miniMaxSum(vector<int> arr) {
     long long min = 0;
     long long max = 0;
     int c = 1;
     
     sort(arr.begin(),arr.end());


    for ( int i = 0; i < arr.size()-1; i++){
        if ( i <= 3){
          min += arr[i];
        }

        if ( c <= 4){
             max += arr[c];
             c++;
        }
    }
    
    cout << min << " " << max << endl;

}
