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

int cmp(const void *a, const void *b);

int main(){
    int num_case = 0;
    int tag = 0;
    size_t  len = 0;
    char str[20];
    cin >> num_case;
    char list[num_case][7];
    for(int i = 0; i < num_case; ++i)
    {
        cin >> str;
        len = strlen(str); 
        for(int j = 0, k = 0; j < len; j++)
        {
            if( (str[j] >= 'A' && str[j] <= 'Z') | (str[j] >= '0' && str[j] <= '9'))
            {
                list[i][k++]= func(str[j]);
            }
        }
    }

//    sort(list, list+num_case);
//    for (int m = 0; m < num_case; ++m) {
//        for (int i = 0; i < 7; ++i) {
//            cout << list[m][i];
//        }
//        cout << endl;
//    }
    qsort(list, num_case, sizeof(list[0]), cmp);
    int temp = 0;
    for (int l = 0; l < num_case; ++l)
    {
        temp++;
        if((list[l] != list[ l+1 ]))
        {
            if(temp > 1)
            {
                tag = 1;
                for (int i = 0; i < 7; ++i) {
                    cout << list[l][i];
                    if (i == 2) {
                        cout << "-";
                    }
                }
                cout << " " << temp << endl;
            }
            temp = 0;
        }
    }
    if(tag == 0){
        cout << "No duplicates." ;
    }
    return 0;
}

int cmp(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}