#include <iostream>



void Sort(char** words, int words_counter) {
	char* test = words[0];
	for (int i = 0; i < words_counter; i++) {
		for (int j = i + 1; j < words_counter; j++) {
			test = words[i];
			if ((int)strlen(test) > (int)strlen(words[j])) {
				words[i] = words[j];
				words[j] = test;
			}
		}
	}
}

int main() {
	char sen[100];


	std::cout << "Enter your sentence : ";
	std::cin.getline(sen, 100);


	int words_counter = 1;
	for (int i = 0; i < (int)strlen(sen); i++) {
		if (sen[i] == ' ') {
			words_counter++;
		}
	}

	int index = 0;
	//Create char array of char arrays to store splitted string
	char** words = new char* [words_counter];
	for (int i = 0; i < words_counter; i++) {
		words[index++] = new char[100];
	}


	int word = 0;
	int letter = 0;
	for (int i = 0; i <= (int)strlen(sen); i++) {
		if (sen[i] == ' ') {
			words[word][letter] = '\0';
			word++;
			letter = 0;
		}
		else {
			words[word][letter++] = sen[i];
		}
	}


	Sort(words, words_counter);
	std::cout << "Result : ";
	for (int i = 0; i < words_counter; i++) {
		std::cout << words[i] << " ";
	}
	std::cout << std::endl;


	system("pause");
	return 0;
}