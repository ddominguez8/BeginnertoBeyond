#include <iostream>
#include <string> 
using namespace std;

int main () {
    string charPyramid {};
    cout << "Please enter what you would like to make into a pyramid: "; 
    cin >> charPyramid;

    for (int i {1}; i <= charPyramid.length(); i++) {
        int check = i % 2;
        if (check == 1) {
            for (int j {0}; j < i; j++) {
                cout << charPyramid[j];
            }
            cout << endl;
        }
    }
}