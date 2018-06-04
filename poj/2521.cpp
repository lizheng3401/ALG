#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int m, n, p, c;
    do{
        cin >> n >> m >> p >> c;
        if(!(m+n+p+c)){
            break;
        }
        cout << n - m + p << endl;
    }while(1);

    return 0;
}