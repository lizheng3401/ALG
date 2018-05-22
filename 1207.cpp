#include<iostream>
#include<cstdio>

using namespace std;

int interval(int i){
    int num = 1;
    while(i != 1){
        if(i % 2 != 0){
            i = 3*i+1;
        }else{
            i = i / 2;
        }
        ++num;
    }
    return num;
}

int main(){
    int i, j,max, temp;
    while(cin>>i>>j){
        int a = i < j?i:j;
        int b = i > j?i:j;
        max = 0;
        for(int k = a; k <= b; k++){
            temp = interval(k);
            if (max < temp){
                max = temp;
            }
        }
        printf("%d %d %d\n",i, j, max);
    }
    return 0;
}