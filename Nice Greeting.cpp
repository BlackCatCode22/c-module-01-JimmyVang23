// JV 8/24/25

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Hi there " << name << ", It's nice to meet you." << endl;

    return 0;
}