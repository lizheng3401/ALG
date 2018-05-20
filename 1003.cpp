#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float num = 0.0f;
    float list[300];
    list[0] = 1.0 / 2;
    for (int i = 1; i < 300; ++i) {
        list[i] = list[i - 1] + 1.0 / (i+2);
    }
    while(scanf("%f", &num) && num){
        for (int i = 0; i < 300; ++i) {
            if(list[i] > num){
                printf("%d card(s)\n", i+1);
                break;
            }
        }
    }

    return 0;
}