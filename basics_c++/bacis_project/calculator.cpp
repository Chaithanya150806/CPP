#include <iostream>
using namespace std;
int main(){
    int a,b;
    char sum;
    cout << "enter a number :" <<endl;
    cin >> a;
    cout << "enter b number :" <<endl;
    cin >> b;
    cout << "enter the sum(+,-,*,/,,%):"<<endl;
    cin >> sum;
    if (sum =='+'){
    cout << "sum =" << a+b ;
    }
 else if (sum == '-'){
 cout << "sum =" << a-b ;
 }
else if (sum == '*'){
 cout << "sum =" << a*b ;
}
else if (sum =='/'){
 cout << "sum =" << a/b ;
}
else if (sum =='%'){
 cout << "sum =" << a%b ;
}
else  {
 cout << "error" << endl;
}
    return 0;

    
}