#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<=1)    return 1;
    return (n*factorial(n-1));
}
int main(){
    int* heap_dynamic_1=new int;
    int* heap_dynamic_2=new int;
    *heap_dynamic_1=3;
    *heap_dynamic_2=2;
    cout<<factorial(*heap_dynamic_1 + *heap_dynamic_2);
    return 0;
}