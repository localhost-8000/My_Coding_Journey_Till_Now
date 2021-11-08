/* if permutation of pattern string is present in text string or not...*/
#include <iostream>
using namespace std;

bool Anagram_Search(string str1, string str2)
{
    int arr[256] = {0};
    int i, j, count = 0;
    for (i = 0; i < str2.length(); i++)
        arr[(int)str2[i]]++;
    for (i = 0; i < str1.length() - 2; i++)
    {
        for (j = i; j < (i + str2.length()); j++)
        {
            if (arr[(int)str1[j]] != 0)
                count++;
        }
        if (count == 3)
            return true;
        else
            count = 0;
    }
    return false;
}
int main()
{
    string t_str, p_str;
    cout << "Enter the text string.....:-";
    cin >> t_str;
    cout << "Enter the pattern string....:-";
    cin >> p_str;
    if (Anagram_Search(t_str, p_str))
        cout << "pattern string found in text string...";
    else
        cout << "pattern string not found in text string...";
}
