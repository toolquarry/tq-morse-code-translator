#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct MorseCode {
    char letter;
    char code[5];
};

struct MorseCode morseAlphabet[] = {
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
};

void englishToMorse(char *englishText, char *morseCode) {
    int englishTextLength = strlen(englishText);
    int morseCodeIndex = 0;
    for (int i = 0; i < englishTextLength; i++) {
        char englishChar = toupper(englishText[i]);
        for (int j = 0; j < 36; j++) {
            if (morseAlphabet[j].letter == englishChar) {
                strcat(morseCode, morseAlphabet[j].code);
                strcat(morseCode, " ");
                morseCodeIndex += strlen(morseAlphabet[j].code) + 1;
                break;
            }
        }
    }
}

void morseToEnglish(char *morseCode, char *englishText) {
    int morseCodeLength = strlen(morseCode);
    char *codeBuffer;
    codeBuffer = strtok(morseCode, " ");
    while (codeBuffer != NULL) {
        for (int i = 0; i < 36; i++) {
            if (strcmp(morseAlphabet[i].code, codeBuffer) == 0) {
                strcat(englishText, &morseAlphabet[i].letter);
                break;
            }
        }
        codeBuffer = strtok(NULL, " ");
    }
}

int main() {
    int option;
    char inputText[100];
    char outputText[100] = "";

    printf("Morse Code Translator\n");
    printf("1. English to Morse Code\n");
    printf("2. Morse Code to English\n");
    printf("Select an option: ");
    
    scanf("%d", &option);
    getchar();

    switch (option) {
        case 1:
            printf("Enter English text: ");
            fgets(inputText, 100, stdin);

            if (inputText[strlen(inputText) - 1] == '\n') {
                inputText[strlen(inputText) - 1] = '\0';
            }

            englishToMorse(inputText, outputText);
            printf("Morse Code: %s\n", outputText);
            break;
        case 2:
            printf("Enter Morse code: ");
            fgets(inputText, 100, stdin);

            if (inputText[strlen(inputText) - 1] == '\n') {
                inputText[strlen(inputText) - 1] = '\0';
            }
    
            morseToEnglish(inputText, outputText);
            printf("English Text: %s\n", outputText);
            break;
        default:
            printf("Invalid option selected.\n");
            break;
        }

    return 0;
}