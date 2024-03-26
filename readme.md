## N-Gram Counter
Overview
This program, N-Gram Counter, is designed to count the occurrences of n-grams in a given text or set of texts. An n-gram is a contiguous sequence of n items from a sample of text or speech, where the items can be characters, words, phonemes, syllables, or other units depending on the application.

## Usage
To use the N-Gram Counter, compile the provided source code (see Compilation section below) and run the executable with the desired text inputs. The program accepts one or more strings as arguments and counts the occurrences of n-grams for each input string.

Syntax
''' 

./ngram text [text2, text3, ...]
'''
## Example
yaml
'''
$ ./ngram "The quick brown fox jumps over the lazy dog."
Unigram:
T: 2
h: 2
e: 3
...
Bigram:
Th: 2
he: 2
e : 2
...
Trigram:
The: 1
he : 1
e q: 1
'''
...
Technical Details
Language: C
Dependencies: None
Compilation: The code can be compiled using any C compiler. A Makefile is provided for convenience.
Supported Functions:
printf(3)
write(2)
Unsupported Functions:
Any functions or system calls not listed above
Multiline macros
Including another .c file
Macros with logic (e.g., while, if, variables)
Compiler Flags: -Wall -Wextra -Werror
Project Structure
ngram.c: Contains the main implementation of the N-Gram Counter program.
Makefile: Includes rules for compiling the program and cleaning the directory.
Compilation
To compile the program, run the following command in the terminal:

To clean the directory (remove object files and executables), run:

Contributions to this project are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue on GitHub or submit a pull request.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Feel free to customize this template as needed for your specific project.