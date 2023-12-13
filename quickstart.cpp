#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Person
{
    int age;
    string firstName;
    string lastName;
};

void addNumbers()
{
    int a, b;
    a = b = 1 << 20;
    cout << a << ' ' << b << endl;

    a = a + b;
    cout << a << endl;
}

void squareInput()
{
    string message = "Enter\nx=";
    cout << message;
    int x;
    cin >> x;
    cout << "x^2=" << x * x << endl;
}

void CompareNumbers()
{
    float a = 1.5e3;
    double b = 1.5E3;

    bool equal = a == b;
    cout << equal << endl;
}

Person askForContactInfo()
{
    Person user;

    cout << "Please enter your first name: ";
    cin >> user.firstName;

    cout << "Please enter your last name: ";
    cin >> user.lastName;

    cout << "Please enter your age: ";
    cin >> user.age;

    return user;
}

int findMax(int a, int b, int c = 0)
{
    return max(a, max(b, c));
}

void testArrayLoop()
{
    int numbers[10];

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        numbers[i] = 2 * i;

    int *ptr1 = &numbers[3];
    int *ptr2 = &numbers[4];
    cout << ptr1 << ' ' << ptr2 << endl;
    cout << numbers[4] - numbers[3] << endl;

    ptr1 = ptr2;
    cout << *ptr2 - *ptr1 << endl;
}

void greetUser()
{
    Person user = askForContactInfo();
    cout << "Hello " << user.firstName << ' ' << user.lastName << endl;
    cout << "You are " << user.age << " years old." << endl;
}

void addOne(int &a)
{
    a++;
}

int main()
{
    // addNumbers();
    // squareInput();
    // CompareNumbers();
    // cout << "Hello " << fullName << endl << endl;
    // cout << findMax(20, 3, 1) << endl;
    // testArrayLoop();
    // greetUser();
    
    int a = 1;
    addOne(a);
    cout << a << endl;

    return 0;
}