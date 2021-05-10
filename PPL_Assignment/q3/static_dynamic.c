#include<stdio.h>
int create_stack_dynamic_array(int array_size){
    int my_stack_dynamic_array[array_size];
    int rand_sum=0;
    //Calculates the sum of 50 garbage values
    for(int i=0;i<array_size;i++){
        rand_sum+=my_stack_dynamic_array[i];
    }
    return rand_sum;
}
int main(){
    printf("%d",create_stack_dynamic_array(50));
    return 0;
}