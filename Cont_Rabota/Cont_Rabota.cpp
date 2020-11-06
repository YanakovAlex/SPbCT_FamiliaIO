#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;




class Timetable
{
private:
    // ИНИЦИАЛИЗАЦИЯ ПЕРЕМЕННЫХ
    int day_of_the_week; 
    string time;
    string name_of_lesson;
    int auditorium;

public:
    Timetable(int d, string v, string n, int au) :day_of_the_week(d), time(v), name_of_lesson(n), auditorium(au) 
    {

    }




    void file()
    {

        setlocale(LC_ALL, "Russian");
        ofstream files("a.txt", ios::app);
        if (!files.is_open()) 
        {
            cout << "Нет файла";
        }
        files << day_of_the_week << " ";
        files << "'" << time << "'" << " ";
        files << name_of_lesson << " ";
        files << auditorium << " ";
        files << endl;
        files.close();
    }





    friend ostream& operator<<(ostream& so, Timetable& r) 
    {
        setlocale(LC_ALL, "Russian");
        so << r.day_of_the_week << r.time << r.name_of_lesson << r.auditorium;
        return so;
    }
    friend istream& operator>>(istream& so, Timetable& r) 
    {
        setlocale(LC_ALL, "Russian");
        so >> r.day_of_the_week >> r.time >> r.name_of_lesson >> r.auditorium;
        return so;
    }





    bool remove(const char* filename, size_t index)
    {
        vector<string> vec;
        ifstream file(filename);
        if (file.is_open())
        {
            string str;
            while (getline(file, str))
                vec.push_back(str);
            file.close();
            if (vec.size() < index)
                return false;
            vec.erase(vec.begin() + index);
            ofstream outfile(filename);
            if (outfile.is_open())
            {
                copy(vec.begin(), vec.end(),
                    ostream_iterator<string>(outfile, "\n"));
                outfile.close();
                return true;
            }
            return false;
        }
        return false;
    }






    void output()
    {
        string line;
        ifstream files("a.txt");
        if (files.is_open())
        {
            while (!files.eof())
            {
                getline(files, line);
                cout << line << endl;
            }
            files.close();
        }
    }





    int search() 
    {
        ifstream fin("a.txt");
        if (!fin.is_open()) 
        {
            cout << " Ошибка при открытии файла для чтения \n";
        } 
        else
        {
            cout << " Введите порядковый номер дня недели: ";
            char first_letter;
            string line;
            cin >> first_letter;
            while (fin.peek() != EOF) //       ПОИСК СТРОКИ ПО ПЕРВОМУ СИМВОЛУ                                    
            {
                while (fin.peek() == first_letter) {
                    getline(fin, line);
                    cout << line << endl;
                }
                fin.ignore(150, '\n'); //      ПРОПУСК СТРОКИ, ЕСЛИ ПЕРВЫЙ СИМВОЛ НЕ СОВПАДАЕТ                                     
            }
            fin.close();
        }

        system("pause");
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, ".1251");
    int n, a, m;


    cout << " Что вы хотите сделать? \n 1 - Добавление записи в файл \n 2 - Удаление записи из файла \n" 
                                      " 3 - Вывод полного расписания \n 4 - Вывод расписания за конкретный день \n" 
                                      " Ваш выбор: "; cin >> a;


    Timetable TT(1, "'20:20'", "Literature", 666);
    switch (a) {


    case 1:
        cout << " Введите количество изменений, которые будут внесены в файл: "; cin >> n;
        for (int i = 0; i < n; i++) 
        {
            cin >> TT;
            TT.file();
        }
        break;


    case 2:
        TT.output();
        cout << " Укажите порядковый номер записи, начиная с нуля: "; cin >> m;
        TT.remove("a.txt", m);
        TT.output();
        break;


    case 3:
        TT.output();
        break;


    case 4:
        TT.search();
        break;


    default:
        cout << " Ошибка программирования\n";
        break;
    }


    system("pause");
    return 0;
};
