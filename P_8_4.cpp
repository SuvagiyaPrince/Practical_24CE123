#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

// Structure to hold student record
struct Student {
    string name;
    int score;
};

// Custom comparison function for sorting in descending order of score
bool compareByScore(const Student& a, const Student& b) {
    return a.score > b.score;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students;

    // Input student records
    for (int i = 0; i < n; ++i) {
        Student s;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> ws; // flush newline
        getline(cin, s.name);

        cout << "Enter score of " << s.name << ": ";
        cin >> s.score;

        students.push_back(s);
    }

    // Sort students based on scores in descending order
    sort(students.begin(), students.end(), compareByScore);

    // Display ranked list
    cout << "\n--- Student Rankings ---\n";
    cout << left << setw(5) << "Rank" << setw(20) << "Name" << "Score" << endl;
    cout << "------------------------------\n";

    int rank = 1;
    for (vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
        cout << left << setw(5) << rank++ << setw(20) << it->name << it->score << endl;
    }
  
     cout<<"24CE123_prince."<<endl;
    return 0;
}