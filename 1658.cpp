#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num_case = 0;
    int a,b,c,d,re;
    cin>>num_case;
    while(num_case != 0)
    {
        num_case--;
        cin>>a>>b>>c>>d;
        if(b-a == d-c)
        {
            re = d*2-c;
        }else{
            re = d*d/c;
        }
        printf("%d %d %d %d %d\n", a,b,c,d,re);
    }

    return 0;
}