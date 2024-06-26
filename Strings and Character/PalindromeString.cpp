#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isAlphanumeric(char c) {
    return isalnum(c);
}

char Lowercase(char ch){
      if(ch>'a' && ch<='z'){
        return ch;
      }
      else{
        ch=ch-'A'+'a';
      }
      return ch;
}

int LengthOfString(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void ReverseString(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

bool IsPalindrome(char str[], int n) {
    int s=0;
    int e=n-1;
    while(s<e){
        if( Lowercase(str[s])!= Lowercase(str[e]))
        return false;
        else{
            s++;
            e--;
        }
    }

    return true;
}

int main() {
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    
    char original[30];
    int i;
    for (i = 0; name[i] != '\0'; i++) {
        original[i] = name[i];
    }
    original[i] = '\0';

    int size = LengthOfString(name);
    ReverseString(name, size);
    cout << "After Reversing: " << name << endl;
    cout<<"String is not Case Sensitive";

    if (IsPalindrome(original, size)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}
