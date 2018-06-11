#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    int num_case, x, y, z, pd = 0;
    cin>>num_case;
    int cage[9][9];
    int bits[9];
    while(num_case--)
    {
        memset(cage, 0, 81);
        for(int i = 0; i < 81 - 3; ++i) {
            for (int j = 0; j < 9; ++j) {
                cin>>x;
                cage[i][j] = x;
                bits[x] = 1;
            }
            
        }

    }
}