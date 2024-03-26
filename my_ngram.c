#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char character;
    int letter_1 = 0;
    int letter_2 = 0;
    int letter_1_counts[26] = {0};
    int letter_2_counts[26] = {0};
    printf("Type in the letters (press Enter to submit):\n");
    while ((character = getchar()) != '\n') {
      if (isalpha(character)){
            if (isupper(character)) {
                letter_1++;
                letter_1_counts[character - 'A']++;
            } else {
                letter_2++;
                letter_2_counts[character - 'a']++;
            }
        }
    }
  printf("Lowercase letters:\n");
  for (int i = 0; i < 26; i++) {
      if(letter_2_counts[i] > 0) {
          printf("%c: %d\n", 'a' + i, letter_2_counts[i]);
      }
  }
    printf("Uppercase letters:\n");
    for (int i = 0; i < 26; i++) {
        if (letter_1_counts[i] > 0) {
            printf("%c: %d\n", 'A' + i, letter_1_counts[i]);
        }
    }
    printf("Total count of uppercase letters: %d\n", letter_1);
    printf("Total count of lowercase letters: %d\n", letter_2);
    return 0;
}

