#include <cstdio>
#include <cstring>

// 求一个数的补数,涉及到了位运算

class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0; // 掩码初始二进制全为0
        while(num & mask)
        {
            mask <<= 1; // 左移掩码
        }
        return ~num & ~mask;
    }
};