#include <iostream>
#include <cmath>

class Vector2 {
public:
    float x,y;

    // Constructor
    Vector2(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

    // Add 2 vectors (overloads a + b)
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // multiply 2 vectors
    Vector2 operator*(const Vector2& other) const {
        return Vector2(x * other.x, y * other.y);
    }

    // returns length/magnitude
    float length() const {
        return std::sqrt(x * x + y * y);
    }

    // returns normalized Vector2 (length of 1)
    Vector2 normalized() const {
        float len = length();
        if (len == 0) return Vector2(0, 0);
        return Vector2(x / len, y / len);
    }

    // dot product
    float dot(const Vector2& other) const {
        return x * other.x + y * other.y;
    }

    // print Vector2
    void print() const {
        std::cout << "Vector2(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Basic usage
    Vector2 position(10.0f, 5.0f);
    Vector2 velocity(3.0f, 4.0f);
 
    std::cout << "Position: ";
    position.print();
 
    std::cout << "Velocity: ";
    velocity.print();
 
    std::cout << "Velocity length: " << velocity.length() << std::endl;
 
    std::cout << "Velocity normalized: ";
    velocity.normalized().print();
 
    Vector2 moved = position + velocity * 2.0f;
    std::cout << "Position after 2 steps: ";
    moved.print();
 
    return 0;
}