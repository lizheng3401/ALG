#include <string>
#include <algorithm>
#include <iostream>

string reverseWords(string s) {
    string S, temp;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == ' ' || i == s.size() - 1)
        {
            if(i != s.size() - 1)
            {
                reverse(temp.begin(), temp.end());
                S += temp+" ";
            }
            else
            {
                temp = temp+s[i];
                reverse(temp.begin(), temp.end());
                S += temp;
            }
            temp = "";
            continue;
        }
        temp += s[i];
    }
    return S;
}

int main()
{
    cout << reverseWords("Let's take LeetCode contest");
    return 0;
}