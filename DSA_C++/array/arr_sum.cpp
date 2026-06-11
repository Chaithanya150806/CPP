#include <iostream>
using namespace std;

int main(){
    int num[]={2,6,44,-9,8,3};
    int size=6;
    int sum = 0;
    for (int i = 0 ; i <size ; i++){
             
            sum = sum+num[i];
            
        }

    
    cout <<"sum num = "<<sum ;

    return 0;


}