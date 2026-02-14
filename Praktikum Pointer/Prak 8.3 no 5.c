#include<stdio.h>

int main(){
int *i;
int j=10, k, m[]={2, 5}; int **l;

i = m; i++;
*i = j; j = *i; i = &j;
k = *(&j);
l = &i;
printf("j = %d\n", j);
printf("k = %d\n", k);
printf("*m = %d\n", *m);
printf("*(m+1) = %d\n", *(m+1));
printf("**l = %d\n", **l);

    return 0;
}