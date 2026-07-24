#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
    int maxrow(int mat[3][3],int row,int col){
        int maxsum=INT_MIN;
        for (int i=0;i<row;i++){
            int rowsumi =0;
            for (int j=0;j<col;j++){
                rowsumi +=mat[i][j];
            }
            maxsum=max(maxsum,rowsumi);

        }
        return maxsum;
    }

int main(){
    int mat[3][3]={{2,5,1},{10,20,30},{100,20,2}};
    cout <<maxrow(mat,3,3);
    return 0;
}