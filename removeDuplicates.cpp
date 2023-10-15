#include <iostream>
#include <string>
#include <stack>

using namespace std;

string removeDuplicatesWithStack(string input) {
    stack<char> charStack;
    string result = "";

    for (char c : input) {
        if (charStack.empty() || charStack.top() != c) {
            charStack.push(c);
        }
    }

    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    string input = "raaaaaaaajjjj";
    string result = removeDuplicatesWithStack(input);

    cout << "Original string: " << input << endl;
    cout << "String with duplicates removed using a stack: " << result << endl;

    return 0;
}
