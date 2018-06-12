#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool judge(int row_bits[9][9], int col_bits[9][9], int block[9][9])
{
    for (int p = 0; p < 9; ++p) {
        for (int q = 0; q < 9; ++q) {
            if(!row_bits[p][q] | !col_bits[p][q] | !block[p][q])
            {
                cout<<"Wrong"<<endl;
                return false;
            }
        }
    }
    cout<<"Right"<<endl;
    return true;
}

int main()
{
    int num_case, temp, pd;
    bool flag = true;
    char a;
    cin>>num_case;
    int cage[9][9];
    int row_bits[9][9] = {0}, col_bits[9][9] = {0}, block[9][9] = {0};

    while(num_case--)
    {
        memset(cage, 0, 81);
        memset(row_bits,0,sizeof(row_bits));
        memset(col_bits,0,sizeof(col_bits));
        memset(block,0,sizeof(block));
        for(int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cin>>cage[i][j];
            }
        }
        for (int m = 0; m < 9; ++m) {
            for (int n = 0; n < 9; ++n) {
                temp = cage[m][n];
                row_bits[m][temp-1] = 1;
                col_bits[n][temp-1] = 1;
                pd = (m/3)*3 + n/3;
                block[pd][temp-1] = 1;
            }
        }
        judge(row_bits, col_bits, block);
        a = getchar();
    }

    return 0;
}