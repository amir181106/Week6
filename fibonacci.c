#include <stdio.h>
int main() {
    int n, i;
    long long a=0, b=1, next;
    printf("How many terms?");
    scanf("%d", &n);
    printf("Fibonacci: %lld, %lld" ,a, b);
    for(i=3;i<=n;i++){
        next=a+b;
        printf(", %lld", next);
        a=b;
        b=next;
      }
   printf("\n");
    return 0;
}