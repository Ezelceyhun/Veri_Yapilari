#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

char* removeAdjacentDuplicates(char arr[], int n) {
    char result[MAX_SIZE];
    int index = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            result[index++] = arr[i];
        }
    }
    
    result[index] = '\0';
    
    return strdup(result);
}

int main() {
    char arr[MAX_SIZE];
    printf("Enter a string: ");
    fgets(arr, MAX_SIZE, stdin);
    arr[strcspn(arr, "\n")] = '\0'; // Remove trailing newline
    
    char* result = removeAdjacentDuplicates(arr, strlen(arr));
    
    printf("Result: %s", result);
    
    free(result);
    
    return 0;
}
