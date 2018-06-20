#include <cstdio>
#include <string>
#include <vector>
#include <set>

using namespace std;
class Solution {
public:
    string getMos(string str)
    {
        string STR[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
            "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
            "...-",".--","-..-","-.--","--.."};
        string re = "";
        for(int i = 0; i < str.size(); ++i)
        {
            re += STR[str[i] - 'a'];
        }
        return re;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> result;
        for(int i = 0; i < words.size(); ++i)
        {
            result.insert(getMos(words[i]));
        }
        return result.size();
    }
};

int main()
{

}