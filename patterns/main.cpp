#include <iostream>
using namespace std;

void print1(int n = 6)
{
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n = 4)
{
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print3(int n = 3)
{
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 1; j <= i + 1; j += 1)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print4(int n = 6)
{
    for (int i = 1; i <= n; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << i;
        }
        cout << endl;
    }
}

void print5(int n = 5)
{
    for (int i = n; i > 0; i -= 1)
    {
        for (int j = 0; j <= n - i; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print6(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 1; j <= n - i; j += 1)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print7(int n = 5)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j += 1)
        {
            cout << " ";
        }

        for (int k = 0; k < i + i + 1; k += 1)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j += 1)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {

        for (int j = 0; j < i; j += 1)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k += 1)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j += 1)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print9(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < n - i - 1; j += 1)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k += 1)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j += 1)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < i; j += 1)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k += 1)
        {
            cout << "*";
        }
        for (int j = 0; j < n; j += 1)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print10(int n = 6)
{
    // for (int i = 0; i < n; i += 1)
    // {
    //     for (int j = 0; j <= i; j += 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i += 1)
    // {
    //     for (int j = 0; j < n - i - 1; j += 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i < 2 * n; i += 1)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        int temp = 0;
        if (i % 2 == 0)
        {
            temp = 1;
        }
        for (int j = 0; j <= i; j += 1)
        {

            cout << temp;
            temp = 1 - temp;
        }
        cout << endl;
    }
}

void print12(int n = 5)
{

    for (int i = 1; i <= n; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << j;
        }
        for (int k = 0; k < 2 * n - 2 * i; k += 1)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j -= 1)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print13(int n = 5)
{
    int temp = 1;
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
        {
            cout << temp;
            cout << " ";
            temp += 1;
        }
        cout << endl;
    }
}

void print14(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        for (char j = 'A'; j <= 'A' + i; j += 1)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print15(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        for (char j = 'A'; j < 'A' + (n - i); j += 1)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print16(int n = 5)
{
    char ch = 'A';
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
        {
            cout << ch;
        }
        ch += 1;
        cout << endl;
    }
}

void print17(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        char k = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < n - i - 1; j += 1)
        {
            cout << " ";
        }
        // for (char ch = 'A'; ch < 'A' + i; ch += 1)
        // {
        //     cout << ch;

        // }
        // cout << k;
        // for (char j = k - 1; j >= 0; j -= 1)
        // {
        //     cout << j;
        // }
        for (int j = 1; j <= 2 * i + 1; j += 1)
        {
            cout << k;
            if (j <= breakpoint)
            {
                k += 1;
            }
            else
            {
                k -= 1;
            }
        }
        cout << endl;
    }
}

void print18(int n = 5)
{
    for (int i = 0; i < n; i += 1)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j <= i; j += 1)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}

void print19(int n = 5)
{
}

int main()
{
    int a;
    cin >> a;
    // print1(a);
    // print2(a);
    // print3(a);
    // print4(a);
    // print5(a);
    // print6(a);
    // print7(a);
    // print8(a);
    // print9(a);
    // print10(a);
    // print11(a);
    // print12(a);
    // print13(a);
    // print14(a);
    // print15(a);
    // print16(a);
    // print17(a);
    print18(a);
}