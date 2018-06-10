#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int L, m;
    bool flag = false;
    cin>>L;
    int plates[L][L];
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < L; ++j) {
            cin>>plates[i][j];
        }
    }
    while(!flag){
        flag = true;
        ++m;
        int num = 0;
        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < L; ++j) {
                if(plates[i][j] == 1)
                {
                    if(i - 1 >= 0 && plates[i - 1][j] != 2 && plates[i - 1][j] != 1)
                    {
                        plates[i - 1][j] = 3;

                    }
                    if(i + 1 < L && plates[i + 1][j] != 2 && plates[i + 1][j] != 1)
                    {
                        plates[i + 1][j] = 3;
                    }
                    if(j - 1 >= 0 && plates[i][j - 1] != 2 && plates[i][j - 1] != 1)
                    {
                        plates[i][j - 1] = 3;
                    }
                    if(j + 1 >= 0 && plates[i][j + 1] != 2 && plates[i][j + 1] != 1)
                    {
                        plates[i][j + 1] = 3;
                    }
                }
            }
        }
        for (int k = 0; k < L; ++k) {
            for (int i = 0; i < L; ++i) {
                if(plates[k][i] == 3) {
                    plates[k][i] = 1;
                }else  if(plates[k][i] == 0)
                {
                    flag = false;
                }
            }
        }
    }
    cout<<m;
}
