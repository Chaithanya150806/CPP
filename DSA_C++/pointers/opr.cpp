#include<iostream>
using namespace std;
int main(){
    int a=12;
    int* ptr=&a;

    //++ , --
    cout << ptr<<endl;
    ptr++;
    cout <<ptr<<endl;//the output is based on hexadecimal
    ptr--;
    cout <<ptr<<endl;
    int b=5;
    int* num=&b;

    //add +
    cout <<(*num+*ptr)<<endl;
    cout <<(*num+1)<<endl;

    //sub -
    cout <<(*num-1)<<endl;
    cout <<(num-1)<<endl;

    //compare <,<=,>,>=,==,!= 
    int ptr3;
    int ptr4;
    cout << ptr3 <<"   "<<ptr4<<endl;
    cout << (ptr3 > ptr4) <<endl;
    cout << (ptr3 < ptr4) <<endl;
    cout << (ptr3 >= ptr4) <<endl;
    cout << (ptr3 <= ptr4) <<endl;
    cout << (ptr3 == ptr4) <<endl;
    cout << (ptr3 != ptr4) <<endl;
    cout << (num < ptr) <<endl;
    

    return 0;

}