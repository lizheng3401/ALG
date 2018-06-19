#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N, K, pd = 0, max = 0, min = -1;
    cin >> N >> K;
    int necklace[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &necklace[i]);
    }

    for(int i = pd; i < N; ++i)
    {
        int temp_sum = 0, temp_max = 0;
        for(int j = 0; j < K; ++j)
        {
            temp_sum += necklace[(i+j) % N ];
            if(temp_max < necklace[ (i+j) % N])
            {
                temp_max = necklace[ (i+j) % N];
            }
        }
        if(min > temp_sum || min == -1)
        {
            min = temp_sum;
            max = temp_max;
        }
        if( min == temp_sum)
        {
            if(max < temp_max)
            {
                max = temp_max;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}