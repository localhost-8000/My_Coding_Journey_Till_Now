/*....Anagram of a string is the string with rearranged words....*/
//....abc is anagram of acb or bca but not of abcd...

#include<iostream>
using namespace std;

//...function to check anagram...
bool Is_Anagram(string &str1, string &str2)
{
    int count[256] = { 0 };               //..as there can be maximum of 256 character..
    int i;
    for(i = 0; i < str1.length(); i++)    //..if character is present..increment count array..
    {
        count[str1[i]]++;
    }
    for(i = 0; i < str2.length(); i++)    //..if character is present .. decrement count array..
    {
        count[str2[i]]--;
    }
    for(i = 0; i < 256; i++)              //..if string is anagram then count array will have only zeroes..
    {
        if(count[i] != 0)
            return false;
    }
    return true;
}

//.....Driver code......
int main()
{
    string str1 = "stressed";
    string str2 = "desserts";

    if(Is_Anagram(str1,str2))
        cout<<str1<<" is anagram of "<<str2;
    else
        cout<<str1<<" is not anagram of "<<str2;

    return 0;
}
