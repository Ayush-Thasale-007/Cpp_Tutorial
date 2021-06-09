#include <iostream>
// Header file to work with string
#include <cstring>

using namespace std;

int main()
{
    char str[] = "Hello";
    // To find length of a string
    cout << strlen(str) << endl;

    // Concatenating string
    // Syntax -> strcat(dest, source, length)
    // So basically destined string is rewritten to final result
    char good[10] = "Good ";
    char morn[10] = "Morning";
    cout << good << endl;

    strcat(good, morn);

    cout << good << endl;

    // Copying string
    char copied[50];
    strcpy(copied, good);

    cout << copied << endl;

    // Substring
    char lrn[10] = "Learning";
    char ern[10] = "earn";
    // Syntax -> strstr(main, substring)
    // Finds the string and gives results till end
    // Better to use it in if-else statement
    if (strstr(lrn, ern) != NULL)
        cout << strstr(lrn, ern) << endl;
    else
        cout << "Not Found" << endl;

    // strcmp(str1, str2)
    // Compares string in Dictionary manner
    // Suppose str1 = Apple, str2 = Banana
    // Then it will return -1 as Apple comes b4 Banana in dict
    // Compares according to the ASCII order
    // Will return 0 if both strings are same
    char tone[50] = "Apple";
    char ttwo[50] = "Banana";
    char equal[50] = "Apple";

    cout << strcmp(tone, ttwo) << endl;
    cout << strcmp(tone, equal) << endl;
    cout << strcmp(ttwo, tone) << endl;

    // strtol -> String to Long
    // syntax -> strtol(char_arr, EOL(NULL), base (10 for Decimal))
    char cha_nums[] = "123456";
    long nums = strtol(cha_nums, NULL, 10);
    cout << nums << endl;

    // strtok(char_arr, token/delimeter)
    // String Tokeniser
    char exper[50] = "x=35;y=77;z=88";
    // Follow a procedure
    char *token = strtok(exper, "=;");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
    }

    return 0;
}