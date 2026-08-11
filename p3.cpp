#include<iostream>

int main()
{
    int a[10], n, i, key;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    /* Linear Search */
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Linear Search: Element found at position %d\n", i + 1);
            break;
        }
    }

    if(i == n)
        printf("Linear Search: Element not found\n");

    /* Binary Search */
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Binary Search: Element found at position %d\n", mid + 1);
            return 0;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Binary Search: Element not found\n");

    return 0;
}