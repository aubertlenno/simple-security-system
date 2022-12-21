#include <stdio.h>
#include <stdlib.h>

void states(int s0, int s1, int b, int m, int* S0, int* S1){
    int x = s0 & !b;
    int y = s0 & m;
    int z = s1 & !b & m;
    *S0 = x | y | z;
    int i = s1 & !b & !m;
    int j = s1 & b & m;
    int k = !s1 & b & !m;
    *S1 = i | j | k;
}

void outputs(int s0, int s1, int* O0, int* O1){
    *O0 = s0;
    *O1 = s1;
}