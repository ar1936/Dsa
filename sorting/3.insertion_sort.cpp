#include <cstdio>
#include <cstdlib>

void insertionSort(int arr[], int length) {
      int i, j, tmp;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
}

int displayArray( int arr[], int length ) {
    printf("{");
    for( int i=0; i<length; i++ )
        printf("%d, ", arr[i] );
    printf("}\n");
}

int main( int argc, char* argv[] )
{
    int array[10] = { 2,1,7,4,3,5,9,6,8,0 };
    size_t length = sizeof(array)/sizeof(int);
    displayArray( array, length ); 
    insertionSort( array, length );
    displayArray( array, length ); 
}
