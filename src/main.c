//
// Created by Alex Douhi 23.02.2024
//

// Client file

#include <stdio.h>
#include <string.h>
#include "m_interface.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Error: there must be 5 arguments.\n");
        return 1;
    }

    char *sentence1 = argv[1];
    char *sentence2 = argv[2];
    char *sentence3 = argv[3];
    char letter = argv[4][0];

    int count1 = countLetter(sentence1, letter);
    int count2 = countLetter(sentence2, letter);
    int count3 = countLetter(sentence3, letter);

    printf("The number of '%c' in the first sentence: %d\n", letter, count1);
    printf("The number of '%c' in the second sentence: %d\n", letter, count2);
    printf("The number of '%c' in the third sentence: %d\n", letter, count3);

    int totalCount = count1 + count2 + count3;
    printf("The total number of '%c' in three sentences: %d\n", letter, totalCount);

    return 0;
}