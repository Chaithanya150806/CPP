#include <iostream>
using namespace std;
int main(){
    int  n = 3;
    char ch = 'A';
    for (int i = 1 ; i <= n ; i++){
        for (int j= 1;j<=n ; j++){
            ch = ch+1;

            cout << ch <<" ";
        }
        cout <<endl;
    }
    return 0;

}