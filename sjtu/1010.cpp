
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int month = 0;
    int budget[12];
    int balance = 0;
    int money_store = 0;
    while(month < 12)
    {
        cin>>budget[month++];
    }
    for (int i = 0; i < 12; ++i) {
        balance = 300+balance - budget[i];
        if(balance < 0)
        {
           cout<<"-"<<i+1;
           return 0;
        }
        int temp = balance / 100;
        if(temp == 0)
        {
            continue;
        }else{
            balance = balance - temp*100;
            money_store += temp*100;
        }
    }
    money_store = money_store+money_store*0.2+balance;
    cout<<money_store;
    return 0;
}
