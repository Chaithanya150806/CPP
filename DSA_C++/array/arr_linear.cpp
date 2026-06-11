#include <iostream>
using namespace std;
int main(){
    int num[10]={1,2,3,4,5,6,4,8,9,4};
    int target =5;
    for (int i=0;i<10;i++){
        if (num[i]==target){
            cout <<"found at"  << i <<endl;
        }
       
        
    }
    
    return 0;
}
/*#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num[10] = {1,2,3,4,5,6,4,8,9,4};
    int target = 4;

    int index = linearSearch(num, 10, target);

    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}*/