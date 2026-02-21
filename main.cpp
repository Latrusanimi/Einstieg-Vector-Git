#include <iostream>
#include <vector>

using namespace std;

// Struct soll einen Namen und eine Note enthalten, wähle geeignete Datentypen
struct Studierende {
    string name;
    double note;
};

int main() {
    vector<Studierende> students;

    // Füge 4 Studierende in die Liste students ein
    students.push_back(Studierende{"Graf", 4.5});
    students.push_back(Studierende{"Joe", 2.0});
    students.push_back(Studierende{"Maria", 5.5});
    students.push_back(Studierende{"Robert", 3.2});

    cout << "Pruefungsergebnisse:" << endl;
    // Gib alle Studierenden und die jeweilige Note aus
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].name << " " << students[i].note << endl;
    }

    // Gib aus, ob die jeweilige Person bestanden hat oder nicht
    cout << "\nPruefungsergebnisse 2:" << endl;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].note >= 4.0) {
            cout << students[i].name << " " << students[i].note << " " << "Bestanden" << endl;
        }
        else {
            cout << students[i].name << " " << students[i].note << " " << "Nicht Bestanden" << endl;
        }
    }


    return 0;
}