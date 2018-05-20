#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int num[] = { 2, 2, 2,
              3, 3, 3,
              4, 4, 4,
              5, 5, 5,
              6, 6, 6,
              7, 0, 7, 7,
              8, 8, 8,
              9, 9, 9
            };

map<int, int> s;
map<int, int>::iterator start;

char buf[128];

int main()
{
    int num_case = 0;
    bool flag = false;
    cin >> num_case;
    for (int i = 0; i < num_case; ++i) {
        scanf("%s", buf);
        int c = 0;
        for (int j = 0; buf[j]; ++j) {
            if(isdigit(buf[j])){
                c = c * 10 + (buf[j] - '0');
            }else if(isalpha(buf[j])){
                c = c * 10 + (num[buf[j] - 'A']);
            }
        }
        s[c]++;
    }

    for (start = s.begin(); start != s.end(); ++start) {
        if(start->second > 1){
            flag = true;
            printf("%03d-%04d %d\n", start->first / 10000, start->first % 10000, start->second);
        }
    }
    if(!flag){
        cout << "No duplicates.";
    }
}