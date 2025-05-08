#include <iostream>
#include <set>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    int n, id;

    // Associative container (set) to store unique and sorted transaction IDs
    set<int> transactionIDs;

    cout << "Enter number of transaction IDs: ";
    cin >> n;

    cout << "Enter transaction IDs:\n";
    for (int i = 0; i < n; ++i) {
        cin >> id;
        transactionIDs.insert(id);  // Duplicates will be ignored automatically
    }

    // Display unique and sorted transaction IDs
    cout << "\nUnique and Sorted Transaction IDs:\n";
    for (set<int>::iterator it = transactionIDs.begin(); it != transactionIDs.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Optionally, convert to a dynamically managed sequence (e.g., vector) for further use
    vector<int> uniqueIDs(transactionIDs.begin(), transactionIDs.end());
 
    cout<<"24CE123_prince."<<endl;
    return 0;
}