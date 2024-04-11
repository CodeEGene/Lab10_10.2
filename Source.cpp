#include<iostream>

using namespace std; 

int count_letters(string str);
int count_words(string str);

int main() {

	cout << count_words("I don't give a Holstein.");

	return 0;
}

int count_letters(string str) {
	int count = 0;
	for (const auto& i : str) {
		switch(i){
			case 'a':
				count++;
				break;
			case 'b':
				count++;
				break;
			case 'c':
				count++;
				break;
			case 'd':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'f':
				count++;
				break;
			case 'g':
				count++;
				break;
			case 'h':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'j':
				count++;
				break;
			case 'k':
				count++;
				break;
			case 'l':
				count++;
				break;
			case 'm':
				count++;
				break;
			case 'n':
				count++;
				break;
			case 'o':
				count++;
				break;
			case 'p':
				count++;
				break;
			case 'q':
				count++;
				break;
			case 'r':
				count++;
				break;
			case 's':
				count++;
				break;
			case 't':
				count++;
				break;
			case 'u':
				count++;
				break;
			case 'v':
				count++;
				break;
			case 'w':
				count++;
				break;
			case 'x':
				count++;
				break;
			case 'y':
				count++;
			case 'z':
				count++;
				break;
			case 'A':
				count++;
				break;
			case 'B':
				count++;
				break;
			case 'C':
				count++;
				break;
			case 'D':
				count++;
				break;
			case 'E':
				count++;
				break;
			case 'F':
				count++;
				break;
			case 'G':
				count++;
				break;
			case 'H':
				count++;
				break;
			case 'I':
				count++;
				break;
			case 'J':
				count++;
				break;
			case 'K':
				count++;
				break;
			case 'L':
				count++;
				break;
			case 'M':
				count++;
				break;
			case 'N':
				count++;
				break;
			case 'O':
				count++;
				break;
			case 'P':
				count++;
				break;
			case 'Q':
				count++;
				break;
			case 'R':
				count++;
				break;
			case 'S':
				count++;
				break;
			case 'T':
				count++;
				break;
			case 'U':
				count++;
				break;
			case 'V':
				count++;
				break;
			case 'W':
				count++;
				break;
			case 'X':
				count++;
				break;
			case 'Y':
				count++;
				break;
			case 'Z':
				count++;
				break;

			default:
				break;
		}
	}

	return count;
}
int count_words(string str) {
	int count = 0;
	for (const auto& i : str) {
		if (i == ' ') {
			count++;
		}
	}
	count++;
	return count;
}