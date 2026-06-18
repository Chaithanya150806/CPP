#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector <int> nums={1,2,3,4};
    int n=nums.size();
    vector<int>val(n,1);
    
    for (int i=0;i<nums.size() ;i++){
       
        for (int j=0;j<nums.size();j++){
            if (i !=j){
            val = nums[j];

        } 
        val[i]=val;


            
            
        }
        cout <<val;
    }
    return 0;
}
