#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

char func(char a){
    switch(a)
    {
        case 'A':
        case 'B':
        case 'C':
            return '2';
        case 'D':
        case 'E':
        case 'F':
            return '3';
        case 'G':
        case 'H':
        case 'I':
            return '4';
        case 'J':
        case 'K':
        case 'L':
            return '5';
        case 'M':
        case 'N':
        case 'O':
            return '6';
        case 'P':
        case 'R':
        case 'S':
            return '7';
        case 'T':
        case 'U':
        case 'V':
            return '8';
        case 'W':
        case 'X':
        case 'Y':
            return '9';
        default:
            return a;

    }
}

int cmp(const void *a, const void *b)
{
    string sa = *(string *)a;
    string sb = *(string *)b;
    return strcmp(sa.c_str(), sb.c_str()); 
}

int main(){
    int num_case = 0;
    int tag = 0;
    int len = 0;
    char str[20];
    cin >> num_case;
    string list[num_case];
    for(int i = 0; i < num_case; ++i)
    {
        string s = "";
        cin >> str;
        len = strlen(str); 
        for(int j = 0; j < len; j++)
        {
            if( (str[j] >= 'A' && str[j] <= 'Z') | (str[j] >= '0' && str[j] <= '9'))
            {
                s += func(str[j]);
            }
        }  
        list[i] = s;
    }

    sort(list, list+num_case);  

    for (int l = 0; l < num_case; ++l)
    {
        if(list[l] == list[ l+1 ])
        {

        }
    }
    return 0;
}