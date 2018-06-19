#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    vector<int> vec;
    int i;
    cout << "size: " << vec.size() << endl;
    for(i = 0; i < 5; ++i)
    {
        vec.push_back(i);
    }
    cout << "size: " << vec.size() << endl;
    for(i = 0; i < 5; ++i)
    {
        cout << vec[i] << " ";
    }
    cout<<endl;
    vector<int>::iterator v;
    for(v = vec.begin(); v != vec.end(); ++v)
    {
        cout << *v << " ";
    }

    return 0;

}