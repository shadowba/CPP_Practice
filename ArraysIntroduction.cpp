#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N = 0, i = 0;
    cin >> N;
    int *A = new int[N];
    while (cin >> A[i++])
    {
    }
    i = N - 1;
    while (i >= 0)
    {
        cout << A[i--] << " ";
    }
    cout << endl;
    return 0;
}