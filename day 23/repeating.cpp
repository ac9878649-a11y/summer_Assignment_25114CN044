#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = '\0';

    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                result = str[i];
                break;
            }
        }
        if (result != '\0')
            break;
    }

    if (result != '\0')
        cout << "First repeating character is: " << result;
    else
        cout << "No repeating character found.";

    return 0;
}