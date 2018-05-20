#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int p = 0, e = 0, i = 0, d = 0;
    int m = 1, k = 1, temp;
    while( p >= 0){
        scanf("%d %d %d %d", &p, &e, &i, &d);
        while(k){
            p = p + 23;
            e = e + 28;
            i = i + 33;

            if( (p == e && e == i) && p >= d){
                printf("Case %d: the next triple peak occurs in %d days.", m++, (p-d));
                break;
            }
            if(k % 1000 == 0){
                printf("%d %d %d\n", p, e, i);
                scanf("%d", &temp);
            }
            k++;
        }
    }
}
