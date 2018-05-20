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
    int i = 2;
    while(i > 0){
        cout << i <<endl;
        i--;
    }
}