#include<istream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "abcd";
    string s2 = "eabcd";
    // now we have to find the extra character from s2 string 

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n = s1.length();

    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<s2[i];
        }
    }
    cout<<s2[n];



}