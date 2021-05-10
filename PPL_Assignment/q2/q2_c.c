#include<stdio.h>
int calculate(int p, int q, int r, int s, int *t){
    int result;
    result=p*q-r*s-(*t);
    return result;
}
int main(){
    int p,q,r,s,t;
    p=9;
    q=12;
    r=3;
    s=4;
    t=4;
    int result=calculate(p,q,r,s,&t);
    printf("%d\n",result);
    return 0;
}

