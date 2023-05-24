#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct Data {
    char* name;
    char* address;
};

void updateData(struct Data* data, const char* name, const char* address) {
    // Allocate memory for name and address members
    data->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
    data->address = (char*)malloc((strlen(address) + 1) * sizeof(char));

    // Copy name and address strings using strcpy
    strcpy(data->name, name);
    strcpy(data->address, address);
}

void freeData(struct Data* data) {
    // Free the allocated memory
    free(data->name);
    free(data->address);
}

int main() {
    struct Data userData;
    char name[MAX_NAME_LENGTH];
    char address[MAX_NAME_LENGTH];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove trailing newline character

    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = '\0';  // Remove trailing newline character

    updateData(&userData, name, address);

    // Print the updated data
//     printf("Name: %s\n", userData.name);
//     printf("Address: %s\n", userData.address);
    printf("\n%s lives at %s\n", userData.name, userData.address);

    freeData(&userData);

    return 0;
}
