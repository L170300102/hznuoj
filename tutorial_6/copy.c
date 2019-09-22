#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    bool hasPrinted;
    bool isFirstCase = true;
    int n, t;       // t = 0
    long long x, a;

    while (cin >> n >> x) {
        hasPrinted = false;
        if (isFirstCase) cout << endl;      // isFirstCase = false
        // else cout << endl;
        cout << "Case " << ++t << endl;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a != x) cout << " ";    // if(a != x) {
            cout << a;      // if (hasPrinted) cout << " ";
            hasPrinted = true;  // cout << a;
            // hasPrinted = true; }
        }
        if (hasPrinted) cout << a;  // cout << endl;
        else cout << "Empty!" << endl;
    }
    return 0;
}
