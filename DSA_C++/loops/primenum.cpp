#include <iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cout <<"enter a number:\n";
    cin >> num; 

    for (int i = 1 ; i <=num ; i++){ 
        if (num % i ==0 ){
            sum++;
        }
    }
    if (sum == 2){
            cout << "it is a prime number" ;
        }
        else {
            cout << "it is not a prime number ";
        }
    
    return 0;
    
}