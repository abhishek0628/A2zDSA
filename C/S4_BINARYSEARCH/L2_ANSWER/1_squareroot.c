#include<stdio.h>

float squareroot(float n){
    float low = 0;
    float high = n;
    float mid;

    while(high - low > 1e-6){
        mid = (low + high) / 2;

        if(mid * mid > n)
            high = mid;
        else
            low = mid;
    }

    return mid;
}

int main(){
    float n;
    scanf("%f", &n);
    printf("%.6f", squareroot(n));
    return 0;
}