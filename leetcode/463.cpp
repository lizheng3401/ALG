#include <cstdio>
#include <map>

using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int x, y;

    map<map<int, int>, int> xy;
    map<map<int, int>, int>::iterator start, right, down;
    for(int i = 0; i < grid.size(); ++i)
    {
        for(int j = 0; j < grid[i].size(); ++j)
        {
            if(grid[i][j] != 0)
            {
                map<int, int> temp;
                temp.insert(pair<int, int>(i, j));
                xy.insert(pair<map, int>(temp, 1));
            }
        }
    }
    return 1;
}
int main()
{

}
