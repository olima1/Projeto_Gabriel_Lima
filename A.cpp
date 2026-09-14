#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;
public:
    // Getters e Setters
    int getA1() { return A1; }
    void setA1(int a1) { A1 = a1; }
    float getA2() { return A2; }
    void setA2(float a2) { A2 = a2; }

    // Métodos
    void MA1() {
        cout << "MA1" << endl;
    }
    void MA2() {
        cout << "MA2" << endl;
    }
    void MA3(){
        cout << "Alteracao a classe A a partir do clone\n";
    }
};