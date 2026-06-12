#include <iostream>
using namespace std;
int main(){
    int number ;
    cout <<"enter a number :";
    cin >> number;
    if (number == 0){
            cout << "it is zero :" <<number <<endl;
            cout << "Zero is not even or odd number\n";
            
    }
     else if (number %2 ==0 ){ //(number & 1)==0 //in bit 
        cout << "it is even number :" <<number << endl;
         }
         

         
         else {
            cout << "it is odd number" <<number <<endl; 
         }
         return 0;



}