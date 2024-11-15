#include <iostream>
using namespace std;

int main() {
    char Fever, Cough, sb, st;

    cout << "Do you have a fever? (y/n): ";
    cin >> Fever;

    cout << "Do you have a cough? (y/n): ";
    cin >> Cough;

    cout << "Do you have shortness of breath? (y/n): ";
    cin >> sb;

    cout << "Do you have a sore throat? (y/n): ";
    cin >> st;

    // Check symptoms based on given conditions
    if (Fever == 'y' && Cough == 'y') {
        if (sb == 'y') {
            cout << "Likely COVID-19; consult a doctor." << endl;
        } else {
            cout << " Likely cold or flu." << endl;
        }
    } else if (st == 'y' && Fever == 'n') {
        cout << "Likely a minor throat infection." << endl;
    } else {
        cout << "sumptoms does not match , you are safe" << endl;
    }

    
}
