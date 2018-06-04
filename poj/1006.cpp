#include <iostream>
#include <cstdio>

using namespace std;

int main(){
   int p, e, i, d, n;
   int time = 1;
   while(cin>>p>>e>>i>>d)
   {
       if(p == -1 && e == -1 && i == -1 && d == -1)
       {
           break;
       }
       int lcm = 23*28*33;
//       int n = (5544*p+14421*e+1288*i-d+21252)%21252;
// 21252*k+n = 21252*a+(21252-d)
       int a = (5544*p+14421*e+1288*i)%21252;
       int x = a+21252*1;
       n = a;
       if(n == 0)
       {
           n = 21252;
       }
       cout<<"Case "<<time++<<": the next triple peak occurs in "<<n<<" days."<<endl;
   }
   return 0;
}
