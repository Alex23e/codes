// ============================================================
// PROGRAM 2: Temperature Converter (Celsius to Fahrenheit)
// ============================================================
#include <iostream>
using namespace std;

int main() {
    double celsius;
    double fahrenheit;

    cout << "==============================" << endl;
    cout << "   TEMPERATURE CONVERTER      " << endl;
    cout << "==============================" << endl;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "\n--- Result ---" << endl;
    cout << celsius << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}

