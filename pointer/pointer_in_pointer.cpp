#include<iostream>
using namespace std;
int main()
{
    int x = 23;
    int* ptr = &x;
    int** ptr1 = &ptr;
    printf("%p\n",&ptr);
    printf("%p\n",ptr);
    printf("%p\n",ptr1); 
    return 0;
} 