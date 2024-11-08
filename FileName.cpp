#include <iostream>
#include <cmath>

class Vector {
private:
    
    double x, y;

public:

    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

    
    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    
    void print() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }

    void dir() const {
        double magnitude = std::sqrt(x * x + y * y);
        std::cout << "Vector magnitude: " << magnitude << std::endl;
    }
};


int main() {
    
    Vector v1(3, 4);
    Vector v2(1, 2);

    
    std::cout << "Vector 1:" << std::endl;
    v1.print();
    std::cout << "Vector 2:" << std::endl;
    v2.print();

    
    Vector v3 = v1.add(v2);
    std::cout << "Sum of Vector 1 and Vector 2:" << std::endl;
    v3.print();

    
    std::cout << "Magnitude of the resulting vector:" << std::endl;
    v3.dir();

    return 0;
}
