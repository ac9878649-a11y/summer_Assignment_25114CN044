#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    cin >> str1;
    
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are Not Anagrams.";
        return 0;
    }

    int count1, count2;
    bool anagram = true;

    for (int i = 0; i < str1.length(); i++) {
        count1 = count2 = 0;

        for (int j = 0; j < str1.length(); j++) {
            if (str1[i] == str1[j])
                count1++;

            if (str1[i] == str2[j])
                count2++;
        }

        if (count1 != count2) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are Anagrams.";
    else
        cout << "Strings are Not Anagrams.";

    return 0;
}