#include"../Stack.h"

double func(double x, int n){
    struct stack{
        int n;
        double value;
    }S[100];
    int top = -1;
    double f1 = 1, f2 = 2 * x;

    for(int i = n; i >= 2; i--){
        S[++top].n = i;
    }
    while(top >= 0){
        S[top].value = 2 * x * f2 - 2 * (S[top].n - 1) * f1;
        f1 = f2;
        f2 = S[top--].value;
    }
    if(n == 0){
        return f1;
    }
    return f2;
}