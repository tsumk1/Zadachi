#include <iostream>
using namespace std;
 int main () {
    int a, b; 

    cout<< " Enter first number: "<< endl;
    cin>> a ;
    cout<< " Enter second  number: "<<  endl;
    cin>> b ; 
    
    int sum = 0; 
    int i ;

    for(i = a; i <= b; i++){
        if(i % 2 == 0) {
            sum = sum + i ;
        }
    }
    cout<<"Suma parnyh chisel: " <<  sum  <<endl;

     return 0; 
}
