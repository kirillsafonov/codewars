// codewars_7kyu.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Are the numbers in order?
bool isAscOrder(std::vector<int>arr)
{
	int size;
	size = arr.size();
	bool result = true;
	for (int i = 0;i < size - 1;i++) {
		if (arr.at(i) > arr.at(i + 1)) {
			result = false;
		}

	}
	return result;
}

//Reverse words
std::string reverse_words(std::string str)
{
	std::string out;
	std::string a_word;
	for (char c : str) {
		if (c != ' ') {
			a_word = c + a_word;
		}
		if (c == ' ') {
			out = out + a_word;
			a_word = "";
			out = out + " ";
		}
	}
	out = out + a_word;
	return out;
}

//Get the Middle Character
std::string get_middle(std::string input)
{
	std::string nstr;
	if (input.size() % 2 != 0) {
		nstr = input[input.size() / 2];
		return nstr;
	}
	else {
		nstr = input[input.size() / 2 - 1];
		nstr += input[input.size() / 2];
		return nstr;
	}
}

//You're a square!
bool is_square(int n)
{
	if (n < 0) {
		return false;
	}
	int i = 0;
	for (i = 0; i * i < n; ++i);
	if (i * i == n) {
		return true;
	}
	else {
		return false;
	}
}

//Exes and Ohs
bool XO(const std::string& str)
{
	int x = 0, o = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str.at(i) == 'x' || str.at(i) == 'X') {
			x++;
		}
		if (str.at(i) == 'o' || str.at(i) == 'O') {
			o++;
		}
	}
	if (x == o) {
		return true;
	}
	else {
		return false;
	}
}

//Complementary DNA
#include <string>
std::string DNAStrand(const std::string& dna) {
	std::string result = "";
	for (int i = 0;i < dna.size();++i) {
		if (dna.at(i) == 'A') {
			result += 'T';
		}
		if (dna.at(i) == 'T') {
			result += 'A';
		}
		if (dna.at(i) == 'C') {
			result += 'G';
		}
		if (dna.at(i) == 'G') {
			result += 'C';
		}
	}
	return result;
}

//Isograms
bool is_isogram(std::string str) {
	std::vector <char> alpt;
	for (int i = 0; i < str.size(); ++i) {
		if ((int)str[i] < 97) str[i] += 32;
		alpt.push_back(str[i]);
	}
	for (int i = 0; i < alpt.size(); ++i) {
		for (int j = i + 1; j < alpt.size(); ++j) {
			if (alpt[i] == alpt[j]) return false;
		}
	}
	return true;
}

//Anagram Detection
#include <string>

bool isAnagram(std::string test, std::string original) {
	if (test.size() != original.size()) {
		return 0;
	}
	for (int i = 0;i < test.size();++i) {
		test.at(i) = tolower(test.at(i));
		original.at(i) = tolower(original.at(i));
	}
	std::sort(test.begin(), test.end());
	std::sort(original.begin(), original.end());
	if (test == original) {
		return true;
	}
	else {
		return false;
	}
}

//Sum of two lowest positive integers
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
	long min1, min2;
	if (numbers.at(0) < numbers.at(1)) {
		min1 = numbers.at(0);
		min2 = numbers.at(1);
	}
	else {
		min1 = numbers.at(1);
		min2 = numbers.at(0);
	}
	for (int i = 0;i < numbers.size();++i) {
		if (numbers.at(i) < min1) {
			min2 = min1;
			min1 = numbers.at(i);
		}
		else {
			if (numbers.at(i) > min1 && numbers.at(i) < min2) {
				min2 = numbers.at(i);
			}
		}
	}
	return min1 + min2;
}

//Shortest Word
#include <string>
int find_short(std::string str)
{
	int min = 9999;
	int size = 0;
	for (char c : str) {
		if (c == ' ') {
			if (size < min) {
				min = size;
			}
			size = 0;
		}
		else {
			++size;
		}
	}
	if (size < min) {
		min = size;
	}
	return min;
}
