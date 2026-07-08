#include <iostream>
using namespace std;
int main(){
    int arr[]={4,2,1,5,3};
    int n=5;
    for (int i=1;i<n;i++){
       int  carr=arr[i];
        int prev=i-1;
        while (prev >= 0 && arr[prev]>carr){
            arr[prev+1]= arr[prev];
            prev--;

        }

        arr[prev+1] = carr;

    }
    cout <<"insertion sort  : " ;
    for (int i=0;i <n ;i++){
        cout <<arr[i];
    }
    return 0;
}