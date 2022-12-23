#include <stdio.h>

void states(int s0, int s1, int b, int m, int* S0, int* S1){
    int w = m & b;
    int x = s1 & m;
    int y = s0 & m;
    int z = s0 & !b;
    *S0 = w | x | y | z;
    int i = s1 & !m & !b;
    int j = !s0 & !s1 & !m & b;
    *S1 = i | j;
}