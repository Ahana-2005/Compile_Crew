/*Write a C program to get the indices of two numbers in a given array of integers. This will enable you to get the sum of two numbers equal to a specific target.
Expected Output:

Original Array: 4  2  1  5
Target Value: 7
Indices of the two numbers whose sum equal to target value: 7
1 3*/
#include <stdio.h>
int main()
{
    int target, arr[5];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value in index %d\n:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be targeted:");
    scanf("%d",&target);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if(target==(arr[i]+arr[j]))
            {
                printf("The targeted value is found in indices %d, %d",i,j);
            }
        }
    }
}