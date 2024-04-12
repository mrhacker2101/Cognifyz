#include <iostream>

using namespace std;

int main() {
    int num_subjects;
    float total_grade = 0.0;

    // Prompt the user to enter the number of subjects
    cout << "Enter the number of subjects: ";
    cin >> num_subjects;

    // Input grades for each subject
    for (int i = 0; i < num_subjects; ++i) {
        float grade;
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grade;
        total_grade += grade;
    }

    // Calculate the average grade
    float average_grade = total_grade / num_subjects;

    // Display the average grade to the user
    cout << "The average grade of the student is: " << average_grade << endl;

    return 0;
}