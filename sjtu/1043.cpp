#include <iostream>
#include <cstdio>

using namespace std;

typedef struct node{
    int left = -1;
    int right = -1;
}Node;

bool is_full_binTree(Node nodes[], int N)
{
    int front = -1, rear = 0;
    int left, right;
    bool flag = false;
    int queue[N];
    queue[rear] = 0;
    while(front != rear)
    {
        ++front;
        left = nodes[queue[front]].left;
        right = nodes[queue[front]].right;

        if(flag & (left != -1 | right != -1) )
        {
            return false;
        }
        if(left == -1 && right != -1)
        {
            return false;
        }else if(right == -1)
        {
            flag = true;
        }

        if(left != -1)
        {
            queue[++rear] = left;
        }
        if(right != -1)
        {
            queue[++rear] = right;
        }
    }

    return true;
}

int main()
{
    int N, father;
    cin>>N;
    Node nodes[N];
    for (int i = 1; i < N; ++i) {
        cin>>father;
        if(nodes[father].left == -1) {
            nodes[father].left = i;
        }else{
            nodes[father].right = i;
        }
    }
    if(is_full_binTree(nodes, N))
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
