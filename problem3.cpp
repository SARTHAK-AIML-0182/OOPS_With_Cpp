#include<bits/stdc++.h>
using namespace std;

class Patient {
public:
    string name;
    int id;
    static int activePatients;
    Patient(string n, int ID) {
        name = n;
        id = ID;
        activePatients++;
    }
    Patient() {
        activePatients++;
    }
    ~Patient() {
        activePatients--;
    }
    static void displayActivePatients() {
        cout << "Active Patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient p1("Sarthak", 101);
    Patient p2("Shivam", 102);
    Patient::displayActivePatients();
    Patient p3;
    Patient::displayActivePatients();
    return 0;
}