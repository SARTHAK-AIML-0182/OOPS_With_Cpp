#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the no. of Students : ";
    cin >> n;
    vector<int> attendence(n); 

    cout << "Enter the attendance for each student:\n";
    for(int i = 0; i < n; i++) {
        cin >> attendence[i]; 
    }
    
    cout << "Attendence : ";
    for(auto cursor : attendence) {
        cout << cursor << " ";
    }
    cout << endl;
    
    int count = 0;
    for(auto cursor : attendence) {
        if(cursor > 75) {
            count++;
        }
    }
    cout << "Number of students more than 75% are: " << count << endl;
    
    return 0;
}