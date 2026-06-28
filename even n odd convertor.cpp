// ============================================================
// PROGRAM 5: Even to Odd Converter (and vice versa)
// ============================================================
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "==============================" << endl;
    cout << "    EVEN / ODD  CONVERTER     " << endl;
    cout << "==============================" << endl;
    cout << "Enter a whole number: ";
    cin >> number;

    cout << "\n--- Result ---" << endl;

    if (number % 2 == 0) {
        // Number is even ? convert to odd by adding 1
        int converted = number + 1;
        cout << number << " is an EVEN number." << endl;
        cout << "Converting to ODD: " << number << " + 1 = " << converted << endl;
        cout << converted << " is now an ODD number." << endl;
    } else {
        // Number is odd ? convert to even by adding 1
        int converted = number + 1;
        cout << number << " is an ODD number." << endl;
        cout << "Converting to EVEN: " << number << " + 1 = " << converted << endl;
        cout << converted << " is now an EVEN number." << endl;
    }

    return 0;
}

