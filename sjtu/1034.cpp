#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int N, K, value, minValue = 0, max = 0, max_temp;
    cin>>N>>K;
    long necklace[N];
    for(int i = 0; i < N; ++i)
    {
        scanf("%ld", &necklace[i]);
    }
    if(K == 1 | K == N)
    {
        for (int i = 0; i < N; ++i) {
            if(max < necklace[i])
            {
                max = necklace[i];
            }
        }
        cout<<necklace[N - 1];
        return 0;
    }
    for(int i = 0; i < N; ++i)
    {
        max_temp = 0;
        value = 0;
        for(int j = i, k = 0; k < K; j = (j+1)%N, ++k)
        {
            value += necklace[j];
            if(max_temp < necklace[j])
            {
                max_temp = necklace[j];
            }
        }
        if(minValue > value || minValue == 0)
        {
            minValue = value;
            max = max_temp;
        }
    }
    cout<<max<<endl;
    return 0;
}