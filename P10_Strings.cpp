#include <iostream>
#include <string>
using namespace std;
string swap(string str1, string str2)
{
    char tmp = str1[0];
    str1[0] = str2[0];
    str2[0] = tmp;
    return str1 + " " + str2;
}
int main()
{
    // Complete the program
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.length() << " " << str2.size() << endl;
    cout << str1 + str2 + "\n";
    cout << swap(str1, str2) + "\n";
    return 0;
}