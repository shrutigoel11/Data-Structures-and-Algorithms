#include <iostream>
#include<cstring>
#include <cctype> // For isalnum function
using namespace std;

// Function to check if a character is alphanumeric
bool isAlphanumeric(char c) {
    return isalnum(c);
}

// Function to check if a character is uppercase and convert it to lowercase
char toLower(char c) {
    if (isupper(c))
        return tolower(c);
    return c;
}

// Function to check if a character array is a palindrome
bool IsPalindrome(const char str[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        while (i < j && !isAlphanumeric(str[i])) // Skip special characters from start
            i++;
        while (i < j && !isAlphanumeric(str[j])) // Skip special characters from end
            j--;
        if (toLower(str[i]) != toLower(str[j])) // Compare characters (ignoring case)
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    if (IsPalindrome(str, strlen(str)))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
