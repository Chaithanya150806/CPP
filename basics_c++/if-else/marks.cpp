#include <iostream>
using namespace std;
int main(){
int marks;
cout << "enter  the marks : \n";
cin >> marks;
 
if (marks >90 && marks <= 100){
    cout << "A+\n" ;
}
else if (marks >  80 && marks <=90){
    cout <<"A\n";
}
else if (marks >  70 && marks <=80){
    cout <<"B\n";
}
else if (marks >  60 && marks <=70){
    cout <<"C\n";
}
else {
    cout << "E";
}
return 0;


}