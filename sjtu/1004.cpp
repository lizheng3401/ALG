#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int M,T,U,F,D, ff = 0, uu = 0, dd = 0, time = 0, lastTime = 0;
    char flag;
    cin>>M>>T>>U>>F>>D;
    for (int i = 0; i < T; ++i) {
        cin>>flag;
        switch(flag){
            case 'u':
                ++uu;
                break;
            case 'd':
                ++dd;
                break;
            case 'f':
                ++ff;
                break;
        }
        time = 2*ff*F+uu*U+dd*D+uu*D+dd*U;
        if(time > M){
            cout<<i;
            return 0;
        }
    }
    cout<<T;
}

