#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int stamps[300];                //保存所有邮票值
int now[5];                     //当前组合
int ans[5];                     //最终结果组合
int n, m, total, ansnum;        //总邮票种类，总邮票数目，顾客需求以及组合邮票的数目
bool tie,none;                  //是否是平局还是没有这种组合
bool vis[300];                  //为了计算多少种邮票的标志数组

int cal(int tmp[], int num)
{
//    计算当前有多少种邮票
    int res = 0;
    memset(vis, 0, sizeof(vis)); // 清空数据
    for (int i = 0; i < num; ++i) {
        if(!vis[tmp[i]])
        {
            vis[tmp[i]] = true;
            res++;
        }
    }
    return res;
}

int getMax(int tmp[], int num)
{
    int res = 0;
    for (int i = 0; i < num; ++i) {
        if(res < stamps[tmp[i]])
        {
            res = stamps[tmp[i]];
        }
    }

    return res;
}

void comp()
{
    int know = cal(now, total); // 邮票种类
    int kans = cal(ans, ansnum); // 邮票数目多
    int maxans = getMax(ans, ansnum); // 面值最大
    int maxnow = getMax(now, total);
    if(ansnum == -1 || know > kans
       || (know == kans && ansnum > total)
       || (know == kans && ansnum == total && maxnow > maxans))
    {
        tie = false;
        ansnum = total;
        for (int i = 0; i < total; ++i) {
            ans[i] = now[i];
        }
        return;
    }
    if(kans == know && ansnum == total && maxans == maxnow)
    {
        tie = true;
    }
}

void dfs(int nn, int ssum)
{
    if(ssum > m)
    {
//        剪枝 若当前值大于需求， 剪枝
        return;
    }
    if(ssum == m)
    {
        none = false;
        comp();
    }
    if(total == 4)
    {
//        剪枝， 当前值小于需求，且已经有四张邮票，剪枝
        return;
    }
    for(int i = nn; i < n; i++)
    {
        now[total] = i;
        ++total;
        dfs(i, ssum+stamps[i]);
        total--;
    }
}

void print()
{
    if(none)
    {
        printf("%d --- none\n", m);
    }
    printf("%d (%d):", m, cal(ans, ansnum));
    if(tie)
    {
        printf(" tie\n");
        return;
    }
    for (int i = 0; i < ansnum; ++i)
    {
        printf(" %d", stamps[ans[i]]);
    }
    printf("\n");
}

int main() {
    int i, j;
    while(scanf("%d", &j) != EOF)
    {
        i = 0;
        stamps[i] = j;
        while(stamps[i] != 0){
            ++i;
            scanf("%d", &stamps[i]);
        }
        n = i;
        sort(stamps, stamps+n);
        while(1){
            scanf("%d", &m);
            if(m == 0)
            {
                break;
            }
            total = 0;
            ansnum = -1;
            tie = false;
            none = true;
            dfs(0, 0);
            if(!none)
            {
                sort(ans, ans+ansnum);
            }
        }
        print();
    }
    return 0;
}
