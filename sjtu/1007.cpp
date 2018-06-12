#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>

using namespace std;

void add(char x[], char y[]);
int main()
{
    string x,y, x1, x2, y1, y2;
    cin>>x>>y;

    return 0;
//    cout<<setiosflags(ios::fixed)<<setprecision(2)<<x+y<<" "<<z;
}


void add(char x[], char y[])
{
    int num[400] = {0};
    int X[400] = {0}, Y[400] = {0};
    int lx = strlen(x), ly = strlen(y), length = max(lx, ly);

    for (int i = lx - 1, j = 0; i >= 0; --i, ++j) {
        if(x[i] != '.'){
            X[j] = x[i] - 48;
        }else{
            X[j] = -1;
        }
    }

    for (int i = ly - 1, j = 0; i >= 0; --i, ++j) {
        if(y[i] != '.'){
            Y[j] = y[i] - 48;
        }else{
            Y[j] = -1;
        }
    }

    for (int k = 0; k < length; ++k) {
        if(X[k] == -1 | Y[k] == -1)
        {
            num[k] = -1;
        }
        num[k] = X[k]+Y[k];
    }
}