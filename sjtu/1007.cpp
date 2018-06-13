#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void add(char x[], char y[])
{
    int num[300] = {0};
    char XL[101],XR[101],YL[100], YR[100];
    int lx = strlen(x), ly = strlen(y), length = max(lx, ly);
    int flag = 0;
    while(flag < lx)
    {
        if(x[flag] == '.')
            break;
        ++flag;
    }
    for (int i = lx - 1, j = 0; i >= 0 ; --i, ++j) {
        if(flag < i)
        {
            XR[j] = x[i];
        }else if( flag > i){
            XL[j] = x[i];
        }else{
            j = 0;
        }
    }

    cout<<"OK";

}
int main()
{
    char x[200], y[200];
    cin>>x>>y;
    add(x, y);
    return 0;
}