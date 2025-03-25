#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fib_pom(int n, long long memo[]){
    if(memo[n] != -1) return memo[n];
    if(n < 2) {
        memo[n] = 1;
        return 1;
    }
    else {
        memo[n] = fib_pom(n - 1, memo) + fib_pom(n - 2, memo);
        return fib_pom(n - 1, memo) + fib_pom(n - 2, memo);
    }
}
long long fib(int n){
    long long memo[n+1];
    for(int i = 0; i < n+1; i++) memo[i] = -1;
    
    return fib_pom(n, memo);
}
int main(void) {
    
    printf("%ld", fib(4000));
    return 0;
}
