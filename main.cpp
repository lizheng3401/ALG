#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int cmp(const void *a,const void *b)
{
    string s1 = *(string*)a;
    string s2 = *(string*)b;
    if(s1 < s2){
        return -1;
    }else if(s1 > s2){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int num_case = 3;
    string list[3];
    list[0] = "1234";
    list[1] = "2314";
    list[2] = "1123";
    qsort(list, num_case, sizeof(list[0]), cmp);
    for (int i = 0; i < 3; ++i) {
        cout << list[i];
    }
}