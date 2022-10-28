#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "vikash is a good boy";
    int i = 0;
    int count = 0;
    while (i < s1.length())
    {
        if (s1[i] == ' ')
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << count << endl;

    return 0;
}