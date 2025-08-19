// JV 08/18/25
// https://www.w3schools.com/cpp/cpp_user_input.asp

#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to my largest of three program \n";
    int num1;
    int num2;
    int num3;

    num1 = 0;
    num2 = 0;
    num3 = 0;

    // get three ints from user

    //get num 1
    cout << " Please enter a value for num1: ";
    cin >> num1;
    cout << "\n You entered " << num1 << " for num1,";

    //get num 2
    cout << " Please enter a value for num2: ";
    cin >> num2;
    cout << "\n You entered " << num2 << " for num2,";

    //get num 3
    cout << " Please enter a value for num3: ";
    cin >> num3;
    cout << "\n You entered " << num3 << " for num3,";

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2;

    }
    else {
        cout << num2 << " is greater than " << num1;
    }

    return 0;
}