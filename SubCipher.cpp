/*
This is an assignment for Frank Mitropolous's course in 
"Beginner to Beyond C++". Saved for ARCHIVAL PURPOSES ONLY!
12/29/2020
*/
#include <iostream> 
#include <string> 
using namespace std;

int main() {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message {};
    string tempMessage {};
    cout << "Please enter your secret message: " << endl;
    cin >> message;

    //begin encryption 
    for (int i {0}; i < message.size(); i++) {
        char temp = message.at(i);
        int index = alphabet.find(temp);
        temp = key.at(index);
        tempMessage.push_back(temp);
    }
    message.replace(0, message.size(), tempMessage);
    return 0;

}
