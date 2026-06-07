#include <iostream>
using namespace std;
int ncr(int n){
    int num=1;
    for (int i=1;i<=n;i++){

        num =num*i;
    }
    return num;

        }
        int ncr2(int n,int r){
            return ncr(n) /(ncr(r)*ncr(n-r));

        }     

    int main(){
       cout << ncr2(5,4) <<endl;
        return 0;
    }
