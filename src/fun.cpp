// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char* str) {
	bool isSpace = true;
	int nbWords = 0;

	for (int itStr = 0; str[itStr] != '\0';) {
		if (str[itStr] >= '0' && str[itStr] <= '9') {
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
		}
		else {
			if (!isSpace) {
				++nbWords;
				isSpace = true;
			}
		}

		++itStr;
	}

	return nbWords;
}

unsigned int faStr2(const char* str) {
	bool isSpace = true;
	bool isIncorrect = true;
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
				isSpace = true;
				isSpace = false;
			}
		}

		++itStr;
	}

	return nbWords;
}

unsigned int faStr3(const char *str) {
    return 0;
}
