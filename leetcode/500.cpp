#include <cctype>
#include <string>
#include <vector>

using namespace std;

bool itCan(string s) {
    char ch;
    int thisline = 0, lastline = 0;
    for (int i = 0; i < s.size(); ++i) {
        ch = tolower(s[i]);
        switch (ch) {
            case 'a':
            case 's':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
                thisline = 1;
                break;
            case 'z':
            case 'x':
            case 'c':
            case 'v':
            case 'b':
            case 'n':
            case 'm':
                thisline = 2;
                break;
            case 'q':
            case 'w':
            case 'e':
            case 'r':
            case 't':
            case 'y':
            case 'u':
            case 'i':
            case 'o':
            case 'p':
                thisline = 3;
        }
        if (thisline != lastline && lastline != 0) {
            return false;
        }
        lastline = thisline;
    }
    return true;
}

vector<string> findWords(vector<string> &words) {
    vector<string> re;
    for (int i = 0; i < words.size(); ++i) {
        if (itCan(words[i])) {
            re.push_back(words[i]);
        }
    }
    return re;
}

int main() {

}