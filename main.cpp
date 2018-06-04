#include <iostream>

using namespace std;

int main()
{
    int a, b, c, temp, sum = 0, h;
    cin>>a>>b>>c;
    h = a+b;
    while(c)
    {
        c--;
        cin>>temp;
        if(h >= temp)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
