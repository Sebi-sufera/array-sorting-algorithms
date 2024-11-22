#include <stdio.h>
 
static void sort(void)
{
    int arr[1000], n = arr.size();
    int swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}
 
int main()
{
    return 0;
}
