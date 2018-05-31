#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double e = 0;
    printf("n e\n");
	printf("- -----------\n");
    cout<<0<<" "<<1<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<2<<" "<<2.5<<endl;
    e = 2.5;
    double t = 0.5;
    for(int i = 3; i < 10; i++)
    {
        t = t/i;
        e += t;
        printf("%d %.9lf\n", i, e);
    }

    return 0;
}