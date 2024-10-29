#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    int count = 0;
    for (size_t i = 1; i < s.length() - 1; i++) {
        if (s[i - 1] == 'n' && s[i + 1] == 'o') {
            count++;
        }
    }
    return count;
}

string Change(string s) {
    string result;
    for (size_t i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == 'n' && s[i + 2] == 'o') {
            result += "**";
            i += 3;  // Пропускаємо "n", будь-який символ, і "o"
        }
        else {
            result += s[i];
            i++;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'n o'" << endl;

    string modifiedStr = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
