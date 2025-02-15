#include <stdio.h>

void re_call(int arr[], int n, int i, int new_Arr[], int *newLen)
{
    if (n == i)
        return;
    if (i % 2 == 0)
    {
        new_Arr[*newLen] = arr[i];
        (*newLen)++;
    }
    re_call(arr, n, i + 1, new_Arr, newLen);
}

int main()
{
    int length, newLength = 0;
    scanf("%d", &length);
    int int_arr[length];
    int newArr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &int_arr[i]);
    }

    re_call(int_arr, length, 0, newArr, &newLength);

    for (int i = 0; i < newLength - 1; i++)
    {
        for (int j = i + 1; j < newLength; j++)
        {
            if (newArr[i] < newArr[j])
            {
                int temp = newArr[i];
                newArr[i] = newArr[j];
                newArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}
