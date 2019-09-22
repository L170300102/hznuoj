#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len, T;
    string str;
    cin >> T;
    getline(cin, str);      // Extracts str from input until endline char.
    while (T--) {
        getline(cin, str);
        len = str.length();
        for (int i = len - 1; i >= 0; i--)      // For print final word
            cout << str[i];
        if (T>0) cout << endl << endl;    // Enter one endline if not the last string
        else cout << endl;
    }

    return 0;
}
