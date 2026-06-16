#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxsum =INT_MIN;
    for (int st=0;st<n;st++){
        int cur=0;
        for (int end=st;end<n;end++){
            cur +=arr[end];
            maxsum=max(cur,maxsum); 
           
        }
    }
    cout <<"max sub arr = "<<maxsum;

return 0;
}