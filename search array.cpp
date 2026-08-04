#include <stdio.h>

int main()
{
    int arr[] = {55, 66, 77, 22, 11, 52, 19};
    int key;
    int i, n = 7;
    int found = 0;

    printf("Enter the value to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("The value = %d found at index = %d", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
 
 