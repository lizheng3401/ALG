#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> re;
    if(numRows == 1)
    {
        vector<int> temp;
        temp.push_back(1);
        re.push_back(temp);
        return re;
    }
    int left = 0, right = 0;
    for(int r = 1; r < numRows; ++r)
    {
        vector<int> temp;
        if(r == 1)
        {
            temp.push_back(1);
            re.push_back(temp);
        }else{
            for(int i = 0; i < r; ++i)
            {
                if( i == 0)
                {
                    temp.push_back(1);
                }else if(i == r - 1){
                    temp.push_back(1);
                }else{
                    temp.push_back(re[r - 2][i-1] + re[r - 2][i]);
                }
            }
            re.push_back(temp);
        }
    }
    return re;
}

int main()
{
    generate(5);
}