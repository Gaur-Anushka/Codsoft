#include <iostream>
using namespace std;

int add()
{
    int num1, num2;
    int sum;
    cout << "Enter the first value : ";
    cin >> num1;
    cout << "Enter the second value : ";
    cin >> num2;
    sum = num1 + num2;
    cout << "The sum of the two values are : " << sum << endl;
    return 0;
}
int subtract()
{
    int sub1, sub2;
    int result;
    cout << "Enter the first value : ";
    cin >> sub1;
    cout << "Enter the second value : ";
    cin >> sub2;
    result = sub1 - sub2;
    cout << "The subtraction of two values : " << result << endl;
    return 0;
}
int multiply()
{
    int mul1, mul2;
    int result;
    cout << "Enter the first value : ";
    cin >> mul1;
    cout << "Enter the second value : ";
    cin >> mul2;
    result = mul1 * mul2;
    cout << "The multiplication of two values : " << result << endl;
    return 0;
}
float division()
{
    float div1, div2;
    float result;
    cout << "Enter the first value : ";
    cin >> div1;
    cout << "Enter the second value : ";
    cin >> div2;
    result = div1 / div2;
    cout << "The division of two values : " << result << endl;
    return 0;
}
int display()
{
    int choice;
    cout
        << "Choose the opertion to perform" << endl;
    cout << "Press one for Addition : 1\n"
            "Press two for subtraction : 2\n"
            "Press three for Multiplication : 3\n"
            "Press four for Division : 4\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Addition\n";
        add();
    }
    else if (choice == 2)
    {

        cout << "subtraction\n";
        subtract();
    }
    else if (choice == 3)
    {
        cout << "Multiplication\n";
        multiply();
    }
    else if (choice == 4)
    {
        cout << "Division\n";
        division();
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
int main()
{
    int choose;
    int n;
    display();
    cout << "You want to continue" << endl;
    cout << "choose 1 for yes : 1\n";
    cout << "choose 0 for no : 0\n";
    cin >> choose;
    if (choose == 1)
    {

        display();
    }
    else if (choose == 0)
    {
        cout << "Exit" << endl;
    }
    else
    {
        cout << "THE END" << endl;
    }

    /*
    int choice;
     int y;
     int n;
     int choose;
     cout << "Choose the opertion to perform" << endl;
     cout << "Press one for Addition : 1\n"
             "Press two for subtraction : 2\n"
             "Press three for Multiplication : 3\n"
             "Press four for Division : 4\n";
     cin >> choice;
     if (choice == 1)
     {
         cout << "Addition\n";
         add();
     }
     else if (choice == 2)
     {

         cout << "subtraction\n";
         subtract();
     }
     else if (choice == 3)
     {
         cout << "Multiplication\n";
         multiply();
     }
     else if (choice == 4)
     {
         cout << "Division\n";
         division();
     }
     else
         cout << "Invalid Input" << endl;
     cout << "You want to continue?";
    */
}

// add();cout << "Choose the opertion to perform";
// subtract();
// multiply();5
// division();
