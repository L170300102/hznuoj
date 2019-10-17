/**
The background will randomly generate an integer from 1 to 10.
Your program outputs an integer. If it is paired with this number, it is AC, otherwise WA.
Note that the number generated each time is different, so it doesn't make sense to try one by one.
Test your character!
*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 1; i++){
        cout << rand() % 10 + 1 << endl;
    }
    return 0;
}
