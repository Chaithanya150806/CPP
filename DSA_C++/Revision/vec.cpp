#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int>num  = {1,2,3,4,5};
    reverse(num.begin(),num.end());
    for (int re : num){   
             cout <<re <<"";
    }
    cout <<endl;
return 0;
}