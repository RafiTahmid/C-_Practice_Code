#include <iostream>
#include <string>
using namespace std;

// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }
class Employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "The name of the employee is " << this->name << "And his salary is " << this->salary << endl;
    }
};

int main()
{
    /*cout << "Hello World" << endl;
    cout << "Next Line";*/
    // int a, b;
    // cout << "Enter 1st number: " << endl;
    // cin >> a;

    // cout << "Enter 2nd number: " << endl;
    // cin >> b;
    // cout << "a + b is " << a + b << endl;
    // cout << "a + b is " << a - b << endl;
    // cout << "a + b is " << a * b << endl;
    // cout << "a + b is " << (float)a / b << endl;
    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // if (age > 100 || age < 4)
    // {
    //     cout << "Invalid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can vote";
    // }

    // else
    // {
    //     cout << "You can't vote";
    // }

    // switch (age)

    // {
    // case 12:
    //     cout << "You are 12 years old" << endl;
    //     break;
    // case 18:
    //     cout << "You are 18 years old" << endl;
    //     break;
    // default:
    //     cout << "you are neither 12 not 18" << endl;
    //     break;
    // }
    // int index = 0;
    // while (index < 10)
    // {
    //     cout << "we are at number: " << index << endl;
    //     index = index + 1;

    // do
    // {
    //     cout << "We are at number: " << index << endl;
    //     index = index + 1;

    // } while (index > 10);

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "You are at numnber " << i << endl;
    // }
    // int a, b;
    // cout << "Enter 1st number: " << endl;
    // cin >> a;

    // cout << "Enter 2nd number: " << endl;
    // cin >> b;

    // cout << "The addition of the numbers is: " << add(a, b) << endl;

    // int arr[] = {1, 3, 5};

    // cout << arr[2];

    // int marks[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the marks of " << i << "th student" << endl;
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "marks of " << i << "th student is " << marks[i] << endl;
    // }

    // int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // string name = "Tahmid";
    // cout << "The name is " << name << endl;
    // cout << "The length of name is " << name.length() << endl;
    // cout << "The name is " << name.substr(0, 3) << endl;
    // cout << "The name is " << name.substr(3, 5);

    // int a = 34;
    // int *ptra;
    // ptra = &a;
    // // cout << ptra; Theb address of a
    // cout << *ptra; //The value of a

    Employee tah;
    tah.name = "Tahmid";
    tah.salary = 100;

    // cout << "The name of the employee is " << tah.name << "And his salary is " << tah.salary << endl;
    tah.printDetails();

    return 0;
}
