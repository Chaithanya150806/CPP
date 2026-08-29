#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,4,5,3,6};
    int n=5;
    int sum=0;
    for (int i = 0 ; i < n ; i++){
        sum = sum +arr[i];
    }
    cout << "sum =" <<sum;

    
    return 0;
}