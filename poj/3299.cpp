#include<iostream>
#include<cstdio>
#include<math.h>
#include<iomanip>  

using namespace std;

int main(){
    char ch;
    while(true){
        float T = 0.0, H = 0.0, D = 0.0;
        for(int i = 0; i < 2; i++){
            cin>>ch;
            if(ch=='E'){
                return 0;
            }else if(ch == 'T'){
                cin >>T;
            }else if(ch == 'D'){
                cin >>D;
            }else if(ch == 'H'){
                cin >>H;
            }
        }
        if(H == 0.0)  
            H=T+0.5555*(6.11*exp(5417.7530*(1/273.16-1/(D+273.16)))-10);  
        else if(T==0.0)  
            T=H-0.5555*(6.11*exp(5417.7530*(1/273.16-1/(D+273.16)))-10);  
        else if(D==0.0)  
            D=1/((1/273.16)-((log((((H-T)/0.5555)+10.0)/6.11))/5417.7530))-273.16;  
        cout<<setprecision(1)<<fixed<<"T "<<T<<" D "<<D<<" H "<<H<<endl;
    }
    return 0;
}