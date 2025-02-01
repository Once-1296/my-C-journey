#include <stdio.h>
// program name
int main()
{
    // start coding
    int arr[10];
    int size = sizeof(arr) / sizeof(int);
    int temp;
    // Taking input
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original list: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d:%d\n", i + 1, arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        // inner loop makes (size -1) comparisons first, then (size -2),(size -3)...... till just 1 comparison occurs
        for (int j = 0; j < size - i; j++)
        {
            // largest element is pushed to end of list
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Ascending list: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d:%d\n", i + 1, arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
        // inner loop makes (size -1) comparisons first, then (size -2),(size -3)...... till just 1 comparison occurs
        for (int j = 0; j < size - i; j++)
        {
            // smallest element is pushed to end of list
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Descending list: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d:%d\n", i + 1, arr[i]);
    }
    return 0;
}