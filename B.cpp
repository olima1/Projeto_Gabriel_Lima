#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;
public:
    // Getters e Setters
    int getB1() { return B1; }
    void setB1(int b1) { B1 = b1; }
    float getB2() { return B2; }
    void setB2(float b2) { B2 = b2; }

    // Métodos
    void MB1() {
        cout << "MB1" << endl;
    }
    void MB2() {
        cout << "MB2" << endl;
    }
    void MB3(){
        cout << "MB3" << endl;
    }
};