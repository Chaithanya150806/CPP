#include <iostream>
using namespace std;
int linear(int arr[3][3],int row,int col,int key){
    for (int i =0;i<row;i++){
        for (int j=0;j<col;j++){
            if (arr[i][j]==key){ 
               cout <<"element is founded at :" <<i<<" "<<j<<endl;
               break;
            }  
        }
    }
 cout <<"not founded ";
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    cout<<linear(arr,row,col,8);
    return 0;
}