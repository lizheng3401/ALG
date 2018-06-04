#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring> // memset
#include <iomanip> // setpresion

using namespace std;

class info{
    public:
        int b;
        float p;
        int id;
};

int cmp(const void *a, const void *b)
{
    info* x = (info*)a;
    info* y = (info*)b;

    if((x->b)  == (y->b))
    {
        if(x->p == y->p)
        {
            return (x->id) - (y->id);
        }
        return (x->p) - (y->p);
    }
    return (x->b) - (y->b);
}

int main()
{
    int num_test;
    cin >> num_test;
    while(num_test != 0)
    {
        num_test--;
        int dev_cates = 0;
        int devs_num = 0;
        cin >> dev_cates;
        info* devs = new info[100*100];

        int pd = 0;

        for(int i = 0; i < dev_cates; ++i)
        {
            int dev_factory_cates;
            cin >> dev_factory_cates;
            devs_num += dev_factory_cates;
            for(int j = 0 ;j < dev_factory_cates; ++j)
            {
                cin >> devs[pd].b >> devs[pd].p;
                devs[pd].id = i;
                pd++;
            }
        }

        qsort(devs, devs_num, sizeof(info), cmp);

        double bp = 0;
        for(int i = 0; i <= devs_num - dev_cates; ++i)
        {
            bool visited[dev_cates];
            memset(visited, false, sizeof(visited));
            visited[devs[i].id] = true;
            double price = devs[i].p;
            int count = 1;
            for(int j = i + 1; j < devs_num; ++j)
            {
                if(visited[devs[j].id])
                {
                    continue;
                }
                visited[devs[j].id] = true;
                price += devs[j].p;
                count++;
            }
            if(count < dev_cates)
            {
                break;
            }

            bp = bp > (devs[i].b / price) ? bp : (devs[i].b / price);
        }
        cout<<fixed<<setprecision(3)<<bp<<endl;
    }

    return 0;
}