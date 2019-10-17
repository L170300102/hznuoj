/**
String input and output processing.
The first line is a positive integer N with a maximum of 100.
This is followed by a multi-line string (the number of rows is greater than N),
each string may contain spaces, and the number of characters does not exceed 1000.
First, the first N lines of characters (possibly containing spaces) in the input are output as they are,
and the remaining strings (without spaces) are output by line or carriage return in sequence.
A blank line is output between each line of output.
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();      // Empty buffer
    char name[1000];
    while(n--)  {
        gets(name);     // The criterion for detecting string is a newline(\n). gets, puts are more efficient than cin, cout
        puts(name);     // Go to the address of the string entered as a parameter and print it to the end of the string, then insert a newline.
        cout << endl;
    }
    while(scanf("%s", name) != EOF) {
        puts(name);
        cout << endl;
    }
    return 0;
}
