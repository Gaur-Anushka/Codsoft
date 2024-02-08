
#include <iostream>
#include <vector>
#include <string>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
    }

    void viewTasks() {
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << i + 1 << ". " << tasks[i] << std::endl;
        }
    }

    void deleteTask(int taskNumber) {
        tasks.erase(tasks.begin() + taskNumber - 1);
    }
};

int main() {
    ToDoList myList;
    int choice;
    std::string task;
    int taskNumber;

    while (true) {
        std::cout << "1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            myList.addTask(task);
            break;
        case 2:
            myList.viewTasks();
            break;
        case 3:
            std::cout << "Enter task number to delete: ";
            std::cin >> taskNumber;
            myList.deleteTask(taskNumber);
            break;
        case 4:
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}



