#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> num = {5,2,8,1,9,2};
    int n =8;
      sort(num.begin(),num.end());
      cout << "sort :";
      for (int val : num){
        cout <<val <<" ";
       }
       cout <<endl;

      auto it= find(num.begin(),num.end(),n);
      if (it != num.end()){
        cout << n <<" is in index "<<it -num.begin()<<endl;

      }else {
        cout <<n<< " not founded";
      }
       cout <<endl;
    

       cout <<"lagreast num ="<<*max_element(num.begin(),num.end())<<endl;
  
    return 0;

    
}