#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    string *arr = new string[11]{" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    if (n >= 1 && n <= 9)
        cout << arr[n] << endl;
    else
        cout << arr[10] << endl;
    return 0;
}
