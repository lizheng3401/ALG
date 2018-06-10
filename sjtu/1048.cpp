#include <iostream>
#include <cstdio>

using namespace std;

typedef struct node{
    int left = 0;
    int right = 0;
}Node;

void layer_order_tree(Node nodes[], int root, int length)
{
//    必须判断节点的孩子节点是否存在，再入队
    int front = 0, rear=1;
    int queue[10000];
    queue[rear] = root;
    while(front != rear)
    {
        ++front;
        cout<<queue[front]<<endl;
        if(nodes[queue[front]].left)
        {
            queue[++rear] = nodes[queue[front]].left;
        }
        if(nodes[queue[front]].right)
        {
            queue[++rear] = nodes[queue[front]].right;
        }
    }
}

int main()
{
    int n, x, left, right, root;
    cin>>n;
    Node nodes[n+1];
    int flags[n+1] = {0};

//  ACM无输入结束标志时，可用此判断是否输入结束
    while(cin>>x>>left>>right)
    {
        nodes[x].left = left;
        nodes[x].right = right;
        flags[left] = 1;
        flags[right] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if(!flags[i])
        {
            root = i;
        }
    }
    layer_order_tree(nodes, root, n);
}

