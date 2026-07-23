#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    cout<<"arr = ";
    for (int i =0;i<row;i++){
        for (int j=0;j<col;j++){
            cout <<arr[i][j]<<" ";
        }
       
    }
    cout <<endl;
     arr[1][3]=50;
     arr[0][2]=10;
     cout <<"arr after = ";
     for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout <<arr[i][j]<<" ";
        }
       
    }
    cout <<endl;
    return 0;
}