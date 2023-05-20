// InheritanceBaseClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>

class People {
public:
    People();
    People(char* Name, int Age);
    People(const People& obj);
    ~People();

protected:
    char* m_Name = nullptr;
    int m_Age = 0;
};

class Student : public People{
public:
    Student();
    Student(char* Name, int Age, int Grade);
    Student(const Student& obj);
    void StudentInfo(char* Name, int Age, int Grade);
    ~Student();

private:
    int m_Grade = 0;
};

class Teacher : public People {
public:
    Teacher();
    Teacher(char* Name, int Age,  char* Proffesion);
    Teacher(const Teacher& obj);
    void TeacherInfo(char* Name, int Age, char* Profession);
    ~Teacher();

private:
    char* m_Profession = nullptr;

};

People::People()
{
    m_Name = new char;
}

Student::Student()
{
    m_Name = new char;
}

Teacher::Teacher()
{
    m_Name = new char;
    m_Profession = new char;
}

People::People(char* Name, int Age) {
    m_Name = Name;
    m_Age = Age;
   
}

Student::Student(char* Name, int Age, int Grade) {
    m_Name = Name;
    m_Age = Age;
    m_Grade = Grade;
}

Teacher::Teacher(char* Name, int Age,  char* Profession)
{
    m_Name = Name;
    m_Profession = Profession;
    m_Age = Age;
}

void Student::StudentInfo(char* Name, int Age,  int Grade) {
    std::cout << "Student Name is "<<Name<<"\n";
    std::cout << "Student Age is " << Age << "\n";
    std::cout << "Student Grade is " << Grade << "\n";
}

void Teacher::TeacherInfo(char* Name, int Age, char* Profession)
{
    std::cout << "Teacher Name is " << Name << "\n";
    std::cout << "Teacher Age is " << Age << "\n";
    std::cout << "Teacher profession is " << Profession << "\n";
}

People::People(const People& obj) {
    m_Name = new char;
    *(m_Name) = *(obj.m_Name);
    m_Age = obj.m_Age;
}

Student::Student(const Student& obj)
{
    m_Name = new char;
    *(m_Name) = *(obj.m_Name);
    m_Age = obj.m_Age;
}

Teacher::Teacher(const Teacher& obj)
{
    m_Name = new char;
    m_Profession = new char;
    *(m_Name) = *(obj.m_Name);
    *(m_Profession) = *(obj.m_Profession);
    m_Age = obj.m_Age;
}

People::~People()
{
    delete[]m_Name;
    m_Name = nullptr;
}


Student::~Student()
{
    delete[]m_Name;
    m_Name = nullptr;
}

Teacher::~Teacher()
{
    delete[]m_Name;
    m_Name = nullptr;
    delete[]m_Profession;
    m_Profession = nullptr;
}

int main()
{
    int size_of_name;
    int size_of_profession;
    char* name;
    int age;
    int grade;
    char* profession;

    std::cout << "Size of Name \n";
    std::cin >> size_of_name;
    std::cout << "Size of name of profession \n";
    std::cin >> size_of_profession;
    std::cout << "Name \n";
    std::cin >> name;
    std::cout << "Age \n";
    std::cin >> age;
    std::cout << "Grade \n";
    std::cin >> grade;

  
    std::vector<People*> p;
    p.push_back(new Student);
    p.push_back(new Teacher);
   
   

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
