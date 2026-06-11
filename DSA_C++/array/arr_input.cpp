#include <iostream>
using namespace std;
int main(){
    int num[5];
    int in=5;
    cout <<"enter 5 num :";

    for  (int i =0 ; i <in ;i++){
       
        cin >> num[i];

    }
  
    for (int i=0 ;i<in ; i++){    
         cout << num[i] <<endl;    
    }
    cout << num[4];
    return 0;
}

