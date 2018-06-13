#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void add1(char x[], char y[])
{
    int num[300] = {0};
    int X[201] = {0}, Y[201] = {0};
    int lx = strlen(x), ly = strlen(y), length = max(lx, ly);
    int flagx = 0, flagy = 0, xx, yy;
    while(flagx < lx)
    {
        if(x[flagx] == '.')
            break;
        ++flagx;
    }
    while(flagy < ly)
    {
        if(y[flagy] == '.')
            break;
        ++flagy;
    }
    int flagMax = max(flagx, flagy);
    for (int i = flagMax - flagx, j = 0; j < lx; ++i, ++j) {
        if(x[j] == '.')
        {
            X[i] = -1;
        }else{
            X[i] = x[j] - '0';
        }
    }
    for (int i = flagMax - flagy, j = 0; j < ly; ++i, ++j) {
        if(y[j] == '.')
        {
            Y[i] = -1;
        }else{
            Y[i] = y[j] - '0';
        }
    }
    int total_length = flagMax+1+max(lx - (flagx+1), ly - (flagy+1));
    for(int i = total_length - 1, j = 0; i >= 0; --i, ++j)
    {
        if(X[i] == -1)
        {
            num[j] = -1;
            continue;
        }
        if(X[i - 1] == -1)
        {
            num[j] += X[i] + Y[i];
            num[j + 2] += num[j] / 10;
            num[j] = num[j] % 10;
            continue;
        }
        num[j] += X[i]+Y[i];
        num[j+1] += num[j] / 10;
        num[j] = num[j] % 10;
    }
    int i = 300 - 1;
    while(i>=0){
        if(num[i] != 0)
            break;
        i--;
    }
    char key[300] = {'0'} ;
    int per = 0.1;
    for(int k = i, j = 0; k >= 0; --k, ++j) {
        if (num[k] == -1) {
            key[j] = '.';
            continue;
        }
        key[j] = '0'+ num[k];
    }
    for(int ke = 0; ke < i+1; ke++)
    {
        cout<<key[ke];
    }
}
int main()
{
    char x[201], y[201];
    cin>>x>>y;
    add1(x, y);
    return 0;
}