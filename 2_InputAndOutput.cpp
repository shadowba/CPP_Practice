#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int res = 0, num = 0;
    while (cin >> num)
    {
        res += num;
    }
    cout << res << endl;
    return 0;
}
