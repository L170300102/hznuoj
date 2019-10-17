#include <iostream>
#include <cstdio>

using namespace std;
int m,n;
int cnt;
char a[100][100];

int dfs(int x, int y)
{
    int mine_count = 0;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            int xc = x + i;
            int yc = y + j;
            if(xc < m && xc >= 0 && yc < n && yc >= 0){
                if(a[xc][yc]=='*') mine_count++;
            }
        }
    }
    return mine_count;
}

int main()
{
    while(cin >> m >> n){
        getchar();
        if(m == 0 && n == 0) break;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cout << "Field #" << ++cnt << ":" << endl;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == '*') cout << "*";
                else cout << dfs(i, j);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
