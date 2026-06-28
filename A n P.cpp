// ============================================================
// PROGRAM 4: Area and Perimeter Calculator
// ============================================================
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() 
{
    int choice;

    cout << "==============================" << endl;
    cout << "  AREA & PERIMETER CALCULATOR " << endl;
    cout << "==============================" << endl;
    cout << "Select a shape:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "\n--- Result ---" << endl;

    if (choice == 1) {
        double radius;
        cout << "Enter radius of the circle: ";
        cin >> radius;
        double area = PI * radius * radius;
        double perimeter = 2 * PI * radius;
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
        cout << "Circumference (Perimeter): " << perimeter << endl;

    } else if (choice == 2) {
        double length, width;
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
        double area = length * width;
        double perimeter = 2 * (length + width);
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;

    } else if (choice == 3) {
        double base, height, sideA, sideB, sideC;
        cout << "Enter base of the triangle: ";
        cin >> base;
        cout << "Enter height of the triangle: ";
        cin >> height;
        cout << "Enter side A: ";
        cin >> sideA;
        cout << "Enter side B: ";
        cin >> sideB;
        cout << "Enter side C: ";
        cin >> sideC;
        double area = 0.5 * base * height;
        double perimeter = sideA + sideB + sideC;
        cout << "Shape: Triangle" << endl;
        cout << "Base: " << base << ", Height: " << height << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;

    } else {
        cout << "Error: Invalid choice! Please enter 1, 2, or 3." << endl;
      
	  
    }
    return 0;
    }
    

