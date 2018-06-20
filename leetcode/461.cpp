#include <cstdio>
#include <cstring>

using namespace std;

// 两个数的汉明距离,

void tobin(int x, int xx[])
{
    int c = 0;
    while(x != 0)
    {
        xx[c++] = x % 2;
        x = x / 2;
        if(x == 0)
        {
            break;
        }
    }
}
int hammingDistance(int x, int y) {
    int xx[33] = {-1}, yy[33] = {-1};
    memset(xx, -1, sizeof(xx));
    memset(yy, -1, sizeof(yy));
    tobin(x, xx);
    tobin(y, yy);
    int re = 0, i = 0;

    for(int i = 0; xx[i] != -1 || yy[i] != -1; ++i)
    {
        if(xx[i] == -1 && yy[i] != -1)
        {
            xx[i] = 0;
        }else if(xx[i] != -1 && yy[i] == -1)
        {
            yy[i] = 0;
        }
        if(xx[i] != yy[i])
            ++re;
    }
    return re;
}

int main()
{

    cout << hammingDistance(1, 4);
    return 0;

}