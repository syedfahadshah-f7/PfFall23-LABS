#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to multiply each element by 3 and divide by 2
void multiplyAndDivide(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

// Function to create a 2D array with multiple malloc calls
int** createArrayWithMultipleMalloc(int rows, int cols) {
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        array[i] = (int*)malloc(cols * sizeof(int));
    }
    return array;
}

// Function to create a 2D array with only 2 malloc calls
int** createArrayWithSingleMalloc(int rows, int cols) {
    int** array = (int**)malloc(rows * sizeof(int*));
    int* data = (int*)malloc(rows * cols * sizeof(int));
    for (int i = 0; i < rows; ++i) {
        array[i] = data + i * cols;
    }
    return array;
}

// Function to free the dynamically allocated 2D array
void freeArray(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);
}

int main() {
    clock_t start, end;
    double cpu_time_used;


 
    int rows=20000,cols=20000;
    
        // Timing for array with multiple malloc calls
        int** array1 = createArrayWithMultipleMalloc(rows, cols);
        start = clock();
        multiplyAndDivide(array1, rows, cols);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Multiple mallocs - Size: %dx%d, Time: %f seconds\n", rows, cols, cpu_time_used);
        freeArray(array1, rows);

        // Timing for array with single malloc calls
        int** array2 = createArrayWithSingleMalloc(rows, cols);
        start = clock();
        multiplyAndDivide(array2, rows, cols);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Single mallocs - Size: %dx%d, Time: %f seconds\n", rows, cols, cpu_time_used);
        freeArray(array2, rows);
    

    return 0;
}
