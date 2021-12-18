// codewars_8kyu.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Multiply
int multiply(int a, int b)
{
    return a * b;
}

//Basic Mathematical Operations
int basicOp(char op, int val1, int val2) {
    if (op == '+') {
        return val1 + val2;
    }
    if (op == '-') {
        return val1 - val2;
    }
    if (op == '*') {
        return val1 * val2;
    }
    if (op == '/') {
        return val1 / val2;
    }
}

//Grasshopper - Summation
int summation(int num) {
    int sum = 0;
    for (int i = 1;i <= num;++i) {
        sum += i;
    }
    return sum;
}

//Century From Year
int centuryFromYear(int year)
{
    if (year > 100 && year % 100 == 0) {
        return year / 100;
    }
    else {
        return year / 100 + 1;
    }
    if (year >= 1 && year <= 100) {
        return 1;
    }
}

//Even or Odd
#include <string>

std::string even_or_odd(int number)
{
    if (number % 2 == 0) {
        return "Even";
    }
    else {
        return "Odd";
    }
}

//Opposite number
int opposite(int number)
{
    return -number;
}

//Convert boolean values to strings 'Yes' or 'No'.
#include <string>

std::string bool_to_word(bool value)
{
    if (value == true) {
        return "Yes";
    }
    else {
        return "No";
    }
}

//Twice as old
int twice_as_old(int dad, int son) {
    return abs(dad - 2 * son);
}

//Reversed Strings
#include <string>
using namespace std;

string reverseString(string str)
{
    string nstr = "";
    for (int i = str.size() - 1;i >= 0;i--) {
        nstr += str[i];
    }
    return nstr;
}

//Remove String Spaces
std::string no_space(std::string x)
{
    std::string nx = "";
    for (int i = 0;i < x.size();++i) {
        if (x[i] != ' ') {
            nx += x[i];
        }
    }
    return nx;
}

//Convert a Number to a String!
#include <string>

std::string number_to_string(int num) {
    std::string str = std::to_string(num);
    return str;
}



