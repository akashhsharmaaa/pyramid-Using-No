#include<stdio.h>
int main(void)
{
int n=1;
    for (int i = 5; i>0; i--) {
        for (int k = 0; k < i-1; k++) {
            printf(" ");
        }
        for (int j = 5; j>= i; j--) {
            printf("%d ",n);
        }
        n++;
        printf("\n");
  }
}
