#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    arr[3]=33;
    cout <<arr[0] <<endl;
    cout <<arr[1] <<endl;
    cout <<arr[3] <<endl;
    cout <<arr[2] <<endl;
    cout <<arr[4] <<endl;
    cout <<"size of a array int byts :"<< sizeof(arr) <<endl ;
    cout<<"index size of a array :"<< sizeof(arr) /sizeof(int);

    return 0;

}