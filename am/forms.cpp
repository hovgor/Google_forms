#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "forms.h"
int main()
{
    setlocale(LC_ALL, "am");
    std::string user;
    bool cikl = true;
    while (cikl)
    {
        std::cout << "Խնդրում ենք մուտքագրել ադմին եք թե՞ ուսանող " << std::endl;
        std::cin >> user;
        if (user == "ադմին" || user == "admin")
        {
            cikl = false;
            Admin x;
        }
        else if (user == "ուսանող" || user == "usanox" || user == "student")
        {

            Student x;
        }
        else
        {
            std::cout << "նշված տարբերակը գոյություն չունի նորից փորձեք " << std::endl;
        }
    }
    return 0;
}
