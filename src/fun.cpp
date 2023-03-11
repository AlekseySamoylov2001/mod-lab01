// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char* str) {
    bool isCorrect = true;
    bool isSpace = true;
    int nbWords = 0;

    for (int itStr = 0; str[itStr] != '\0'; ++itStr) {
        if (str[itStr] >= '0' && str[itStr] <= '9') {
            isCorrect = false;
        }
        if (str[itStr] != ' ') {
            isSpace = false;
        } else {
        	if (!isSpace && isCorrect) {
            ++nbWords;
            }
            isSpace = true;
            isCorrect = true;
        }
    }

    return nbWords;
}

unsigned int faStr2(const char* str) {
    bool isSpace = true;
    bool isIncorrect = false;
    int nbWords = 0;

    for (int itStr = 0; str[itStr] != '\0';) {
        if (str[itStr] < 'A' || str[itStr] > 'Z') {
            while (str[itStr] != ' ') {
                if (str[itStr] == '\0') {
                    break;
                }
                ++itStr;
            }

            continue;
        }

        if (str[itStr] != ' ') {
            isSpace = false;
            if (str[itStr] < 'a' || str[itStr] > 'z') {
                isIncorrect = true;
            }
        }
        else {
            if (!isSpace && !isIncorrect) {
                ++nbWords;
            }
            isSpace = true;
            isIncorrect = false;;
        }

        ++itStr;
    }

    return nbWords;
}

unsigned int faStr3(const char* str) {
    int nbWords = 0;
    double lenght = 0;
    
    for (int itStr = 0; str[itStr] != '\0';) {
        if (str[itStr] != ' ') {
            ++nbWords;
            while (str[itStr] != ' ') {
                if (str[itStr] == '\0') {
                    break;
                }
                ++lenght;
                ++itStr;
            }
        }
        
        ++itStr;
    }
    
    if (nbWords > 0) {
        lenght /= nbWords;
    }
    return static_cast<int>(lenght + 0.5);
}
