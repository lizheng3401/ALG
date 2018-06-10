#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void mult(char a[], char b[])
{
    int num[1000] = {0};
    int A[1000], B[1000];

    memset(num, 0, sizeof(num));
    memset(A, 0, sizeof(A));
    memset(B, 0, sizeof(B));

    int la = strlen(a), lb = strlen(b);
    for (int l = la - 1, j = 0; l >= 0; --l, ++j) A[j] = a[l] - 48;
    for (int l = lb - 1, m = 0; l >= 0; --l, ++m) B[m] = b[l] - 48;

    for (int i = 0; i < la; ++i) {
        for (int j = 0; j < lb; ++j) {
            num[i+j] += A[i]*B[j];
            num[i+j+1] += num[i+j] / 10;
            num[i+j] = num[i+j] % 10;
        }
    }
    int i = 1000 - 1;
    while(num[i] == 0) --i;
    if(i<0){
        cout<<"0";
    }
    else{
        while(i >= 0)
            cout<<num[i--];
    }
    cout<<endl;
}
int main()
{
    char a[1000];
    char b[1000];
    while(cin>>a>>b)
        mult(a, b);
}
