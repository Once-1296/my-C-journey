#include <stdio.h>
// program name
int main()
{
    // start coding
    int arr[10];
    int size = sizeof(arr) / sizeof(int);
    int temp, key;
    //taking input
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Sorting:\n");
    //bubble sort
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Enter element to search:\n");
    scanf("%d", &key);
    int beg = 0, end = size - 1, mid;
    char c = 'n';
    while (beg < end)
    {
        mid = (beg + end) / 2;
        if (key == arr[mid])
        {
            //if found come out of loop
            //here c = 'y' means yes element is found, otherwise n means no
            c = 'y';
            break;
        }
        else if (key > arr[mid])
        {
            //check in upper half
            beg = mid + 1;
            continue;
        }
        else if (key < arr[mid])
        {
            //check in lower half
            end = mid - 1;
            continue;
        }
    }
    if (c == 'y')
    {
        printf("Element found.\n Index no: %d.\n Element no %d.\n", mid, mid + 1);
    }
    else
    {
        printf("Element not in list.\n");
    }
    return 0;
}