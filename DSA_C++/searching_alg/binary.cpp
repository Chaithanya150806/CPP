#include  <iostream>
#include <vector>
using  namespace std;
int main(){
    vector <int> arr ={1,2,3,4,5,6};
    int target = 5;
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (arr[mid]==target){
           cout << "target =" <<mid<<endl;
           break;
        }
       else if (arr[mid] < target){
           st =mid +1;
        }
         else if (arr[mid]>target){
            end=mid -1;
        }    
    }
    return 0;
}