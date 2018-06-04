#include <iostream>

using namespace std;

int main(){
    float money = 0.0;
    float temp = 0.0;
    for (int i = 0; i < 12; ++i) {
        cin >> temp;
        money += temp;
    }
    cout << "$" << money / 12.0;
    return 0;
}

