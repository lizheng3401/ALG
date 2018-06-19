#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N, pos, point;
    cin>>N;
    int position[N];
    int ordered[N];
    position[0] = 0;
    ordered[0] = 0;
    
    for(int i = 0; i < N; i++)
    {
        position[i] = -1;
    }
    
    for(int i = 1; i < N; ++i)
    {
        cin >> point;
        pos = ordered[point] * 2 + 1; // 计算该节点左孩子节点的序号
        if(pos >= N)  // 若计算出的左孩子序号比总数大,则说明不是完全二叉树
        {
            cout << "false";
            return 0;
        }
        if( position[pos] != -1) // 若左孩子已存在,P+1为右孩子节点
        {
            ++pos;
        }
        if( pos >= N)    //若右孩子节点大于总数, 则说明不是完全二叉树
        {
            cout << "false";
            return 0;
        }
        ordered[i] = pos;  // 第 i 个 节点的位置是整个树的第几个节点,由这个可算出其孩子节点的序号
        position[pos] = i; // 整个树的第P个节点 对应第几个节点
    }
    cout<<"true";
    return 0;
}
