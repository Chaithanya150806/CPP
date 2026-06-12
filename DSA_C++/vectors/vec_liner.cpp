#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> num ={5,8,6,2,9};
    int target=2;
    for (int i=0; i<num.size();i++){
        if (num[i]==target){
            cout <<"found at " <<i;
        }
       


    }

    return 0;
}