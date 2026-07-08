#include <iostream>
using namespace std;
int main(){
    int arr[]={5,2,1,3,4};
    int n=5;
    cout <<"selection sort : ";
    for (int i=0;i<n-1;i++){
        int small=i;

        for(int j=i+1;j<n;j++){

            if  (arr[j]<arr[small]){
                small=j;
            }
        }
        swap(arr[i],arr[small]);
    }
    for(int i=0;i<n;i++){
        cout <<arr[i];
    }



    
    return 0;
}