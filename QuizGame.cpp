/* 
                                       Date - 08/08/21
                                  Project Name - Quiz Game
                                    Author - Atharv Vani
                                Co-Author - Priyanshi Agrawal
                                       C++ - Language
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

//Global Variables
int total_scr = 0;
int no_of_correct_ans = 0;
int no_of_incorrect_ans = 0;

class Question
{
private:
    string text_question, ans1, ans2, ans3, ans4;
    char correct_Answer;
    char choice;
    int ques_score;

public:
    //Setter Function
    void setValues(string q, string a1, string a2, string a3, string a4, char ca, int ques_Scr)
    {
        text_question = q;
        ans1 = a1;
        ans2 = a2;
        ans3 = a3;
        ans4 = a4;
        correct_Answer = ca;
        ques_score = ques_Scr;
    }
    //Getter Function
    void askQuestion()
    {
        cout << "\t\t" << text_question << endl;
        cout << "\t  A - " << ans1 << endl;
        cout << "\t  B - " << ans2 << endl;
        cout << "\t  C - " << ans3 << endl;
        cout << "\t  D - " << ans4 << endl;

        cout << "\nSelect the Correct Option from A|B|C|D ONLY : " << endl;
        cin >> choice;

        if (choice == correct_Answer || choice == correct_Answer + 32)
        {
            no_of_correct_ans++;
            cout << "\n\t\tYour Answer is absolutely RIGHT..!!" << endl;
            total_scr = total_scr + ques_score;
            cout << "\t\tYour Score till now is " << total_scr << "/100" << endl;
        }

        else
        {
            no_of_incorrect_ans++;
            cout << "\n\t\tYour Answer is absolutely WRONG..!!" << endl;
            cout << "\t\tYour Score till now is " << total_scr << "/100" << endl;
        }
    }
};
int main() //Main Function - Program Starts
{
    cout << "\t\t--------------------------------------------------------------------------------------" << endl;
    cout << "\t\t------------------------------------- QUIZ GAME --------------------------------------" << endl;
    cout << "\t\t--------------------------------------------------------------------------------------" << endl;

    cout << "\t\t\t\t\t    Topic: History of C-Language" << endl;

    cout << "\tInstructions : " << endl;
    cout << "\t1. This quiz contains 10 question of 10 marks each." << endl;
    cout << "\t2. Total Marks = 100." << endl;

    string name;
    int age;

    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "\nEnter your Name : " << endl;
    getline(cin, name);

    cout << "Enter your Age : " << endl;
    cin >> age;

    system("cls");

    cout << "\t\t-----------------------------------------------------------------------------------------------" << endl;

    cout << "\t\t\t\t\t\t\tWelcome " << name << endl;

    cout << "\t\t-----------------------------------------------------------------------------------------------" << endl;

    char confirm;

    cout << "Are you ready for the QUIZ ?" << endl
         << "PRESS y/Y to CONTINUE-->" << endl;
    cin >> confirm;

    if (confirm == 'y' || confirm == 'Y')
    {
        system("cls");
    }

    else
    {
        exit(0);
    }

    Question q[10]; //Class Objects as Array

    q[0].setValues("\n\tQ1 -> Who is father of C Language ?", "Bjarne Stroustrup", "Dennis Ritchie", "James A. Gosling", "Dr. E.F. Codd", 'B', 10);

    q[1].setValues("\n\tQ2 -> C Language was developed at ?", "AT & T Bell Laboratory", "MIT University", "Harvard University", "Stanford Labs", 'A', 10);

    q[2].setValues("\n\tQ3 -> Many Features of C-Language is derived from which Language ?", "PASCAL", "B", "BASIC", "FORTRAN", 'B', 10);

    q[3].setValues("\n\tQ4 -> What is C-Language ?", "C-Language is structure/procedure oriented", "C-Language is a midlle level programming language", "C-Language was invented for implementing UNIX OS", "All of the above", 'D', 10);

    q[4].setValues("\n\tQ5 -> First Version of C Programming language is _________.", "K & R", "C89", "ANSI", "R & K", 'A', 10);

    q[5].setValues("\n\tQ6 -> C was initially used for ?", "General Purpose", "System Development Work", "Data Processing", "None of the above", 'B', 10);

    q[6].setValues("\n\tQ7 -> C programming language is _________.", "Procedural Language", "Object Oriented Language", "Scripting Language", "None of the above", 'A', 10);

    q[7].setValues("\n\tQ8 -> Which Committee is standardize C programming Language ?", "IEEE", "ISO", "IEC", "ANSI", 'D', 10);

    q[8].setValues("\n\tQ9 -> In Which year C-Language was developed ?", "1970", "1972", "1971", "1973", 'B', 10);

    q[9].setValues("\n\tQ10-> Which of these is not an example of IDE in C", "Turbo", "PyCharm", "Code Blocks", "Borland", 'B', 10);

    for (int i = 0; i < 10; i++)
    {
        q[i].askQuestion();
        cout << "\nHit ENTER to CONTINUE" << endl;
        getch();
        system("cls");
    }
    cout << "\n-------------------------------------------------------------------\n";
    cout << "\t\t\tPerformance Card : " << endl;
    cout << "-------------------------------------------------------------------\n";
    cout << "\t\tName of the Player : " << name << endl;
    cout << "\t\tAge of Player : " << age << endl;
    cout << "\n\t\tCorrect Answers Recorded : " << no_of_correct_ans << endl;
    cout << "\t\tIncorrect Answers Recorded : " << no_of_incorrect_ans << endl;
    cout << "\n\t\t\tTOTAl SCORE : " << total_scr << endl;
    cout << "-------------------------------------------------------------------";

    if (total_scr >= 60)
    {
        char ch = 1;
        cout << endl
             << "\t\tCongratulations " << name << "..!! " << ch << endl
             << "\t\tYou PASSED the Quiz." << endl;
        cout << "-------------------------------------------------------------------\n";
    }
    else
    {
        char c = 3;
        cout << endl
             << "\t\tAlas..!!" << endl
             << "\t\tYou FAILED, Better Luck Next Time " << c << endl;
        cout << "-------------------------------------------------------------------\n";
    }

    return 0;
}
