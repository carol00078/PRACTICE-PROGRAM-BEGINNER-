#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(void){
        a = 10;
        b = 20;
    }
    void display(void){
        cout << "value " << a << "+ " << b << endl;
    }
};
int main(){
 complex f;
 f.display();
return 0;
}