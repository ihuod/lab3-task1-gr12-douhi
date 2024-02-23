//
// Created by Alex Douhi 23.02.2024
//

#ifndef M_INTERFACE_H
#define M_INTERFACE_H

// Functions listed in this file are used in main.c client file
// Implementation of these functions is in m_server.c server file

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

int countLetter(char sentence[], char letter);

#endif