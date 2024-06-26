#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void sortInsert(stack<int> &s, int num) {
    if (s.empty() || num >= s.top()) {
        s.push(num);
    } else {
        int topelement = s.top();
        s.pop();
        sortInsert(s, num);
        s.push(topelement);
    }
}

void sortStack(stack<int> &stack) {
    if (stack.empty()) {
        return;
    }
    int num = stack.top();
    stack.pop();
    sortStack(stack);
    sortInsert(stack, num);
}