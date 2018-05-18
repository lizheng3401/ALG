#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int nums[100][100];
    int temp = 0;
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            cin >> temp;
            if(temp == EOF){
                break;
            }
        }
    }
}

