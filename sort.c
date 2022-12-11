#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 10

// Функция ввода значений элементов массива с клавиатуры (тип данных *массив A)
void ValuesArray(int *A)
{
    for (int i = 0; i < N; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
}

// Функция сортировки массива пузырьком по убыванию (тип данных *значение массива, тип данных *РАЗМЕР МАССИВА)
void BubbleSort(int *num, int SIZE)
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = (SIZE - 1); j > i; j--)
        {
            if (num[j] > num[j - 1])
            {
                int temp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = temp;
            }
        }
    }
}

// Функция вывода результата сортировки (тип данных *массив A)
void ShowArray(int *A)
{
    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
    getchar(); getchar();
}

int main()
{
    system("cls");

    int A[N];

    ValuesArray(A); // Функция ввода значений элементов массива с клавиатуры

    BubbleSort(A, N); // Функция сортировки массива пузырьком по убыванию 
    
    ShowArray(A); // Функция вывода результата сортировки

    return 0;
}