#include <iostream>
using namespace std;

const float PI = 3.14;

/**
 * 
 * Calculates the diameter of a circle.
 * Formula: diameter = 2 * radius
 * 
 */
float calculateDiameter(float radius) {
    return 2 * radius;
}

/**
 * 
 * Calculates the circumference (perimeter) of a circle.
 * Formula: circumference = 2 * PI * radius
 * 
 */
float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

/**
 * 
 * Calculates the area of a circle.
 * Formula: area = PI * radius^2
 * 
 */
float calculateArea(float radius) {
    return PI * radius*radius;
}

int main() {
    float r, d, c, a;
    d = c = a = 1;

    /**
     * Ask the user to enter the radius of a circle.
     * Store the input value into variable 'r'.
     */
    cout << "Enter radius: ";
    cin >> r;

    /**
     * Call the three functions to calculate:
     * - diameter using calculateDiameter()
     * - circumference using calculateCircumference()
     * - area using calculateArea()
     * 
     * Store the results in d, c, and a respectively.
     */



    /**
     * Display the results to the user.
     */
    d=calculateDiameter(r);
    c=calculateCircumference(r);
    a=calculateArea(r);
    cout << "\n--- Circle Properties ---\n";
    cout << "Diameter: " << d << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;

    return 0;
}
