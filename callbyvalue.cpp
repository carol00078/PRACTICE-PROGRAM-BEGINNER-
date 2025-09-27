#include <iostream>
using namespace std;
void change(int a){
    a=a+5;
    cout<<"INSIDE"<<a<<endl;
}
int main(){
int a=10;
change(a);
cout<<"OUTSIDE"<<a<<endl;
return 0;
}