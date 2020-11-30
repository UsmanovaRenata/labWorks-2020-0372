#include <iostream>

int Sum(char* word) {
	int sum = 0;
	for (int i = 0; i < (int)strlen(word); i++) {
		sum = sum + int(word[i]);
	}
	return sum;
}


void Sort(char words[25][15], int words_counter) {
	char temp[15];
	for (int i = 0; i < words_counter; i++) {
		for (int j = i + 1; j < words_counter; j++) {
			strcpy_s(temp, 15, words[i]);
			if (Sum(temp) > Sum(words[j])) {
				strcpy_s(words[i], 15, words[j]);
				strcpy_s(words[j], 15, temp);
			}
		}
	}
}



int main() {
	char sentence[101];
	char split[25][15];


	std::cout << "Enter your sentence : (max 100 symbols and 25 words) ";
	std::cin.getline(sentence, 101);



	int indx_word = 0, indx_letter = 0;
	for (int i = 0; i < (int)strlen(sentence) + 1; i++) {
		if (sentence[i] != ' ' && sentence[i] != '\0') {
			split[indx_word][indx_letter++] = sentence[i];
		}
		else {
			split[indx_word][indx_letter] = '\0';
			indx_word++;
			indx_letter = 0;
		}
	}



	Sort(split, indx_word);
	std::cout << "Result : ";
	for (int i = 0; i < indx_word; i++) {
		std::cout << split[i] << " ";
	}
	std::cout << std::endl;


	system("pause");
	return 0;
}