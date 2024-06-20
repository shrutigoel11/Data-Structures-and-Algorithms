#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool isValidParenthesis(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        
        // Opening bracket --> push directly
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        // Closing bracket --> pop top and check for matching pair
        else {
            // If stack is not empty, check for matching pair
            if (!st.empty()) {
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                // Stack is empty and we encounter a closing bracket
                return false;
            }
        }
    }

    // If stack is empty, all opening brackets have matching closing brackets
    return st.empty();
}
int main()
{
string str="{{[()]}}";
bool ans=isValidParenthesis(str);
if(ans) cout<<"Valid";
else cout<<"Invalid";

return 0;
}
