#include <iostream>

using namespace std;

int main () {
    const char* sym = "Something";
    int len = 0;
    int i;

    for (i = 0; sym[i] != '\0'; i++) {
        len++;
    }
    cout<< "Lenght of string: " << len <<endl;
    return 0 ;



}
