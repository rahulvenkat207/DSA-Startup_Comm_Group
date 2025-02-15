#include<stdio.h>

int global_var = 7;
int global_var_uninit;

int dummy()
{
    int x = 15;
    int y = 99;
    return x+y;

}

int another_dummy()
{
    int x = 100;
    int y =1;
    return x+y;
}

int main(){
    int result1 = dummy();
    int result2 = another_dummy();
    return 0;
}