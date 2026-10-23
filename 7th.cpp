#include <iostream>
using namespace std;

class Shape {
public:
    // Function overloading: compile-time polymorphism
    int area(int side) {
        return side * side;
    }

    int area(int length, int breadth) {
        return length * breadth;
    }

    // Virtual function: runtime polymorphism
    virtual void display() {
        cout << "This is a shape." << endl;
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape {
public:
    void display() override {
        cout << "This is a rectangle." << endl;
    }
};

class Circle : public Shape {
public:
    void display() override {
        cout << "This is a circle." << endl;
    }
};

int main() {
    int side, length, breadth;
    double radius;
    const double PI = 3.14159;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    Shape shape;

    cout << "\n--- Compile-Time Polymorphism ---" << endl;

    cout << "Area of square: "
         << shape.area(side) << endl;

    cout << "Area of rectangle: "
         << shape.area(length, breadth) << endl;

    cout << "\n--- Runtime Polymorphism ---" << endl;

    Rectangle rectangle;
    Circle circle;

    Shape* ptr;

    ptr = &rectangle;
    ptr->display();

    ptr = &circle;
    ptr->display();

    cout << "\nArea of circle: "
         << PI * radius * radius << endl;

    return 0;
}
