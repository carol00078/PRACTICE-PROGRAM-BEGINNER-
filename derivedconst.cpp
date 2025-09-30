#include <iostream>
using namespace std;
class base1{
int data1;
public:
  base1(int a){
  data1=a;
}
 void printdata1(){
    cout<<"1st CONSTRUCTOR "<<data1<<endl;
 }
};
class base2{
int data2;
public:
base2(int b ){
    data2=b;
}
void printdata2(){
    cout<<"2nd CONSTRUCTOR "<<data2<<endl;
}
};
class derived:public base1, public base2{
    int derived1;
    int derived2;
    public:
   derived(int a, int b, int c, int d):base1(a),base2(b){ //SYNTAX FOR USING CONSTRUCTOR IN DERIVED
    derived1=c;
    derived2=d;
   }
 void printderived(){
    cout<<"THIS IS DERIVED CONSTRUCTOR "<<endl;
    cout<<" "<<derived1<<endl;
    cout<<" "<<derived2<<endl;
 }
};
int main(){
 derived o(5,8,9,15);
 o.printdata1();
 o.printdata2();
 o.printderived();
return 0;
}