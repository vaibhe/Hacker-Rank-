#include <iostream>
using namespace std;

int main(){
    int r;
    
    cin >> r ;

    int quantity  = r;

    for ( int i = 1;  i <= r; i++){
        for( int j = 1; j <=  quantity - i; j++){
            cout << " " << " ";

        }
        for ( int k = 0; k < i; k++ ){
        cout << "*"  << " ";
       
        }
        cout <<endl;
    }
}


 



  
  
  
    
