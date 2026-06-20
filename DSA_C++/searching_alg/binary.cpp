#include  <iostream>
#include <vector>
using  namespace std;
int main(){
    vector <int> arr ={1,2,3,4,5,6};
    int target = 55;
    int low=0;
    int high=arr.size()-1;
    while(low <=high){
        int mid=(low +high)/2;
        if (arr[mid]==target){
           cout << "target =" <<mid<<endl;
           break;
        }
       else if (arr[mid] < target){
           low =mid +1;
        }
        
        else if (arr[mid]>target){
            high=mid -1;
        }
        
        
        

    }
    return 0;
}