#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int>letter={1,2,3,4,5};

    reverse(letter.begin(), letter.end());

    for (int let :letter){
        cout <<let<<" ";
    }
    cout <<endl;
    

    return 0;
}