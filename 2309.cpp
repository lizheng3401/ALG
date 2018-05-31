#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num_case = 0;
    int x = 0;
    cin>>num_case;
    while(num_case != 0)
    {
        num_case--;
        cin>>x;
        printf("%d %d\n",x-( (x & (-x)) - 1), x+( (x & (-x)) - 1));
    }
    return 0;
}