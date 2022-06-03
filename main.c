#include <stdio.h>

void BubbleSort(int array[],int size);

int main() {
    int size_array = 10;
    int arr[] = {5,7,2,10,8,3,4,6,1,9};

    BubbleSort(arr,size_array);


    return 0;
}


void BubbleSort(int array[], int size)
{
    int n = 0;
    int aux = 0;

        for (int i = 0; i < size ; i++)
        {
            for (int j = 0; j < size-i; j++)
            {
                if (array[j] < array[j - 1])
                {
                    aux = array[j];
                    array[j] = array[j - 1];
                    array[j - 1] = aux;

                }

            }


        }


    for (int i = 0; i < size ; i++) {
        printf("%d", array[i]);

    }





}



