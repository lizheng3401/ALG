#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n-- > 0)
    {
        int a, b;
        cin>>a>>b;
        int matrix[a][a];
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                cin>>matrix[i][j];
            }
        }
        int swap;
        switch(b)
        {
            case 0: // 水平翻转
                for(int k = 0; k < a; ++k)
                {
                    for (int i = 0, j = a - 1; i < j; ++i, --j) {
                        swap = matrix[k][i];
                        matrix[k][i] = matrix[k][j];
                        matrix[k][j] = swap;
                    }
                }
                break;
            case 1: // 上下反转
                for(int k = 0; k < a; ++k)
                {
                    for (int i = 0, j = a - 1; i < j; ++i, --j) {
                        swap = matrix[i][k];
                        matrix[i][k] = matrix[j][k];
                        matrix[j][k] = swap;
                    }
                }
                break;
            case 2: // 对角线翻转
                for (int i = 0; i < a; ++i) {
                    for (int j = 0; j < i; ++j) {
                        swap = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = swap;
                    }
                }
                break;
        }
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

