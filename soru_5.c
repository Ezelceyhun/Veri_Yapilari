#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000
char* removeAdjacentDuplicates(char liste[], int n) {
    char result[MAX_SIZE];
    int index = 0;   
    for (int i = 0; i < n; i++) {
        if (i == 0 || list[i] != list[i-1]) {
            result[index++] = list[i];
        }
    }   
    result[index] = '\0';   
    return strdup(result);
}
int main() {
    char liste[MAX_SIZE];
    printf("Enter a string: ");
    fgets(liste, MAX_SIZE, stdin);
    liste[strcspn(liste, "\n")] = '\0';   
    char* result = removeAdjacentDuplicates(liste, strlen(liste));    
    printf("Result: %s", result);  
    free(result);  
    return 0;
}
