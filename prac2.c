#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int count_m=0, count_q=0;

void selectionSort(int arr[], int n){

    int i, j, min_idx, temp, count=0;
    count++;
    // One by one move boundary of unsorted sub array
    for (i = 0; i < n-1; i++){
        count++;
        // Find the minimum element in unsorted array
        min_idx = i;
        count++;
        for (j = i+1; j < n; j++){
          count++;
          count++;                      // for if statement
          if (arr[j] < arr[min_idx]){
            min_idx = j;
            count++;
          }
        }
        count++;
        // Swap the found minimum element with the first element
        count++;                        // for if statement
           if(min_idx != i){
                temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
                count++;
                count++;
                count++;
           }
    }
    count++;
    // print the array
    // we are not considering the steps taken to print the array, so we are only counting the steps taken by the selectionSort algorithm to sort the elements.
    for (int i=0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\nSelection Sort took %d steps.\n\n", count);
}

void bubbleSort(int arr[], int n){

    int i, j, temp, count=0;
    count++;
    for (i = 0; i < n - 1; i++){
        count++;
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++){
            count++;
            count++;
            if (arr[j] > arr[j + 1]){
                count++;
                count++;
                count++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        count++;
    }
    count++;
    for(int i=0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\nBubble Sort took %d steps.\n", count);
}

void insertionSort(int arr[], int n){
    // printf("\nYet to be made. Please wait while we make this algorithm.\n");

    int i, key, j, temp, count=0;
    count++;
    for (i = 1; i < n; i++){
        count++;
        count++;
        count++;
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1] that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key){
            count++;
            count++;
            count++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        count++;
        count++;
        arr[j + 1] = key;
    }
    count++;
    for(int i=0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\nInsertion Sort took %d steps.\n", count);
}

void mergeSort(int arr[], int l, int r){
    count_m++;
    if (l < r) {
        // Same as (l+r)/2, but avoids
        // overflow for large l and h
        int m = l + (r - l) / 2;
        count_m++;
        // Sort first and second halves
        mergeSort(arr, l, m);
        count_m++;
        mergeSort(arr, m + 1, r);
        count_m++;
        count_m++;
        merge(arr, l, m, r);
    }
    //printf("\n");
    //for (int i = 0; i < n; i++){
    //    printf("%d\n", arr[i]);
    }
//}

// Merges two subarrays of arr[].
// First subarray is arr[l..m]      'l' thi 'm'
// Second subarray is arr[m+1..r]   'm+1' thi 'r'

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    count_m++;
    count_m++;
    count_m++;
    // Create temp arrays
    int L[n1], R[n2];
    count_m++;
    // Copy data to temp arrays
    // L[] and R[]
    for (i = 0; i < n1; i++){
        count_m++;
        count_m++;
        L[i] = arr[l + i];
    }
    count_m++;
    for (j = 0; j < n2; j++){
        count_m++;
        count_m++;
        R[j] = arr[m + 1 + j];
    }
    count_m++;
    // Merge the temp arrays back
    // into arr[l..r]
    // Initial index of first subarray
    i = 0;
    count_m++;
    // Initial index of second subarray
    j = 0;
    count_m++;
    // Initial index of merged subarray
    k = l;
    count_m++;
    while (i < n1 && j < n2) {
        count_m++;
        count_m++;
        if (L[i] <= R[j]) {
            count_m++;
            count_m++;
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
            count_m++;
            count_m++;
        }
        k++;
        count_m++;
    }
    count_m++;

    // Copy the remaining elements
    // of L[], if there are any
    while (i < n1) {
        count_m++;
        count_m++;
        count_m++;
        count_m++;
        arr[k] = L[i];
        i++;
        k++;
    }
    count_m++;

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        count_m++;
        count_m++;
        count_m++;
        count_m++;
        arr[k] = R[j];
        j++;
        k++;
    }
    count_m++;
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted



// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index

void quickSort(int arr[], int low, int high){
    count_q++;
    if (low < high) {
        count_q++;
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        count_q++;
        quickSort(arr, pi + 1, high);
        count_q++;
    }
    // printing the sorted array
    //printf("\n");
    //for (int i = 0; i < n; i++){
    //    printf("%d\n", arr[i]);
    }
//}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high){
    // Choosing the pivot
    count_q++;
    int temp, pivot = arr[high];
    count_q++;
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        count_q++;
        count_q++;
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {

            // Increment index of smaller element
            i++;
            count_q++;
            //swap(&arr[i], &arr[j]);
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            count_q++;
            count_q++;
            count_q++;
        }
    }
    count_q++;
    //swap(&arr[i + 1], &arr[high]);
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    count_q++;
    count_q++;
    count_q++;
    count_q++;
    return (i + 1);
}

/* void swap(int* a, int* b){
     int t = *a;
     *a = *b;
     *b = t;
} */

void A_S_A_Sel(int n){
    int a_s_array[n];
    for(int i=0;i<n;i++){
        a_s_array[i] = i;
    }
    selectionSort(a_s_array, n);
}

