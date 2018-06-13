#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void add(char x[], char y[])
{
    int num[300] = {0};
    int X[200], Y[200] = {0};
    int lx = strlen(x), ly = strlen(y), length = max(lx, ly);
    for (int i = lx - 1, j = 0; i >= 0 ; --i, ++j) {
        X[j] = x[i] - '0';
    }
    for (int i = ly - 1, j = 0; i >= 0 ; --i, ++j) {
        Y[j] = y[i] - '0';
    }
    for (int i = 0; i < length; ++i) {
        num[i] += X[i] + Y[i];
        num[i+1] += num[i] / 10;
        num[i] = num[i] % 10;
    }
    int i = 300 -1;
    while(i >= 0)
    {
        if(num[i] !=0)
            break;
        i--;
    }
    if( i == -1)
        cout<<"0";
    else{
        for (int k = i; k >=0 ; --k) {
            cout<<num[k];
        }
    }

}
int main()
{
    char x[200], y[200];
    cin>>x>>y;
//    add(x, y);
    return 0;
}