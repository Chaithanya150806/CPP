#include <iostream>
#include <vector>
using namespace std;
int binary(vector<int> arr,int tar,int st,int end){
    if (st<=end){
        int mid=st+(end-st)/2;

    
     if(arr[mid]==tar){
        return mid;

     }
     else if(arr[mid]<=tar){
        return binary(arr,tar,mid+1,end);
     }
     else {
        return binary(arr,tar,st,mid-1);
     }
}
return -1;
}


int main(){
    vector<int> arr={1,2,5,6,8};
      cout << binary(arr,5,0,arr.size());
  
    return 0;
}