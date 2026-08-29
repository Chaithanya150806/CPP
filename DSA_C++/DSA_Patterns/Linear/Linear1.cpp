#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int n=5;
    int tar=3;
    for (int i=0;i<n;i++){
        if (arr[i]==tar){
            cout<<"tar ="<<i;
        }
       
        
    }
    return 0;
}