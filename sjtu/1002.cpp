#include <iostream>
#include <cstdio>

using namespace std;

int* getOffSet(int L, int l, int w)
{
    int *arr, pd = 0;
    arr = (int *)malloc(sizeof(int)*l*w);
    for (int j = 0; j < w; ++j) {
        for (int k = 0; k < l; ++k) {
            arr[pd++] = k+j*(L+1);
            if(pd == l*w)
            {
                return arr;
            }
        }
    }
}

int getItem(int temp[], int fields[], int i, int length)
{
    int sum = 0;
    for (int j = 0; j < length; ++j) {
        sum += fields[temp[j]+i];
    }
    return sum;
}
int main()
{
    int L, W, l,w, length, *temp, sum, max;
    cin>>L>>W;
    length = L * W;
    int fields[length];
    for(int i = 0; i < length; i++)
    {
        cin>>fields[i];
    }
    cin >> l >>w;
    temp = getOffSet(L, l, w);
    int a = l*w;
    for (int i = 0; i < length - ((l-1)*W+w-1); ++i) {
        sum = getItem(temp, fields, i, a);
        if(sum > max){
            max = sum;
        }
    }
    cout<<max;
    return 0;
}

