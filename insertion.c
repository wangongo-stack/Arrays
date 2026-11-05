
#include <stdio.h>

#define size 100

int main()
{
    int arr[size];
    int n, value, position;
    int i;

    printf("*****ARRAY INSERT*****\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n >= size)
    {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter %d array:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Invalid position!\n");
        return 1;
    }

    //Shift elements to the right 
    for (i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    //Insert the new value
    arr[position - 1] = value;

    n++;

    printf("\n****Array after insertion****\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
