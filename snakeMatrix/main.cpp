/**
A snake-shaped matrix is a matrix-on-triangle in which natural numbers starting from 1 are arranged in order.
*/
#include <iostream>

using namespace std;

int main()
{
    int N, a[100][100];
    scanf("%d", &N);
    a[0][0] = 1;
    printf("%d", a[0][0]);
    for(int i = 0; i < N - 1; i++)
    {
        a[i + 1][0] = a[i][0] + i + 1;
        for(int j = 0; j < N - i - 1; j++)
        {
            a[i][j + 1] = a[i][j] + i + j + 2;
            printf(" %d", a[i][j + 1]);
        }
        printf("\n%d", a[i + 1][0]);
    }
    //printf("\n");
    return 0;
}
