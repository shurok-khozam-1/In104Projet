#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

// Structure to hold user data
typedef struct {
    char name[50];
} User;

// Global variables
User users[MAX_USERS];
int adjacencyMatrix[MAX_USERS][MAX_USERS]; // Friendship strength
int numUsers = 0;

// Function to initialize adjacency matrix
void initializeAdjacencyMatrix() {
    for (int i = 0; i < MAX_USERS; i++) {
        for (int j = 0; j < MAX_USERS; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

// Function to read users and their friendships from a file
void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }
    printf("Reading users from file...\n");

    // TODO: Continue the implementation...

    fclose(file);
}

// TODO: Continue the implementation...

int main() {
    initializeAdjacencyMatrix();
    readFromFile("social_network.txt");
	
    // TODO: Continue the implementation...

    return 0;
}
