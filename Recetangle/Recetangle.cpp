#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c; 
public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {
        if (!isVal()) {
            cout << "Triagle with this storons ne vozmoschno!" << endl;
            a = b = c = 0; 
        }
    }
    bool isVal() const {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
    void disp() const {
        cout << "Storoni Triangle: a = " << a << ", b = " << b << ", c = " << c << endl;
    }
    double perim() const {
        return a + b + c;
    }
    double area() const {
        double p = perim() / 2; 
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    void reinit(double sideA, double sideB, double sideC) {
        a = sideA;
        b = sideB;
        c = sideC;
        if (!isVal()) {
            cout << "Triagle with this storons ne vozmoschno!" << endl;
            a = b = c = 0;
        }
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    triangle.disp();
    cout << "Perimetr: " << triangle.perim() << endl;
    cout << "S: " << triangle.area() << endl;
    triangle.reinit(5, 12, 13);
    triangle.disp();
    cout << "New perim: " << triangle.perim() << endl;
    cout << "New S: " << triangle.area() << endl;

    return 0;
}

