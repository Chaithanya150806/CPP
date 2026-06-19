#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num=10;
    int* ptr=&num;
    cout << num  <<endl;
    cout <<  ptr <<endl;
    cout << &num <<endl;
    cout << &ptr <<endl;
    string name ="chaithanya";
    string* letter=&name;
    cout << name  <<endl;
    cout << &name <<endl;
    cout << letter<<endl;
    cout <<&letter<<endl;



    return 0;


}