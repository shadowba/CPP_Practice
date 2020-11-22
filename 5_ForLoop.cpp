#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a, b;
    cin >> a >> b;
    string *arr = new string[11]{" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
            cout << arr[i] << endl;
        else if (i % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}