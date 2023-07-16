#include<iostream>
using namespace std;

void bonAppetit(int bill[], int k, int b) {
    int sum = 0;
    for ( int i = 0 ; i < 4; i++){
        if ( i ==  k){
            continue;
        }
        else{
            sum += bill[i];
        }
    }
    
      int ans = sum/2;

    if ( b == ans ){
     cout << "Bon Appetit" << endl;
    }

    else{
       cout << abs(ans - b)<< endl;
    }

}
int main(){
    int bill[4] = {3,10,2,9};
    int k = 1;
    int b = 7;

    bonAppetit(bill,k,b);

}