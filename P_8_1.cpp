#include <iostream>
#include <vector>
#include <algorithm>  // For std::reverse
#include <iterator>   // For iterators

using namespace std;

// Approach 1: Reverse using std::reverse() function
void reverseWithStd(vector<int>& seq) {
    std::reverse(seq.begin(), seq.end());
}

// Approach 2: Reverse manually using iterators
void reverseManually(vector<int>& seq) {
    auto start = seq.begin();
    auto end = seq.end() - 1;

    while (start < end) {
        // Swap the values using iterators
        swap(*start, *end);
        ++start;
        --end;
    }
}

int main() {
    int n;

    // Input: Size of the sequence
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> seq(n);

    // Read the sequence of integers from user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }

    // Approach 1: Using std::reverse()
    cout << "\nOriginal sequence: ";
    for (const auto& num : seq) {
        cout << num << " ";
    }

    reverseWithStd(seq);
    cout << "\nReversed sequence using std::reverse(): ";
    for (const auto& num : seq) {
        cout << num << " ";
    }

    // Input new sequence for manual reversal
    cout << "\n\nEnter the elements again for manual reversal: ";
    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }

    // Approach 2: Using manual iteration
    cout << "\nOriginal sequence: ";
    for (const auto& num : seq) {
        cout << num << " ";
    }

    reverseManually(seq);
    cout << "\nReversed sequence using iterators: ";
    for (const auto& num : seq) {
        cout << num << " ";
    }
    cout<<endl;
    cout<<"24CE123_prince."<<endl;
    return 0;
}