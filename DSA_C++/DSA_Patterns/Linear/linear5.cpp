#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={4,5,6,7,8};
     int n=5;
     int fir =INT_MIN;
     int sec=INT_MIN;
     for(int i=0;i<n;i++){
        if (arr[i]>fir){
            sec=fir;
            fir=arr[i];
        }
        else if(arr[i]> sec && arr[i]!=fir){
            sec=fir;
        }
     }
     
     cout <<"sec lar ="<<sec <<endl;
     return 0;
}