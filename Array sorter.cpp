/*
 * C program to accept numbers as an input from user
 * and to sort them in ascending order.
 * and to sort them in descending order.
 */
#include <stdio.h>

void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}

void sortArrayDesc(int array[], int size) {
	
	int temp, i, j, arraySize;
	
	//sort
	
	for(i = 0; i < size; i++) 
	{
		for(j = i + 1; j < size; j++) 
		{
			if (array[i] < array[j]) 
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	//display
	printf("Array in descending order:\n");
	for(i = 0; i < size; i++) {
		printf("%d", array[i]);
	}
}
int main()
{
   int i, count, number[20];
 
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   
   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);
 
   sort_numbers_ascending(number, count);
   sortArrayDesc(number, count);
}
