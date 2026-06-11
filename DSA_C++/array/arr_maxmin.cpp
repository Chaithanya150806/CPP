#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num[]={2,55,8,8,-9,4};
    int size=6;
    int smallest = INT_MAX;
    int largest  = INT_MIN;
    

    for (int i = 0 ; i <=size ; i++){
        if (num[i]<smallest){
            smallest =num[i];
        }
         largest =max(num[i],largest);//smallest =min(num[i],smallest);
         

    
        }
        

           
           

    
    cout <<"smallest num = "<<smallest <<endl;
    cout <<"largest num = "<<largest <<endl;

    return 0  ;


}