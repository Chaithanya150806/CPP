#include <iostream>
using namespace std;
int main(){
    int n=128;
    if  (n> 0 && (n & (n -1))==0){
        cout <<"true";

    }
    else {
        cout <<"flase";
    }

return 0;
}