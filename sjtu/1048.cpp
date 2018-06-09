#include <iostream>
#include <cstdio>

using namespace std;

typedef struct node{
    int left;
    int right;
}Node;

void layer_order_tree(Node nodes[], int root, int length)
{
    int front = -1, rear=0;
    int queue[length+1];
    queue[rear] = root;
    while(front != rear)
    {
        ++front;
        cout<<queue[front]<<endl;
        queue[++rear] = nodes[queue[front]].left;
        queue[++rear] = nodes[queue[front]].right;
    }
}

int main()
{
    int n, x, left, right, root;
    cin>>n;
    Node nodes[n+1];
    int flags[n+1] = {0};
    while(cin>>x>>left>>right)
    {
        nodes[x].left = left;
        nodes[x].right = right;
        flags[left] = 1;
        flags[right] = 1;
        for (int i = 1; i <= n; ++i) {
            if(!flags[i])
            {
                root = i;
            }
        }
        layer_order_tree(nodes, root, n);
    }

}

