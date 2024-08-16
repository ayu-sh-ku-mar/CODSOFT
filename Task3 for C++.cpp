#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool isCompleted;
};

void addTask(vector<Task>& tasks, const string& description) {
    tasks.push_back({description, false});
    cout << "Task added: " << description << endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list." << endl;
        return;
    }
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (tasks[i].isCompleted ? "[Completed] " : "[Pending] ") << tasks[i].description << endl;
    }
}

void markTaskAsCompleted(vector<Task>& tasks, int taskNumber) {
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].isCompleted = true;
        cout << "Task " << taskNumber << " marked as completed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

void removeTask(vector<Task>& tasks, int taskNumber) {
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        cout << "Task removed: " << tasks[taskNumber - 1].description << endl;
        tasks.erase(tasks.begin() + taskNumber - 1);
    } else {
        cout << "Invalid task number." << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice, taskNumber;
    string taskDescription;

    cout << "To Do List By Ayush Kumar" << endl;

    while (true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter task description: ";
            getline(cin, taskDescription);
            addTask(tasks, taskDescription);
            break;
        case 2:
            viewTasks(tasks);
            break;
        case 3:
            cout << "Enter task number to mark as completed: ";
            cin >> taskNumber;
            markTaskAsCompleted(tasks, taskNumber);
            break;
        case 4:
            cout << "Enter task number to remove: ";
            cin >> taskNumber;
            removeTask(tasks, taskNumber);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

