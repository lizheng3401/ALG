#include <iostream>
#include <cstdio>

using namespace std;
typedef struct node{
    int data;
    int leftChild;
    int rightBrother;
}Node;

void pre_order_tree(Node nodes[], int i)
{
    if(i > 0) {
        cout << i << " ";
        for(int j = nodes[i].leftChild; j > 0; j = nodes[j].rightBrother)
            pre_order_tree(nodes, j);
    }
}

void back_order_tree(Node nodes[], int i)
{
    if( i > 0)
    {
        for(int j = nodes[i].leftChild; j > 0; j = nodes[j].rightBrother)
            back_order_tree(nodes, j);
        cout << i << " ";
    }
}

void layer_order_tree(int layers[], int i)
{
    for (int j = 1; j < i; ++j) {
        cout << layers[j] <<" ";
    }
}

void layer_tree(Node nodes[], int i, int length)
{
    int front = -1, rear = 0;
    int queue[length];
    queue[rear] = i;
    while(front != rear)
    {
        ++front;
        cout<<queue[front]<<" ";
        if(nodes[queue[front]].leftChild)
        {
            for (int j = nodes[queue[front]].leftChild; j > 0 ; j = nodes[j].rightBrother) {
                ++rear;
                queue[rear] = j;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    Node nodes[n+1];
    int layers[n+1];
    for (int i = 1; i < n+1; ++i) {
        int x, Cx, Sx;
        cin>>x>>Cx>>Sx;
        nodes[x].leftChild = Cx;
        nodes[x].rightBrother = Sx;
        layers[i] = x;
    }

    pre_order_tree(nodes, layers[1]);
    cout<<endl;
    back_order_tree(nodes, layers[1]);
    cout<<endl;
    layer_order_tree(layers, n+1);
    layer_tree(nodes, layers[1], n+1);
    return 0;
}

