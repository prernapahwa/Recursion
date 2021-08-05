/*selection sort using recursion
 *
 * @Prerna(1910990964)
 *
 * Assignment-5_Recursion
 */

#include<stdio.h>
//int i = 0;// i is the pointer moving with sorted list

void selectionsort(int *array, int n ,int i) {
    if(i + 1 > n) {
        return;
    }
    int min = i;
    for(int j = i + 1; j < n; j++){
        if(array[min] > array[j]) {
            min = j;
        }
    }
    
    int temp = array[min];
    array[min] = array[i];
    array[i] = temp;
    //swaped
    //printf("i=%d\n",i);
    //printf("%d",array[i]);

    
    selectionsort(array, n, i+1);//recursive call
    
}

int main() {
    int array[10] = {5, 9, 4, 2, 8, 0, 10, 1, 20, 99};
    selectionsort(array, 10, 0);
    printf("Sorted Array");
    for(int j = 0; j < 10; j++) {
        printf("%d ",array[j]);
    }
}

