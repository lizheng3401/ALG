#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char *Haab[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac",
                "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
char *Tzolkin[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok",
                   "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
int getMonth(char *month){
    for (int i = 0; i < 19; ++i) {
        if(!strcmp(Haab[i], month)){
            return i;
        }
    }

}
struct T{
    int num;
    int day;
    int year;
};
int main(){
    int num_case = 0;
    char month[20];
    int Hday, Hmonth, Hyear, date;
    int Tnum, Tday, Tyear;
    cin >> num_case;
    T t[num_case];
    for (int i = 0; i < num_case; ++i) {
        scanf("%d. %s %d", &Hday, month, &Hyear);
        Hmonth = getMonth(month);
        date = Hyear*365+Hmonth*20+Hday;
        Tyear = date / 260;
        date = date % 260;
        Tnum = date % 13 + 1;
        Tday = date % 20;
        t[i].num = Tnum;
        t[i].day =Tday;
        t[i].year = Tyear;
    }
    cout << num_case <<endl;
    for (int j = 0; j < num_case; ++j) {
        printf("%d %s %d\n", t[j].num, Tzolkin[t[j].day], t[j].year);
    }

    return 0;

}

