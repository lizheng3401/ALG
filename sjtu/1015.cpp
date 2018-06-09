#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void mult(char a[], char b[])
{
    int num[500];
    memset(num, 0, sizeof(num));
    int la = strlen(a), lb = strlen(b);
    int l = la + lb;
    int sum;
    for (int i = lb - 1; i >= 0 ; --i) {
        for (int j = la - 1, k = i+j+1 ; j >= 0 ; --j, --k) {
            sum = (b[i] - '0') * (a[j] - '0') + num[k];
            num[k] = sum%10;
            num[k - 1] += sum/10;
        }
    }

}
int main()
{
    char a[] = {'1','2', '5'};
    char b[] = {'2', '5'};
    mult(a, b);

}
