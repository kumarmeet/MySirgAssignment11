#include <stdio.h>
#include <stdlib.h>

void avg_ten_number(void);
void sum_ten_number(void);
void sum_even_odd_numbers(void);
void find_greatest(void);
void find_smallest(void);
void sort_array_increasing(void);

int main()
{
//    avg_ten_number();
//    sum_ten_number();
//    sum_even_odd_numbers();
//    find_greatest();
//      find_smallest();
    sort_array_increasing();
    return 0;
}

void sort_array_increasing()
{
    int i, j, temp, arr[10];

    printf("Enter 10 numbers -> ");

    for(i = 0; i <= 9; i++)
    {
      scanf("%d", &arr[i]);
    }

    for(i = 0; i <= 9; i++)
    {
      for(j = i + 1; j <= 9; j++)
      {
        if(arr[i] > arr[j])
        {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    for(i = 0; i <= 9; i++)
        printf("Sorted array in ascending order %d\t", arr[i]);
}

void find_smallest()
{
    int i, arr[10], min = 2147483647;

    printf("Enter 10 numbers -> ");

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum number in an array %d", min);
}

void find_greatest()
{
    int i, arr[10], max = 0;

    printf("Enter 10 numbers -> ");

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum number in an array %d", max);
}

void sum_even_odd_numbers()
{
    int i, arr[10], sumOfOdd, sumOfEven;

    printf("Enter 10 numbers -> ");

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            sumOfEven += arr[i];

        if(arr[i] % 2 == 1)
            sumOfOdd += arr[i];
    }

    printf("Sum of even %d\n", sumOfEven);
    printf("Sum of odd %d", sumOfOdd);

}

void sum_ten_number()
{
    float a[10], sum = 0;
    int i;

    printf("Enter 10 number -> ");

    for(i = 0; i <= 9; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    printf("Sum of 10 numbers is -> %.2f", sum);
}

void avg_ten_number()
{
    float a[10], sum = 0, avg;
    int i;

    printf("Enter 10 number -> ");

    for(i = 0; i <= 9; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / 10;

    printf("Average of 10 numbers is -> %.2f", avg);
}
