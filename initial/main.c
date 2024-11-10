#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *Reverse(char *str);
double calculate_average(double a, double b, double c);
int is_prime(int n);
int max_element_array(int *arr, size_t len);

int main()
{
    printf("Hello, Artem\n");

    char *reversedStr = Reverse("Hello");
    printf("1. Reverse: %s\n", reversedStr);
    if (reversedStr != NULL)
    {
        free(reversedStr);
    }
    printf("2.Calculate average: %.2f\n", calculate_average(11, 2, 3));

    printf("3. is prime: %d\n", is_prime(25));

    int myArray[] = {-10, 100, 5, 1 - 230};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    printf("4. max element of an array: %d\n", max_element_array(myArray, len));
}

char *Reverse(char *str)
{
    int size = strlen(str);
    char *reverseStr = malloc(size + 1);

    if (reverseStr == NULL)
    {
        printf("failed allocating memory");
        return NULL;
    }

    int j = size - 1;
    int i = 0;
    while (i < size)
    {
        reverseStr[j] = str[i];
        j--;
        i++;
    }
    reverseStr[size] = '\0';

    return reverseStr;
}

double calculate_average(double a, double b, double c)
{
    return (a + b + c) / 3.;
}

int is_prime(int n)
{
    int result = 1;

    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            result = 0;
            break;
        }
    }
    return result;
}

int max_element_array(int arr[], size_t len)
{
    int max = -INFINITY;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}