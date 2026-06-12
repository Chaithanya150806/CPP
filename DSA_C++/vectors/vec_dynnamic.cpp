#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char>vec;

    vec.push_back('A');
    vec.push_back('B');
    vec.push_back('C');
    vec.push_back('D');
    vec.push_back('E');
    cout <<vec.size()<<endl;
    cout <<vec.capacity();
    return 0; 

} 