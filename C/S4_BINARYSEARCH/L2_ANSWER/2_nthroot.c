#include<stdio.h>
#include<math.h>

float power(float base, int n){
    float result = 1;
    for(int i = 0; i < n; i++)
        result *= base;
    return result;
}

float nthroot(float num, int n){
    float low = 0;
    float high = (num < 1) ? 1 : num;
    float mid;

    while(high - low > 1e-6){
        mid = (low + high) / 2;

        if(power(mid,n)>num){
            high=mid;
        }
        else{
            low=mid;
        }
    }

    return mid;
}

int main(){
    float num;
    int n;
    scanf("%f%d", &num, &n);
    printf("%.6f", nthroot(num, n));
    return 0;
}