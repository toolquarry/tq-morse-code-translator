# Morse Code Translator

This program is a simple Morse code translator that can translate English text to Morse code and vice versa.

## Prerequisite

- [GCC](https://gcc.gnu.org/) (GNU Compiler Collection)

  - #### Install GCC on Windows:

    1. Download the GCC compiler from the official website (https://sourceforge.net/projects/mingw-w64/).
    2. Choose the appropriate version of GCC based on your operating system (32-bit or 64-bit) and download the installer.
    3. Run the installer and follow the instructions to complete the installation process.
    4. Once the installation is complete, you should have GCC installed on your Windows machine.

  - #### Install GCC on Linux:

    1. Open your Linux terminal and type the following command to update the package list:

       ```sql
       sudo apt-get update
       ```

    2. Next, type the following command to install GCC:

       ```arduino
       sudo apt-get install build-essential
       ```

    3. Once the installation is complete, you can verify that GCC is installed by typing the following command:

       ```css
       gcc --version
       ```

       This will display the version of GCC installed on your Linux machine.

## Installation

1. Clone this repository
2. Go to project directory `cd morse-code-translator`
3. Compile with `gcc src/main.c -o bin/morse-code-translator`, it will create an executable file named `morse-code-translator` on `/bin` directory
4. Run the program `./bin/morse-code-translator`

## Usage

To use the program, simply follow these steps:

1. Run the program.
2. Choose the option to translate either from English to Morse code or from Morse code to English.
3. Enter the text to be translated.
4. The program will display the translated text.

## Features

Translates English text to Morse code.
Translates Morse code to English text.

## How it works

The program uses a struct to store the English letters and their corresponding Morse code. When translating English text to Morse code, the program loops through each character in the text and searches for the corresponding Morse code in the struct. The program then concatenates the Morse code for each character to create the translated text.

When translating Morse code to English text, the program uses the strtok function to separate each Morse code character. The program then searches for the corresponding English letter in the struct and concatenates it to create the translated text.

## Sample Output

```bash
Morse Code Translator
1. English to Morse Code
2. Morse Code to English
Select an option: 1
Enter English text: Hello World
Morse Code: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
```

```bash
Morse Code Translator
1. English to Morse Code
2. Morse Code to English
Select an option: 2
Enter Morse code: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
English Text: HELLO WORLD

```

## Author

This program was created by [Adam Canray](https://github.com/adamcanray) at [ToolQuarry](https://github.com/toolquarry).
