#include <iostream>
#include <cstdlib> // get the qosrt
#include <cstdio>

using namespace std;

struct DNA{
    char strs[50];
    int num;
};

int cmp(const DNA *a, const DNA *b){
    return a->num - b->num;
}

int main(){
    int length = 0, str_case = 0, ordered = 0;
    scanf("%d %d", &length, &str_case);
    DNA cases[str_case];
    for (int i = 0; i < str_case; ++i) {
        scanf("%s", cases[i].strs);
        int score = 0;
        for (int j = 0; j < length; ++j) {
            for (int l = j + 1; l < length; ++l) {
                if(cases[i].strs[j] > cases[i].strs[l]){
                    score++;
                }
            }
        }
        cases[i].num= score;
    }
    qsort(cases, str_case, sizeof(DNA), (int (*)(const void *, const void *))cmp);
    for (int k = 0; k < str_case; ++k) {
        printf("%s\n", cases[k].strs);
    }
    return 0;
}