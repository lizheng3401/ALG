#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[110];
    char temp[110];
    int n, top = 0;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        for(int i = 0; i < strlen(temp); i++)
        {
            if(temp[i] =='(')
            {
                str[top++] = temp[i];
            }else if (top - 1 < 0 | str[top-1] != '('){
                top = -1;
                break;
            }else{
                --top;
            }
        }
        if(top == 0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
            top = 0;
        }
//        清空字符数组
        memset(temp, 0, sizeof(temp));
        memset(str, 0, sizeof(str));
    }
}

