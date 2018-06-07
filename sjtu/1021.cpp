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
        cout<<point[i]<<endl;
        switch(point[i])
        {
            case 'u':
                while(x >= 0)
                {
                    if(mountain[x - 1][y] == 0)
                    {   
                        mountain[x--][y] = pd++;
                        if(pd - 1 == n*n)
                        {
                            goto p;
                        }
                    }else{
                        x--;
                        break;
                    }
                }
                break;
            case 'd':
                while(x < 4)
                {
                    if(mountain[x+1][y] == 0)
                    {   
                        mountain[x++][y] = pd++;
                        if(pd - 1 == n*n)
                        {
                            goto p;
                        }
                    }else{
                        x++;
                        break;
                    }
                }
                
                break;
            case 'l':
                while(y >= 0)
                {
                    if(mountain[x][y-1] == 0)
                    {   
                        mountain[x][y--] = pd++;
                        if(pd - 1 == n*n)
                        {
                            goto p;
                        }
                    }else{
                        y--;
                        break;
                    }
                }
                
                break;
            case 'r':
                while(y < 4)
                {
                    if(mountain[x][y+1] == 0)
                    {   
                        mountain[x][y++] = pd++;
                        if(pd - 1 == n*n)
                        {
                            goto p;
                        }
                    }else{
                        y++;
                        break;
                    }
                }
                cout<<x<<","<<y<<endl;
                break;
        }
        if(pd == n*n)
            break;
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