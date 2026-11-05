
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, position;
    int i;

    printf("========== ARRAY DELETION ==========\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    /* Shift elements to the left */

    for (i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    /* Reduce array size */

    n--;

    printf("\nArray after deletion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
