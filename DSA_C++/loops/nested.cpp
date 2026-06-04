#include <iostream>
using namespace std;
int main(){
    for (int i = 1 ; i <= 2 ; i++){
        cout << "outer :" <<i <<endl;
        for (int j =1 ; j <= 3 ; j++){
            cout <<"  inner :" <<j <<endl;
        }

    }
return 0;

}