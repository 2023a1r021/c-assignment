#include <stdio.h>

void findDuplicates(int arr[], int size)
{
    printf("Duplicate elements in the array: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                // Check if the element is not printed before
                int isDuplicate = 0;
                for (int k = 0; k < i; k++)
                {
                    if (arr[i] == arr[k])
                    {
                        isDuplicate = 1;
                        break;
                    }
                }

                if (!isDuplicate)
                {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    printf("\n");
}

int main()
{
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find and print duplicate elements
    findDuplicates(arr, size);

    return 0;
}
// 1 1 2 2 1 3 4
