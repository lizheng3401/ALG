#include <iostream>
#include <iomanip>

using namespace std;

int pd = 1;

int main()
{
    int n, x = 0, y = 0;
    cin>>n;
    int mountain[n][n];
    for(int i= 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mountain[i][j] = 0;
        }
    }
    char point[4] = {'r', 'd', 'l', 'u'};
    for (int i = 0; i < 4; i++)
    {
        switch(point[i])
        {
            case 'r':
                while(mountain[x][y] == 0 && y < n)
                {
                    mountain[x][y++] = pd++;
                    if(pd > n*n )
                    {
                        goto p;
                    }
                }
                --y;
                ++x;
                break;
            case 'd':
                while(mountain[x][y] == 0 && x < n)
                {
                    mountain[x++][y] = pd++;
                    if(pd > n*n )
                    {
                        goto p;
                    }
                }
                --x;
                --y;
                break;
            case 'l':
                while(mountain[x][y] == 0 && y >= 0)
                {
                    mountain[x][y--] = pd++;
                    if(pd > n*n )
                    {
                        goto p;
                    }
                }
                --x;
                ++y;
                break;
            case 'u':
                while(mountain[x][y] == 0 && x >= 0)
                {
                    mountain[x--][y] = pd++;
                    if(pd > n*n )
                    {
                        goto p;
                    }
                }
                ++x;
                ++y;
        }
        if(i == 3)
            i = -1;
    }
    p:
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<setw(6)<<mountain[i][j];
        }
        cout<<endl;
    }
    return 0;
}