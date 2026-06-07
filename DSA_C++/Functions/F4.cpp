#include <iostream>
using namespace std;
int mysum(int n ){
    int sum =1;
    for (int i=1; i<=n;i++){
        sum *=i;
    }
   return sum;
}

int main(){
    cout << mysum(5) << endl;
    cout << mysum(10) << endl;
    cout << mysum(6) << endl;


    
    return 0;
    
}

