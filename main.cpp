#include <iostream>
#include <string>

using namespace std;

int cursor = 0;

class ToDo
{
public:
    void addTask();
    void options();
    void menu();
    void taskManager();
};

int main() {

    ToDo td;

    cout << "Welcome to your To-Do List" << endl;
    td.menu();

    do{
        td.options();
    }
    while(cursor = 0);

    return 0;
}

void ToDo::menu()
{
    cout << "\nEnter 1 to add a task " << endl;
    cout << "Enter 2 to view current tasks " << endl;
    cout << "Enter 3 to complete task " << endl;
    cout << "Enter 4 to exit " << endl;

    cin >> cursor;

    if (cursor == 1)
    {
        addTask();
        menu();
        cursor = 0;
        cin >> cursor;
    }
    else if(cursor == 2)
    {
        taskManager();
        menu();
        cursor = 0;
        cin >> cursor;
    }
    else if(cursor == 3)
    {
        //delete a task
        cout << "Work in progress, enter another number" << endl;
        menu();
        cursor = 0;
        cin >> cursor;
    }
    else if(cursor == 4)
    {
        exit(0);
    }
    else
    {
        cout << "Please enter a valid option" << endl;
        menu();
        cursor = 0;
        cin >> cursor;
    }

    cursor = 0;

}

void ToDo::addTask()
{
    char task[20];
    char description[100];
    string due;

    cout << "Enter a task: " << endl;
    cin.getline(task, 20);
    cout << "\nWhat is this task? " << endl;
    cin.getline(description, 100);
    cout << "\nWhen is it due? (month/day)" << endl;
    cin >> due;
    cout << "This task was added to your list!" << endl;
}

void ToDo::options()
{

}

void ToDo::taskManager()
{

}