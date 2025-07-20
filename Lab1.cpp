#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

// List of C++ reserved keywords
vector<string> reserved_keywords = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long",
    "register", "return", "short", "signed", "sizeof", "static", "struct", "switch",
    "typedef", "union", "unsigned", "void", "volatile", "while", "class", "public",
    "private", "protected", "template", "virtual", "using", "namespace", "string"
};

// Function to check if the variable name is valid
bool isValidVariableName(const string& varName) {
    if (varName.empty()) return false;

    // Rule 2: Cannot start with a digit
    if (isdigit(varName[0])) return false;

    // Rule 3: Cannot be a reserved keyword
    if (find(reserved_keywords.begin(), reserved_keywords.end(), varName) != reserved_keywords.end())
        return false;

    // Rule 1 & 4: Can only contain letters, digits, and underscores
    for (char ch : varName) {
        if (!isalnum(ch) && ch != '_') return false;
    }

    return true;
}

int main() {
    string varName;
    cout << "Enter a variable name: ";
    cin >> varName;

    if (isValidVariableName(varName)) {
        cout << "Valid variable name\n";
    } else {
        cout << "Invalid variable name\n";
    }

    return 0;
}

