#include <iostream>
#include <limits>   // for numeric_limits
#include <iomanip>  // for setprecision

using namespace std;

// Function to read a positive double with input validation
double readPositiveDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            // Invalid input: not a number
            cin.clear(); // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a numeric value.\n";
        } else if (value < 0) {
            // Negative number
            cout << "Please enter a positive number.\n";
        } else {
            break;
        }
    }
    return value;
}

int main() {
    cout << "--- Loan to Income Ratio Calculator ---\n";

    double loanAmount = readPositiveDouble("Enter total loan amount: ");
    double income = 0;

    // Special case: prevent income from being zero
    while (true) {
        income = readPositiveDouble("Enter your annual income: ");
        if (income == 0) {
            cout << "Income cannot be zero. Please enter a non-zero income.\n";
        } else {
            break;
        }
    }

    double ratio = loanAmount / income;

    cout << fixed << setprecision(2);
    cout << "\nLoan-to-Income Ratio: " << ratio << endl;

    // Optional: categorize risk
    if (ratio > 3.5)
        cout << "Warning: High loan-to-income ratio.\n";
    else if (ratio > 2.5)
        cout << "Moderate risk.\n";
    else
        cout << "Low risk.\n";

    cout<<"24CE123_prince."<<endl;   
    return 0;
}