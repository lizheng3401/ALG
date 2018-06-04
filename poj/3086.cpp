#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int lines = 0, n, result = 0;
    cin >> lines;
    for (int i = 0; i < lines; ++i) {
        cin >> n;
        for (int j = 1; j <= n ; ++j) {
            result += (j+1)*(j+2)*j / 2;
        }
        cout << i+1 <<" " << n << " " << result << endl;
        result = 0;
    }
}
