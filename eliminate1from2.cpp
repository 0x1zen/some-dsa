#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string eliminateChars(string str1, const string& str2) {
    unordered_set<char> charsToEliminate;

    // Populate the set with characters from the second string
    for (char ch : str2) {
        charsToEliminate.insert(ch);
    }

    string result = "";

    // Iterate through the first string and add characters not in the set to the result
    for (char ch : str1) {
        if (charsToEliminate.find(ch) == charsToEliminate.end()) {
            result += ch;
        }
    }

    return result;
}

int main() {
    string str1 = "abcdefg";
    string str2 = "bcdf";

    string result = eliminateChars(str1, str2);

    cout << "Modified String: " << result << endl;

    return 0;
}
