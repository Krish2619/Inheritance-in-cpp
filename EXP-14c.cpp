//Chhabaria Krishna
//24070123149   
//B3
//Multilevel inheritance

#include<iostream>
#include<string>
using namespace std;

class Food {
    public:
    string cuisine="Indian";
    void type(){
        cout<<"Indian Subcontinental"<<endl;
    }
};
class Dish: public Food {
    public:
    string dish="Aloo Paratha";
};
class Restaurant: public Dish {
    public:
    string name="Krishna's Kitchen";
};

int main(){
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<<"Restaurant: "<<f3.name;
}

/* OUTPUT:
Indian Subcontinental
Indian: Aloo Paratha
Restaurant: Krishna's Kitchen
*/