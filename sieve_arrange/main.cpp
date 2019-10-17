// A person wants to ask some students to do a questionnaire survey in the school.
// For the objectivity of the experiment, he first generated N random integers between 1 and 1000 (N<=100),
// for the repeated numbers. Only one is kept, and the rest of the same number is removed.
// The different numbers correspond to the student numbers of different students.
// Then sort the numbers from small to large and go to the class to do the survey in the order in
// which they are arranged. Please help A person to complete the work of “de-weighting” and “sorting”
#include <iostream>
// #include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::unique;
int main()
{
    vector<int> vec;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
    for (auto it = vec.begin(); it != vec.end();it++) cout << *it << endl;
    system("pause");
    return 0;
}

