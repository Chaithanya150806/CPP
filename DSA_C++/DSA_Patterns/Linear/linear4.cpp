#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int odd=0;
    int even=0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
           
        }
        else {
            odd++;
         

        }
       
    }
     cout <<even <<endl;
     cout <<odd;
    return 0;

}