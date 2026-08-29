#include <bits/stdc++.h>
using namespace std;
int lager(int arr[],int n, int lag){
    for (int i= 0; i <n ; i++){
        if (arr[i]> lag){
             lag=arr[i];
        }
    
    }
    return lag;
}

int main(){

    int arr[] ={1,2,3,5,4};
    
   cout<< lager(arr,5,arr[0]);
    return 0;
    
}