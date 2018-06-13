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
    int end = 300 - 1;
    while(end>=0){
        if(num[end] != 0)
            break;
        end--;
    }
    int point = 0;
    while(point < 300)
    {
        if(num[point] == -1)
            break;
        ++point;
    }
    int key[300] = {0};
    if(point < 3 || num[point-3] < 5 )
    {
        for (int i = end; i > point; --i) {
            cout<<num[i];
        }
        cout<<".";
        if(point == 2)
        {
            cout<<num[1]<<num[0];
        }else if(point ==1)
        {
            cout<<"0"<<num[0];
        }else if(point == 3)
        {
            cout<<num[2]<<num[1];
        }
    }else{
        key[0] = num[point - 2] + 1;
        key[1] += key[0] / 10;
        key[0] = key[0] % 10;
        for (int i = point-1, j = 1; i <= end ; ++i, ++j) {
            key[j] += num[i];
            key[j+1] += key[j] / 10;
            key[j] = key[j] % 10;
        }
        end = 300 - 1;
        while(end >= 0)
        {
            if(key[end] != 0)
            {
                for (int i = end; i >=0 ; --i) {
                    if(key[i] == -1)
                    {
                        cout<<".";
                        continue;
                    }
                    cout<<key[i];
                }
                break;
            }
            --end;
        }
    }

}
int main()
{
    while(1){
        char x[201], y[201], c;
        cin>>x>>y;
        add1(x, y);
        cin>>c;
        if(x[0] == 'a')
        {
            break;
        }
    }

    return 0;
}