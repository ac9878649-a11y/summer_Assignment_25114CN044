#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    char result = '\0';

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        cout << "First non-repeating character is: " << result;
    else
        cout << "No non-repeating character found.";

    return 0;
}