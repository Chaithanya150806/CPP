#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]= {1,5,8,2,6};
    int n=5;
    int smallest=INT_MAX;
    int largest =INT_MIN;
    for (int i=0;i<n;i++){
       
    
    largest=max(arr[i],largest);
    }
    cout <<largest;
    return 0;
}