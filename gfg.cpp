
// Q1. Write a Program to Print “Hello World” in the Console Screen.
#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello World";

    return 0;
}

// Q2. Write a Program to Read and Print Number Input from the User.
#include <iostream>
using namespace std;

int main(){
    int i;
    
    cin >> i;
    
    cout << i;
    return 0;
}

// Q3. Write a Program to Print the ASCII Value of a Character.


#include <iostream>
using namespace std;


int main()
{
    char c = 'A';
    cout << "The ASCII value of " << 
             c << " is " << int(c);
    return 0;
}

// Q4. Write a Program to Swap Two Numbers.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 2, b = 3;

    cout << "Before swapping a = " << a << " , b = " << b << endl;

    int temp;
    
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b << endl;
    return 0;
}

// Q5. Write a Program to Find the Size of int, float, double, and char.

#include <iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    
    cout << "Size of int is: " << sizeof(integerType)
         << "\n";

    
    cout << "Size of char is: " << sizeof(charType) << "\n";

    
    cout << "Size of float is: " << sizeof(floatType)
         << "\n";

    
    cout << "Size of double is: " << sizeof(doubleType)
         << "\n";

    return 0;
}

// Q6. Write a Program to Find Compound Interest.

#include <bits/stdc++.h>
using namespace std;


int main()
{
    double principal = 10000, rate = 5, time = 2;

    
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    cout << "Compound interest is " << CI;

    return 0;
}

// Q7. Write a Program to Check Even or Odd Integers.

