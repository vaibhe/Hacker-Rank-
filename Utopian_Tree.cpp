#include<iostream>
using namespace std;
 int main(){
int utopianTree(int n) {
    if ( n == 0){
        return 1;
    }
    
    if ( n == 1){
        return 2;
    }
    int i = 2;
    
    int growth = 2;
    while( i <= n){
     if ( i % 2 != 0){
        growth *= 2;
        i++;
     }
     else{
        i++;
        growth++;
     }
  }
  return growth;


}
}
