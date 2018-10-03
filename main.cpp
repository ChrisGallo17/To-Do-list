#include <iostream>
#include <string>

using namespace std;

int cursor = 0, totalTasks = 0, j = 0;
string listTask[20], listDesc[20], listDue[20];

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

    cout << "\nWelcome to your To-Do List" << endl;
    td.menu();

    do{
        td.options();
    }
    while(cursor = 0);

    return 0;
}

void ToDo::menu() // the user will always come back to this
{
    cout << "\nEnter 1 to add a task " << endl;
    cout << "Enter 2 to view current tasks " << endl;
    cout << "Enter 3 to complete task " << endl;
    cout << "Enter 4 to exit " << endl;

    cursor = 0;

    cin >> cursor;

    if (cursor == 1)
    {
        addTask();
        menu();
    }
    else if(cursor == 2)
    {
        taskManager();
        menu();
    }
    else if(cursor == 3)
    {
        //delete a task
        cout << "Work in progress, enter another number" << endl;
        menu();
    }
    else if(cursor == 4)
    {
        exit(4);
    }
    else
    {
        cout << "Please enter a valid option" << endl;
        menu();
    }

}

void ToDo::addTask() // adds a task to the list
{
    char task[20];
    char description[100];
    string due;

    cin.getline(task, 20);
    cout << "Enter a task: " << endl;
    cin.getline(task, 20);
    cout << "\nDescribe this task: " << endl;
    cin.getline(description, 100);
    cout << "\nWhen is it due? (month/day)" << endl;
    cin >> due;
    cout << "This task was added to your list!" << endl << endl;

    totalTasks = totalTasks + 1;

    listTask[j] = task;
    listDesc[j] = description;
    listDue[j] = due;

    cout << totalTasks << ". " << task << ": " << description << "    Due: " << due << endl;

    //cout << listTask[j] << " " << listDesc[j] << " " << listDue[j] << endl;
    j = j + 1;
    //string x = task;
    //cout << x << endl;

}

void ToDo::options()
{

}

void ToDo::taskManager()
{
    int i = 0;

    char charList[20];

    for(i = 0; i < j; i++)
    {
        cout << i + 1 << ". " << listTask[i] << ": " << listDesc[i] << "   Due:" << listDue[i] << endl;
    }

    //cout << "Work in progress, enter another number" << endl;
}