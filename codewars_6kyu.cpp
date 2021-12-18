// codewars_6kyu.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Bit Counting
unsigned int countBits(unsigned long long n) {
    long long x = n;
    int sumbit = 0;
    while (x > 0) {
        sumbit += x % 2;
        x = x / 2;
    }
    return sumbit;
}

//Does my number look big in this?
#include <cmath>
using namespace std;
bool narcissistic(int value) {
    int sum = 0;
    int n = value;
    int stn = 0;
    while (n != 0) {
        ++stn;
        n = n / 10;
    }
    n = value;
    while (n != 0) {
        sum += pow(n % 10, stn);
        n = n / 10;
    }
    if (sum == value) {
        return true;
    }
    else {
        return false;
    }
}

//Sum of Digits / Digital Root
int digital_root(int n) {
    int rsum = 0;
    while (n > 9) {
        while (n > 0) {
            rsum += n % 10;
            n = n / 10;
        }
        n = rsum;
        rsum = 0;
    }
    return n;
}

//Create Phone Number
#include <string>

std::string createPhoneNumber(const int arr[10]) {
    std::string number = "";
    number += "(";
    number += std::to_string(arr[0]);
    number += std::to_string(arr[1]);
    number += std::to_string(arr[2]);
    number += ")";
    number += " ";
    number += std::to_string(arr[3]);
    number += std::to_string(arr[4]);
    number += std::to_string(arr[5]);
    number += "-";
    number += std::to_string(arr[6]);
    number += std::to_string(arr[7]);
    number += std::to_string(arr[8]);
    number += std::to_string(arr[9]);
    return number;
}

//Find the missing term in an Arithmetic Progression
static long findMissing(std::vector<long> list) {
    long d = 0;
    if (std::abs(list[1] - list[0]) > std::abs(list[2] - list[1])) {
        d = list[2] - list[1];
        return list[0] + d;
    }
    else {
        d = list[1] - list[0];
        for (unsigned long i = 1;i < list.size();++i) {
            if (list[i] != list[i - 1] + d) {
                return list[i - 1] + d;
            }
        }
    }
}

//Count the smiley faces!
int countSmileys(std::vector<std::string> arr)
{
    int count = 0;
    for (int i = 0;i < arr.size();++i) {
        if (arr[i].size() == 2) {
            if ((arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == ')' || arr[i][1] == 'D')) {
                ++count;
            }
        }
        if (arr[i].size() == 3) {
            if ((arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == '-' || arr[i][1] == '~') && (arr[i][2] == ')' || arr[i][2] == 'D')) {
                ++count;
            }
        }
    }
    return count;
}

//1/n- Cycle
int cycle(int n) {
    if (n % 2 == 0 || n % 5 == 0) return -1;
    int a = 1;
    int counter = 0;
    while ((a != 1) || (counter == 0)) {
        a = a * 10;
        a = a % n;
        ++counter;
    }
    return counter;
}

//A disguised sequence (I)
#include <cmath>
class HiddenSeq
{
public:
    static unsigned long long fcn(int n) {
        return std::pow(2, n);
    }
};

//Duplicate Encoder
#include <string>
std::string duplicate_encoder(const std::string& word) {
    std::string result;
    for (int i = 0; i < word.size(); ++i) {
        if ((int)word[i] >= 65 & (int)word[i] <= 90) {
            if (std::count(word.begin(), word.end(), word[i]) + std::count(word.begin(), word.end(), char(word[i] + 32)) == 1)
                result += "(";
            else
                result += ")";
            continue;
        }
        if ((int)word[i] >= 97 & (int)word[i] <= 122) {
            if (std::count(word.begin(), word.end(), word[i]) + std::count(word.begin(), word.end(), char(word[i] - 32)) == 1)
                result += "(";
            else
                result += ")";
            continue;
        }
        if (std::count(word.begin(), word.end(), word[i]) == 1)
            result += "(";
        else
            result += ")";

    }
    return result;
}

//Tribonacci Sequence
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    result = signature;
    result.resize(n);
    for (int i = 3;i < n;++i) {
        result[i] = result[i - 1] + result[i - 2] + result[i - 3];
    }
    return result;
}