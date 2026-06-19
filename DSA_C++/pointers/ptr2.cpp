#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a=87;
    int* ptr=&a;
    int** ptr2=&ptr;
    int*** ptr3=&ptr2;

    cout << a <<endl;
    cout << &a <<endl;
    cout << &ptr<<endl;
    cout << &ptr2 <<endl;
    cout << &ptr3 <<endl;
    cout << *ptr3 <<endl;
    cout << *ptr <<endl;

    
    return 0;





}