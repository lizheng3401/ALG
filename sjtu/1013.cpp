#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct thing{
    int c;
    int w;
} T;

int main()
{
    int V, N, ans = 0;
    cin>>V>>N;
    int dp[100000] = {0};
    T t[N+1];

    for (int i = 1; i < N+1; ++i) {
        cin >> t[i].c >> t[i].w;
    }

    for (int i = 1; i <= V; ++i) {
        for (int j = 1; j < N; ++j) {
            for (int k = 1; k <= i/t[j].c ; ++k) {
                dp[i] = max(dp[i], dp[i - k*t[j].c] + k*t[j].w);
                if(dp[i] > ans)
                {
                    ans = dp[i];
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}