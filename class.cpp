#include <iostream>
using namespace std;
class Employee{
    private:
     int  a, b, c;
    public:
    int d, e;
    void setdata(int a1, int b1, int c3);
    void getdata(int d, int e){
        cout<<"THE VALUE OF A "<<a<<endl;
        cout<<"THE VALUE OF B "<<b<<endl;
        cout<<"THE VALUE OF C "<<c<<endl;
        cout<<"THE VALUE OF D "<<d<<endl;
        cout<<"THE VALUE OF E "<<e<<endl;
    }
};
void Employee :: setdata(int a1, int b1, int c3){
    a=a1;
    b=b1;
    c=c3;
}
int main(){
    int d=48;
    int e=57;
  Employee harry;
  harry.setdata(24, 25, 26);
  harry.getdata(48, 57);
return 0;
}