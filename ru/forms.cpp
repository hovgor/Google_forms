#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "forms.h"
int main()
{
    setlocale(LC_ALL, "ru");
    std::string user;
    bool cikl = true;
    while (cikl)
    {
        std::cout << "Прошу нaписать вы админ или студент " << std::endl;
        std::cin >> user;
        if (user == "админ" || user == "admin")
        {
            cikl = false;
            Admin x;
        }
        else if (user == "студент" || user == "student")
        {

            Student x;
        }
        else
        {
            std::cout << "такого варианта нету снова попробуйте " << std::endl;
        }
    }
    return 0;
}
