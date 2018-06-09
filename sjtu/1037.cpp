#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


bool cmp(int a,int b) {
    return a > b; //升序排列，如果改为return a>b，则为降序
}
int main()
{
    int N, M, sum = 0, key;
    cin>>N>>M;
    int high[N], low[M];
    for (int i = 0; i < N; ++i) {
        cin>>high[i];
    }
    for (int j = 0; j < M; ++j) {
        cin>>low[j];
    }
    sort(high, high+N, cmp);
    sort(low, low+M, cmp);
    key = 0;
    for (int k = 0; k < N; ++k) {
        if(high[k] == 1)
        {
            break;
        }
        for (int i = key; i < M; ++i) {
            if(low[i] < high[k])
            {
                ++sum;
                key = i+1;
                break;
            }
        }
    }
    cout<<(sum+N);
    return 0;
}

