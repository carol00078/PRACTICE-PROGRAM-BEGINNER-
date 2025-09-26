#include <iostream>
using namespace std;
void printnum(const int a){
    cout<<"NUM INSIDE "<<a<<endl;
}
int main(){
    int x=25;
    printnum(x);
    cout<<"ORIGIONAL IS "<<x<<endl;

return 0;
}
