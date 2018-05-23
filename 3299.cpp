#include<iostream>
#include<math.h>
#include<iomanip>  

using namespace std;

int main(){
    char ch;
    float T, H, D;
    bool tt = false, hh = false, dd = false;
    while(true){
        for(int i = 0; i < 2; i++){
            cin>>ch;
            if(ch=='E'){
                return 0;
            }else if(ch == 'T'){
                tt = true;
                cin >>T;
            }else if(ch == 'D'){
                dd = true;
                cin >>D;
            }else if(ch == 'H'){
                hh = true;
                cin >>H;
            }
        }
        if(!tt){
            T = H-0.5555*(6.11*exp(5417.7530*((1/273.16)-(1/(D+273.16))))-10.0);
        }else if(!hh){
            H = T+0.5555*(6.11*exp(5417.7530*((1/273.16)-(1/(D+273.16))))-10.0);
        }else{
            D = 1/(1/273.16-log(((H-T)/0.5555+10)/6.11)/5417.7530)-273.16;
        }
        cout<<setprecision(1)<<fixed<<"T "<<T<<" D "<<D<<" H "<<H<<endl;
    }
    return 0;
}