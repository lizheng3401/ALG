#include <iostream>
#include <cstdio>

using namespace std;

void swap(int a, int b)
{

}

void quick_sort(int *seq, int left,int right)
{
    if(left < right)
    {
        int i = left, j = right, k = seq[left];
        while (i < j) {
//            判断条件一定要是大于等于或者小于等于，可大大减少交换的次数，因为相同的不需要交换
            while (seq[j] >= k && j > i)
                --j;
            if(i < j)
            {
                seq[i] = seq[j];
            }
            while (seq[i] <= k && i < j)
                ++i;
            if ( i < j)
            {
                seq[j] = seq[i];
            }
        }
        seq[i] = k;
        quick_sort(seq, left, i - 1);
        quick_sort(seq, i+1,  right);
    }
}


int main()
{
    int n;
    cin>>n;
    int data[n];
    for (int i = 0; i < n; ++i) {
        cin>>data[i];
    }

    quick_sort(data, 0, n-1);

    for (int j = 0; j < n - 1; ++j) {
        cout<<data[j]<<" ";
    }
    cout<<data[n - 1];
    return 0;
}