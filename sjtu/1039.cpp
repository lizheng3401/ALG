#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

typedef struct node{
    int left = 0;
    int right = 0;
}Node;

void layer_order_tree(Node nodes[], int root)
{
    int front = 0, rear = 1;
    int queue[30000];
    queue[rear] = root;
    while(front != rear)
    {
        ++front;
        cout<<queue[front];
        if(nodes[queue[front]].left != -1)
        {
            ++rear;
            queue[rear] = nodes[queue[front]].left;
        }
        if(nodes[queue[front]].right != -1)
        {
            ++rear;
            queue[rear] = nodes[queue[front]].right;
        }
    }
    cout<<endl;
}

int get_depth_of_tree(Node nodes[], int position)
{
    if(position != -1)
    {
        if(nodes[position].left == -1 && nodes[position].right == -1)
        {
            return 1;
        }
        return 1+max(get_depth_of_tree(nodes, nodes[position].left),
                     get_depth_of_tree(nodes, nodes[position].right));
    }else{
        return 0;
    }
}

void complete_tree(Node nodes[], int depth, int root, int num)
{
    int str[20+1], d = 0;
    int tree[50], pd = 0;
    int position = root;
    while(d <= depth)
    {
        int temp = pow(2, d);
        for(int i = 0; i < temp; ++i)
        {
            tree[pd++] = position;
        }
        d++;

    }
}

void back_order_tree(Node nodes[], int position)
{
    if(nodes[position].left != -1)
    {
        back_order_tree(nodes, nodes[position].left);
    }
    if(nodes[position].right != -1)
    {
        back_order_tree(nodes, nodes[position].right);
    }
    cout<<position<<" ";
}

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
    layer_order_tree(nodes, 1);
    back_order_tree(nodes, 1);
    return 0;
}

