#include <iostream>
using namespace std;
int main (){
    int a = 6;
    int b = 4;
    cout <<"a = b=" << a<< endl; 
    cout <<"a += b=" << (a+=b) << endl; 
    cout <<"a -= b=" << (a-= b) << endl; 
    cout <<"a /= b=" << (a /= b) << endl; 
    cout <<"a *= b=" << (a *= b) << endl; 
    cout <<"a %= b=" << (a %=b) << endl;
    //Bitwise Operators 
    //Binary AND, &, Copies a bit to the result if it exists in both operands.
    //Binary OR, |, Copies a bit to the result if it exists in any of the operands
    //Binary XOR, ^, Copies the bit to the result if it is present in either of the operands but not both
    //Left Shift, <<, Shifts the value to the left by the number of bits specified by the right operand
    //Right Shift, >>, Shifts the value to the right by the number of bits specified by the right operand
    //One's Complement, ~, Changes binary digits 1 to 0 and 0 to 1
    cout <<"a &= b=" << (a&b) << endl; 
    cout <<"a |= b=" << (a|=b) << endl; 
    cout <<"a ^= b=" << (a^b) << endl;
    cout <<"a >> b=" << (a>>b) << endl; 
    cout <<"a << b=" << (a<<b) << endl;  
 return 0;
}