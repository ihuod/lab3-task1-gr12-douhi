//
// Created by Alex Douhi 23.02.2024
//

// Implementation of m_interface.h functions

// The countLetter function iterates over each character in the given
// sentence and compares it with the specified letter. If a match 
// is found, the count is incremented. The function continues this
// process until it reaches the end of the sentence. Finally, it 
// returns the total count of occurrences of the letter in the sentence.
// Arguments:
// sentence: A null-terminated string representing the sentence in which
// to count the occurrences of the letter.
// letter: The letter to count in the sentence.
// Return Value:
// The function returns an integer value representing the number of
// occurrences of the specified letter in the sentence.

#include "m_interface.h"

int countLetter(char sentence[], char letter) {
    int count = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] == letter) {
            count++;
        }
        i++;
    }

    return count;
}