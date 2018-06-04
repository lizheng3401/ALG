#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int num_case, x, y, r;
    cin>>num_case;
    
    for(int i = 0; i < num_case; ++i)
    {
        cin>>x>>y;
        if(x == y){
            r = (x % 2) == 0 ? (x % 2) * 4:(x / 2) * 4 + 1;
        }else if(y == x - 2){
            r = (y % 2) == 0 ? (y % 2) * 4  :(x / 2) * 4 - 1;
        }else{
            cout<<"No number"<<endl;
        }
    }
    
}