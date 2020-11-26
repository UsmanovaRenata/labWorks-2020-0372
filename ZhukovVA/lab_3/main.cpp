#include <iostream>

//Maximum words in sentence and maximum letters per word
const int LETTERS = 16, WORDS = 20;

int getCodesSum(char* word) {
	int sum = 0;
	for (int i = 0; i < (int)strlen(word); i++) {
		sum += int(word[i]);
	}
	return sum;
}

void sortByCodes(char words[WORDS][LETTERS], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			char temp[LETTERS];
			strcpy_s(temp, LETTERS, words[i]);
			if (getCodesSum(temp) > getCodesSum(words[j])) {
				strcpy_s(words[i], LETTERS, words[j]);
				strcpy_s(words[j], LETTERS, temp);
			}
		}
	}
}

int main() {
	char text[301];
	char split[WORDS][LETTERS];
	int words = 0, letter = 0;

	std::cout << "Type your sentence (300 symbols max, 20x15 words): ";
	std::cin.getline(text, 301);

	//Split the string
	for (int i = 0; i < (int)strlen(text) + 1; i++) {
		if (text[i] != ' ' and text[i] != '\0') {
			split[words][letter++] = text[i];
		}
		else {
			split[words][letter] = '\0';
			words++;
			letter = 0;
		}
	}

	//Sort words by its sum of codes with selection algorithm
	sortByCodes(split, words);

	//Print out result string
	std::cout << "Result string: ";
	for (int i = 0; i < words; i++) {
		std::cout << split[i] << " ";
	}

	std::cout << std::endl;

	system("pause");
	return 0;
}