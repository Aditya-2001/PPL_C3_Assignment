#include<stdio.h>
int create_fixed_stack_dynamic_array(){
    int my_fixed_stack_dynamic_array[50];
    int rand_sum=0;
    //Calculates the sum of 50 garbage values
    for(int i=0;i<50;i++){
        rand_sum+=my_fixed_stack_dynamic_array[i];
    }
    return rand_sum;
}
int main(){
    printf("%d",create_fixed_stack_dynamic_array());
    return 0;
}