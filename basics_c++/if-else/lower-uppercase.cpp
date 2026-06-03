#include <iostream>
using namespace std;
int main(){
char ch;
cout <<" enter a charter : ";
cin >> ch;
 
if (ch >= 'a' && ch <= 'z'){// we can also put A as 65 and z as 90
    cout << ch <<" is a lower case charter\n" ;

}
else {
    cout << ch<< " is a upper case letter\n";
}
return 0;

}