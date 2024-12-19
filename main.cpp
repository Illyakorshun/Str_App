#include <iostream>

using namespace std;

int main()
{
    char str[] = "Tabbing for code indentation : When programs write code, they often choose tabbing or can to format and organize the code, making it more readable.";
    for (int i = 0; i < sizeof(str); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '\t';
        }
    }

    cout << str << endl;

    return 0;
}