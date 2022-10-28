#include<iostream>
using namespace std;
char convert(char ch)
{
    char x = ch-'a'+'A';
    return  x;
}
int main()
{
    // char ch='B';
    // char lc = ch-'A'+'a';    // ascii 66(B)-65(A) = 1 ,  1+97(a) = 98(b) ascii value of 'b' is 98
    

   char arr[60];
   cin>>arr;  //  lowercase input

   for(int i=0;arr[i]!='\0';i++)
   {
        arr[i]= convert(arr[i]);   //convert funtion converts each character into uppercase
        cout<<arr[i];
   }

}

// uppercase to lowercase coversion       
// ch-'A'+'a';   ch is a char variable taken uppercase character