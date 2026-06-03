#include <iostream>
using namespace std;
int main(){
    int a =3;
    int b=5;
 //here 1 = true and 0 = flase in output
    cout << "a || b =" << (a||b) << endl;//Returns true if one of the statements is true
    cout << "a && b =" << (a>1 && b<2) << endl; // Returns true only if all the operands are true or non-zero
    cout << "a !  b =" << (!b) << endl;//Reverse the result, returns false if the result is true
    cout << "a !  b =" << !(a>b) << endl;
    return 0;
}