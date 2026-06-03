#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int sum =0;

    for (int i = 1 ; i <= n ; i++){
        if (i %2 != 0){    //if (i%2 ==0 ) = youed to print even
            sum += i; 
        }


    }
    cout<<"sum ="<<sum << endl;
return 0;

}