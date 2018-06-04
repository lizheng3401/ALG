#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
   int n = 0;
   while(1){
       cin>>n;
       int sum = 0;
       for(int i = 1; ; i++)
       {
           sum += i;
           if(sum -n == 0 | (sum > n && (sum-n)%2 == 0))
           {
               cout<< i<<endl;
               return 0;
           }
       }

   } 
}
int test()
{
    int n = 0, sum = 0;
    int num_case = 0;
    int ca[110];
    cin>>num_case;
    while(num_case != 0){
        num_case--;
        cin>>n;
        memset(ca,0, sizeof(ca));
        for(int i = 2; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(j % i == 0)
                {
                    ca[j] = !ca[j];
                }
            }
        }
        for(int k = 1; k <= n; ++k)
        {
            if(ca[k] == 0)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
}