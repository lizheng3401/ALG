#include <iostream>
#include <cstdio>

using namespace std;

int lengthOfLongestSubstring(string s) {
    bool  bits[300] = {false};
    int length = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(!bits[s[i]])
            ++length;
        else
            return length;
    }
    return length;
}

int main()
{
    cout<<lengthOfLongestSubstring("abcabcabc");
    return 0;
}
