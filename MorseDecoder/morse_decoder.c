#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *strcat(char *dest, const char *src);

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

char *decode_morse(const char* morse_code) {

    char *msg = (char*)calloc(100, sizeof(char));
    char wrd[64] = "";
    int spaces = 0;
    char c[] = "a";
    bool whitespace = true;


    // iterate through ciphertext
    while (*morse_code != '\0')
    {

      // ignore white space
      if (*morse_code == ' ' && whitespace)
      {
        ++morse_code;
        continue;
      }
      else whitespace = false;

      // build word
      if (*morse_code != ' ')
      {
        c[0] = *morse_code;
        strncat(wrd, c, sizeof(wrd) - 1);
        spaces = 0;
      }

      // handle spaces
      else
      {
        ++spaces;

        // complete word
        if (spaces == 1)
        {
          for (int i = 0; i < 55; i++)
          {
            if (strcmp(wrd, *(morse + i)) == 0)
            {
              strncat(msg, *(ascii + i), sizeof(msg) - 1);
              memset(wrd, 0, sizeof(wrd));
            }
          }

        // add space
        }
        else if (spaces == 3)
        {
          strncat(msg, " ", sizeof(msg) - 1);
          spaces = 0;
        }
      }

      ++morse_code;
    }

    // add final char
    for (int i = 0; i < 55; i++)
    {
      if (strcmp(wrd, *(morse + i)) == 0)
      {
        strncat(msg, *(ascii + i), sizeof(msg) - 1);
        memset(wrd, 0, sizeof(wrd));
      }
    }

    // remove trailing space
    for (int i = strlen(msg) - 1; ; i--)
    {
      if (strcmp(msg + i, " ") == 0)
      {
        *(msg + strlen(msg) - 1) = '\0';
      }
      else break;
    }

    return msg;

}