void A_S_A_Bub(int n){
    int a_s_array[n];
    for(int i=0;i<n;i++){
        a_s_array[i] = i;
    }
    bubbleSort(a_s_array, n);
}

void A_S_A_Ins(int n){
    int a_s_array[n];
    for(int i=0;i<n;i++){
        a_s_array[i] = i;
    }
    insertionSort(a_s_array, n);
}

void A_S_A_Mer(int n){
    int a_s_array[n];
    for(int i=0;i<n;i++){
        a_s_array[i] = i;
    }
    mergeSort(a_s_array, 0, n-1);
    printf("\n");
        for (int i = 0; i < n; i++){
        printf("%d\n", a_s_array[i]);
        }
        printf("\nMergeSort took %d steps.\n", count_m);
}

void A_S_A_Qui(int n){
    int a_s_array[n];
    for(int i=0;i<n;i++){
        a_s_array[i] = i;
    }
    quickSort(a_s_array, 0, n-1);
    printf("\n");
        for(int i = 0; i < n; i++){
        printf("%d\n", a_s_array[i]);
        }
        printf("\nQuickSort took %d steps.\n", count_q);
}

void D_S_A_Sel(int n){
    int d_s_array[n];
    for(int i=0;i<n;i++){
        d_s_array[i] = 1000-i;
    }
    selectionSort(d_s_array, n);
}

void D_S_A_Bub(int n){
    int d_s_array[n];
    for(int i=0;i<n;i++){
        d_s_array[i] = 1000-i;
    }
    bubbleSort(d_s_array, n);
}

void D_S_A_Ins(int n){
    int d_s_array[n];
    for(int i=0;i<n;i++){
        d_s_array[i] = 1000-i;
    }
    insertionSort(d_s_array, n);
}

void D_S_A_Mer(int n){
    int d_s_array[n];
    for(int i=0;i<n;i++){
        d_s_array[i] = 1000-i;
    }
    mergeSort(d_s_array, 0, n-1);
        printf("\n");
        for (int i = 0; i < n; i++){
        printf("%d\n", d_s_array[i]);
        }
        printf("\nMergeSort took %d steps.\n", count_m);
}

void D_S_A_Qui(int n){
    int d_s_array[n];
    for(int i=0;i<n;i++){
        d_s_array[i] = 1000-i;
    }
    quickSort(d_s_array, 0, n-1);
        printf("\n");
        for(int i = 0; i < n; i++){
        printf("%d\n", d_s_array[i]);
        }
        printf("\nQuickSort took %d steps.\n", count_q);
}

int main(){

    //int a[] = {1,4,7,2,5,8,3,6,9,10};

    srand(time(NULL));                  // Seeding the random number generator with current time

    int n, choice,which_sort;

    do{
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    int a[n]; // n=1000

    for(int i=0;i<n;i++){
        a[i] = rand() % 1000;
    }

    printf("\nWhich Sorting do you want to perform?\n\n1. Random_Selection Sort   2. Random_Bubble Sort   3. Random_Insertion Sort   \n4. Random_Merge Sort   5. Random_Quick Sort   \n\n6. Asc_SelectionSort   7. Asc_BubbleSort   8. Asc_InsertionSort   \n9. Asc_MergeSort   10. Asc_QuickSort   \n\n11. Des_SelectionSort   12. Des_BubbleSort   13. Des_InsertionSort   \n14. Des_MergeSort   15. Des_QuickSort\n\n\n");
    scanf("%d", &which_sort);

    switch(which_sort){

    case 1:
        selectionSort(a, n);
        break;

    case 2:
        bubbleSort(a, n);
        break;

    case 3:
        insertionSort(a, n);
        break;

    case 4:
        mergeSort(a, 0, n-1);
        //printMergeArray(a, n);
        printf("\n");
        for (int i = 0; i < n; i++){
        printf("%d\n", a[i]);
        }
        printf("\nMergeSort took %d steps.\n", count_m);
        break;

    case 5:
        quickSort(a, 0, n-1);
        printf("\n");
        for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);
        }
        printf("\nQuickSort took %d steps.\n", count_q);
        break;

    case 6:
        A_S_A_Sel(n);
        break;

    case 7:
        A_S_A_Bub(n);
        break;

    case 8:
        A_S_A_Ins(n);
        break;

    case 9:
        A_S_A_Mer(n);
        break;

    case 10:
        A_S_A_Qui(n);
        break;

    case 11:
        D_S_A_Sel(n);
        break;

    case 12:
        D_S_A_Bub(n);
        break;

    case 13:
        D_S_A_Ins(n);
        break;

    case 14:
        D_S_A_Mer(n);
        break;

    case 15:
        D_S_A_Qui(n);
        break;

    default:
        printf("Please select a valid option.\n");
        break;

    }
     printf("\nDo you want to continue? Press 1 to continue, Press 0 to exit.\n");
     scanf("%d", &choice);
    }while(choice!=0);

return 0;
}
