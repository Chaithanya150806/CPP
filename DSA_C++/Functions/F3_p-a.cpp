#include <iostream>
using namespace std;
void myfunction(int a , int b,int sum ,string name){//para
    sum =a+b;
    cout << sum <<" " << name<<endl;
}
int main(){
    cout << "my num =";
    myfunction(3,3,1,"chaitu");
    myfunction(1,5,1,"lakshmi");
    
    return 0;
}
