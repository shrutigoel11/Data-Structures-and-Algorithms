#include <iostream>
#include <string>
using namespace std;

void ReplaceSpaces(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s[i] = '@';
            s.insert(i + 1, "40");
            i += 2; // Skip the characters '4' and '0' added
        }
    }
}

int main() {
    string s;
    cout << "Enter your string:";
    getline(cin, s); // Read entire line including whitespaces
    ReplaceSpaces(s);
    cout << "String is: " << s;

    return 0;
}
