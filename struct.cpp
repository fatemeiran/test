#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Student {
    string name;
    string family;
    string study;
    float avg;
    Date birth;
};

 main() {
    int n = 10;
    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Family: ";
        cin >> s[i].family;

        cout << "study: ";
        cin >> s[i].study;

        cout << "Average: ";
        cin >> s[i].avg;

        cout << "Birth date (year month day): ";
        cin >> s[i].birth.year >> s[i].birth.month >> s[i].birth.day;
    }

    int countAfter1380 = 0;
    int countCE = 0;
    int countBahman = 0;

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (s[i].birth.year > 1380)
            countAfter1380++;

        if (s[i].study == "CE" || s[i].study == "Computer")
            countCE++;

        if (s[i].birth.month == 11)   // rttttt
            countBahman++;

        if (s[i].avg > s[maxIndex].avg)
            maxIndex = i;

        if (s[i].avg < s[minIndex].avg)
            minIndex = i;
    }

    cout << "\n-----------------------------\n";

    cout << "Percent born after 1380: "
         << (countAfter1380 * 100.0) / n << "%\n";

    cout << "Percent of Computer Engineering students: "
         << (countCE * 100.0) / n << "%\n";

    cout << "\nStudent with highest average:\n";
    cout << s[maxIndex].name << " " << s[maxIndex].family
         << "  Avg: " << s[maxIndex].avg << endl;

    cout << "\nStudent with lowest average:\n";
    cout << s[minIndex].name << " " << s[minIndex].family
         << "  Avg: " << s[minIndex].avg << endl;

    cout << "\nPercent born in Bahman: "
         << (countBahman * 100.0) / n << "%\n";

}