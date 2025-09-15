//Chhbaria Krishna
//24070123149
//B3
//Single inheritance

#include<iostream>
#include<string>
using namespace std;

class car {
    public:
    string a ="Hyundai ";
    void model(){
        cout<<"Sedan"<<endl;
    }
};
class name: public car {
    public:
    string b ="Honda City";
};

int main(){
    name u1;
    u1.model();
    cout<<u1.a ;
    cout<< u1.b;
}


/* OUTPUT:
Sedan
Hyundai Honda City
*/