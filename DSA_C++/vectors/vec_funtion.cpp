#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>vec={5,10,15,20,25};
    vector <int>num={5,17,15,20,25};
    cout <<vec.size()<<endl;
    vec.push_back(30);
    vec.push_back(35);
    vec.push_back(40);
    vec.push_back(45);
    vec.pop_back();
    vec.pop_back();
    num.pop_back();
   

    for (int i :vec){
        cout <<" "<<i<<endl;
    }
    cout<< vec.front()<<" ";
     cout<< vec.at(3);






    return 0;
}
