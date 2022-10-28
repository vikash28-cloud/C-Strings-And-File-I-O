#include<iostream>
using namespace std;

int pallendrome(char arr[],int n)
{
    int si=0;
    int ei =n-1;
    while(si<=ei)
    {
        if(arr[si]!=arr[ei])
        {
            return 0;
        }
        else
        {
            si++;
            ei--;
        }
    }
    return 1;   
}

char lowerCaseConvert(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else
    {
        char x = ch-'A'+'a';
        return x;

    }
    
}

int main()
{
    char arr[50];
    cin>>arr;
    int i=0;

    while(arr[i]!='\0')
    {
        i++;
    }
    int size=i;

    for (int j = 0; arr[j]!='\0'; j++)
    {
       arr[j] = lowerCaseConvert(arr[j]);

    }
    

    int x = pallendrome(arr,size);

    if(x==1)
    {
        cout<<"pallendrome"<<endl;

    }
    else
    {
        cout<<"not pallendrome"<<endl;
    }
}