#include <stdio.h>
#include <iostream>
#include <string.h>

int main() {
    char* str = new char[255];
    int n = 0, maxn = 0, pos = 0, len;

    strcpy(str, "2134 235 23673 42 423 145 24 234 25");
    len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ')
            n++;
        if ((str[i] == ' ') || (len - i == 1)) {
            if (n > maxn) {
                pos = i - n;
                maxn = n;
            }
            n = 0;
        }
    }

    for (int i = 0; i < maxn; ++i)
        std::cout << str[i + pos];
    std::cout << std::endl;

    delete[]str;
}