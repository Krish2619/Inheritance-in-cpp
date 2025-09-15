//Chhabaria Krishna
//24070123149
//B3
//Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

class Brand {
protected:
    string brand;
public:
    Brand() {
        brand = "BMW";
    }
};

class Features {
public:
    void classic() {
        cout << "Features: Luxury" << endl;
    }
};

class Carr : public Brand, public Features {
    string model;
public:
    Carr() {
        cout << "Enter Model: ";
        cin >> model;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    Carr c;
    c.display();
    c.classic();
    return 0;
}

/* OUTPUT:
Enter Model: 3 Series 
Brand: BMW
Model: 3 Series
Features: Luxury
*/