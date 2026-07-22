#include <iostream>
using namespace std;
int main(){
    int num[5];
    int ind=5;
    cout <<"enter 5 num :";

    for  (int i =0 ; i <ind ;i++){
       
        cin >> num[i];

    }
  
    for (int i=0 ;i<ind; i++){    
         cout << num[i] <<endl;    
    }
    cout << num[4];
    return 0;
}

