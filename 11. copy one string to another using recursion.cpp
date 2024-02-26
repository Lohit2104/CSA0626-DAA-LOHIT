#include <stdio.h>
void copyString(char *source, char *destination, int index) {
    if (source[index] == '\0') {
        destination[index] = '\0';
        return;
    }
    destination[index] = source[index];
    copyString(source, destination, index + 1);
}
int main() {
    char source[100], destination[100];
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);
    int i = 0;
    while (source[i] != '\0') {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
        i++;
    }
    copyString(source, destination, 0);
    printf("Copied String: %s\n", destination);
    return 0;
}

