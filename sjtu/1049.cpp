#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int judge()
{
    int N, M, pd,k;
    int train_order[1001];
    int stack[1001];
    cin>>N>>M;
    memset(train_order, 0, 1001);
    memset(stack, 0, 1001);

    k = 0;
    pd = 0;

    for (int i = 0; i < N; ++i) {
        cin>>train_order[i];
    }

    for (int j = 0; j < N; ++j) {
        if( j == train_order[k]){
            ++k;
            continue;
        }
        if( pd > 0 ){
            if(stack[pd - 1] == train_order[k])
            {
                --pd;
                --j;
                ++k;
                continue;
            }
        }
        if(pd < M)
        {
            stack[pd++] = j;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    while(pd > 0)
    {
        if(stack[--pd] != train_order[k++])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    int num_case;

    cin>>num_case;
    while(num_case--)
    {
        judge();
    }
}
