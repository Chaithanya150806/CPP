#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    bool sort = true;
    for(int i=0;i<n-1;i++){
        if (arr[i]> arr[i+1]){
            sort = false;
            break;
        }
 }
 if(sort) cout <<"sorted";
 else { cout <<"not";}
 return 0;
}
