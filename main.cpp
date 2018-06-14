#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

typedef struct node{
    int left = 0;
    int right = 0;
}Node;



int main()
{
    int num;
    int x, l, r;
    cin>>num;
    Node nodes[num+1];

    for (int i = 0; i < num; ++i) {
        cin>>x>>l>>r;
        nodes[x].left = l;
        nodes[x].right = r;
    }

    return 0;
}

