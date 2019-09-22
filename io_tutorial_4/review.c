#include </iostream>
#include <string>

int review() {
    int len, T;
    string str;
    cin >> T;
    getline(cin, str);
    while(T--) {
        getline(cin, str);
        len = str.length();
        for (int i = len - 1; i >= 0; i--)
            cout << str[i];
        if (T) cout << endl << endl;
        else cout << endl;
        return 0;
    }
}
