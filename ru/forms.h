#include <vector>
#include <string>
#include <iostream>
#include <fstream>
struct harcer
{
	harcer(std::string &question, std::string *arr, int is_true)
	{
		this->question = question;
		for (int i = 0; i < 4; ++i)
		{
			patasxan[i] = arr[i];
		}
		this->is_true = is_true;
	}
	std::string question;
	std::string patasxan[4];
	int is_true;
};
std::vector<harcer *> questions;

class Admin
{
public:
	Admin()
	{

		std::ofstream out;

		std::cin.get();
		std::cout << "выбрать тему : ";
		std::getline(std::cin, name);
		out.open(name + ".txt", std::ofstream::app);
		std::cout << "укажите количество вопросов: ";
		std::cin >> harceri_qanak;
		for (int i = 0; i < harceri_qanak; ++i)
		{
			set_question();
		}
		if (out.is_open())
		{

			for (int i = 0; i < questions.size(); ++i)
			{
				out << questions[i]->question << std::endl;
				for (int j = 0; j < 4; ++j)
				{
					out << questions[i]->patasxan[j] << std::endl;
				}
				out << questions[i]->is_true << std::endl;
			}
		}
	}

	std::vector<harcer *> get_vector()
	{
		return questions;
	}

private:
	void set_question()
	{
		std::string question;
		std::string answer[4];
		int is_true;
		std::cin.get();
		std::cout << "введите вопрос : ";
		std::getline(std::cin, question);
		for (int i = 0; i < 4; ++i)
		{
			std::cout << "введите ответ: ";
			std::getline(std::cin, answer[i]);
		}
		std::cout << "введите правильный ответ: ";
		std::cin >> is_true;
		questions.push_back(new harcer(question, answer, is_true));
	}

private:
	int harceri_qanak;
	std::string name;
};

class Student
{
public:
	Student()
	{
		std::string line;
		std::string fileName;
		std::string answer;
		std::cout << "выбрать тему: ";
		std::cin >> fileName;
		std::ifstream in(fileName + ".txt");
		int count = 0;
		int bal = 0;

		if (in.is_open())
		{
			while (getline(in, line))
			{
				count++;
				if (count == 6)
				{
					count = 0;
					std::cin >> answer;
					if (answer == line)
					{
						bal += 10;
					}
					continue;
				}
				std::cout << line << std::endl;
			}
		}

		std::cout << "количество набранных вами очков ֊» " << bal << " " << std::endl;

		in.close();
	}
};
