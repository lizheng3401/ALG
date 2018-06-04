#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Interval{
    double right;
    double left;
};

bool cmp(Interval a, Interval b)
{
    return a.left <= b.right;
}
int solve(Interval *intervals, int island)
{
    sort(intervals, intervals+island, cmp);
    int minPoints = 1;
    double right = intervals[0].right   ;

    for (int i = 1; i < island; ++i) {
        if(intervals[i].left > right)
        {
            minPoints++;
            right = intervals[i].right;
        }else if(intervals[i].right < right)
        {
            right = intervals[i].right;
        }else{

        }

    }
    return minPoints;
}
int main(){

    int island, num_case = 0;
    double radius;
    while((cin>>island>>radius) && island && radius)
    {
        Interval* intervals = new Interval[island];
        const double R2 = radius*radius;
        bool isSolvale = true;
        for (int i = 0; i < island; ++i) {
            double x, y;
            cin >> x >> y;
            if(y > radius)
            {
                isSolvale = false;
            }
            double offset = sqrt(R2 - y*y);
            intervals[i].left = x - offset;
            intervals[i].right= x + offset;
        }
        int minPoints = isSolvale ? solve(intervals, island): -1;

        cout << "Case "<< ++num_case << ": " << minPoints << endl;
    }

    return 0;
}