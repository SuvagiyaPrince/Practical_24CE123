#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// User-defined manipulator for formatting currency
ostream& currency(ostream& os) {
    return os << "₹";
}

void displayReport() {
    // Example student data
    string students[] = {"Prince", "Kishan", "Abhishek", "Dhrupal"};
    double marks[] = {98.5, 93.0, 96.4, 91.2};
    double tuitionFees[] = {50000.75, 48000.50, 53000.25, 49000.00};

    cout << "\n--- Student Marks and Tuition Fees ---\n";

    // Header
    cout << left << setw(20) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;

    // Underline
    cout << setfill('-') << setw(20) << ""
         << setw(10) << ""
         << setw(15) << "" << setfill(' ') << endl;

    // Data rows
    for (int i = 0; i < 4; ++i) {
        cout << left << setw(20) << students[i]   // Name
             << setw(10) << fixed << setprecision(1) << marks[i]  // Marks with 1 decimal
             << setw(2) << "$" << fixed << setprecision(2) << tuitionFees[i] << endl;  // Tuition fee with ₹ and 2 decimals
    }
}

int main() {
    displayReport();
    cout<<"24CE123_Prince."<<endl;
    return 0;
}