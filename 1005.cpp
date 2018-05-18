#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;


int main(){
    int points_num = 0;
    float x, y, yearf, pi;
    pi = acos(-1);
    cin >> points_num;
    for (int i = 0; i < points_num; ++i) {
        cin >> x;
        cin >> y;
        yearf = (x*x+y*y)*pi/100;
        cout << "Property "<< i+1 <<": This property will begin eroding in year "<< int(yearf) + 1 <<".\n";
    }
    cout << "END OF OUTPUT." <<endl;
    return 0;
}

