
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
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 11;

    // If n is completely divisible by 2
    if (n % 2 == 0)
        cout << "Even";

    // If n is NOT completely divisible by 2
    else
        cout << "Odd";
    return 0;
}

// Q8. Write a Program to Find the Largest Among 3 Numbers.
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 11;

    // Finding largest using compound expressions
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;

    return 0;
}

// Q9. Write a Program to Check if a Given Year Is a Leap Year.
#include <iostream>
using namespace std;


bool checkYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int year = 2000;
    checkYear(year) ? cout << "Leap Year" : cout << "Not a Leap Year";
    return 0;
}

// Q10. Write a Program to Check Whether a Number Is Prime or Not.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 29;
    int cnt = 0;
    
    
    if (n <= 1)
        cout << n << " is NOT prime";
    else {

        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        
        if (cnt > 2)
            cout << n << " is NOT prime";

        
        else
            cout << n << " is prime";
    }
    return 0;
}

// Q11. Write a Program to Check Whether a Number Is a Palindrome or Not.
#include <iostream>
using namespace std;

int main() {
    int n=1221;
    int t = n;
    int rev = 0;
    
    while (t > 0) {
        int dig = t % 10;
        rev = rev * 10 + dig;
        t /= 10;
    }
    
   
    if (n==rev)
        cout << "Palindrome.";
    else
        cout << "Not Palindrome.";
    return 0;
}

// Q12. Write a Program to Make a Simple Calculator.
#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, res;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
        cout << "Result: " << res;
    return 0;
}

// Q13. Write a Program to Reverse a Sentence Using Recursion.
#include <iostream>
using namespace std;

void reverseSentence()
{
    char ch;
    cin.get(ch);

    if (ch != '\n')
    {
        reverseSentence();
        cout << ch;
    }
}

int main()
{
    cout << "Enter a sentence: ";
    reverseSentence();

    return 0;
}

// Q14. Write a Program for Fibonacci Numbers Using Recursion.
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}

// Q15. Write a Program to Swap Two Numbers Using a Function.
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before Swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "After Swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
// Q16. Write a Program to Check if Two Arrays Are Equal or Not.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of arrays: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    bool equal = true;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "Both arrays are equal.";
    else
        cout << "Both arrays are not equal.";

    return 0;
}

// Q17. Write a Program to Calculate the Average of All the Elements Present in an Array.
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Average of array elements = " << average;

    return 0;
}

// Q18. Write a Program to Find the Maximum and Minimum in an Array.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}
// Q19. Write a Program to Search an Element in an Array (Linear Search).
#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position " << position + 1;
    else
        cout << "Element not found in the array.";

    return 0;
}
// Q20. Write a Program to Print the Array After It Is Right Rotated K Times.
#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of rotations (K): ";
    cin >> k;

    k = k % n; // Handle rotations greater than array size

    cout << "Array after right rotation: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[(i - k + n) % n] << " ";
    }

    return 0;
}
// Q21. Write a Program to Compute the Sum of Diagonals of a Matrix.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    cout << "Sum of Primary Diagonal = " << primarySum << endl;
    cout << "Sum of Secondary Diagonal = " << secondarySum << endl;
    cout << "Total Sum of Both Diagonals = "
         << primarySum + secondarySum << endl;

    return 0;
}

// Q22. Write a Program to Rotate the Elements of a Matrix.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix after 90-degree clockwise rotation:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Q23. Write a Program to Find the Length of a String.
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0')
    {
        length++;
    }

    cout << "Length of the string = " << length;

    return 0;
}

// Q24. Write a Program to Compare Two Strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}

// Q25. Write a Program to Check if the String Is Palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}
// Q26. Write a Program to Add 2 Binary Strings.
#include <stdio.h>
#include <string.h>

int main() {
    char bin1[100], bin2[100], result[101];
    int i, j, k, carry = 0, sum;

    printf("Enter first binary string: ");
    scanf("%s", bin1);

    printf("Enter second binary string: ");
    scanf("%s", bin2);

    i = strlen(bin1) - 1;
    j = strlen(bin2) - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;

        if (i >= 0)
            sum += bin1[i--] - '0';

        if (j >= 0)
            sum += bin2[j--] - '0';

        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    result[k] = '\0';

    printf("Sum = ");
    for (i = k - 1; i >= 0; i--)
        printf("%c", result[i]);

    printf("\n");

    return 0;
}

// Q27. Write a Program to Convert String to int.

#include <stdio.h>

int stringToInt(char str[]) {
    int i = 0, num = 0;

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num;
}

int main() {
    char str[100];
    int number;

    printf("Enter a numeric string: ");
    scanf("%s", str);

    number = stringToInt(str);

    printf("Integer = %d\n", number);

    return 0;
}

// Q28. Write a Program to Split a String into a Number of Sub-Strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, len, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the size of each substring: ");
    scanf("%d", &n);

    len = strlen(str);

    if (len % n != 0) {
        printf("String cannot be divided into equal substrings.\n");
        return 0;
    }

    printf("Substrings are:\n");

    for (i = 0; i < len; i += n) {
        for (j = i; j < i + n; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

// Q29. Write a Program to Print a Simple Full Pyramid Pattern.

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
// Q30. Write a Program That Receives a Number and Prints It Out in Large Size.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a digit (0-9): ");
    scanf("%d", &num);

    switch (num) {
        case 0:
            printf(" ***** \n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf(" ***** \n");
            break;

        case 1:
            printf("   *   \n");
            printf("  **   \n");
            printf("   *   \n");
            printf("   *   \n");
            printf(" ***** \n");
            break;

        case 2:
            printf(" ***** \n");
            printf("      *\n");
            printf(" ***** \n");
            printf("*      \n");
            printf("*******\n");
            break;

        case 3:
            printf(" ***** \n");
            printf("      *\n");
            printf(" ***** \n");
            printf("      *\n");
            printf(" ***** \n");
            break;

        case 4:
            printf("*    * \n");
            printf("*    * \n");
            printf("*******\n");
            printf("     * \n");
            printf("     * \n");
            break;

        case 5:
            printf("*******\n");
            printf("*      \n");
            printf("****** \n");
            printf("      *\n");
            printf("****** \n");
            break;

        case 6:
            printf(" ***** \n");
            printf("*      \n");
            printf("****** \n");
            printf("*     *\n");
            printf(" ***** \n");
            break;

        case 7:
            printf("*******\n");
            printf("     * \n");
            printf("    *  \n");
            printf("   *   \n");
            printf("  *    \n");
            break;

        case 8:
            printf(" ***** \n");
            printf("*     *\n");
            printf(" ***** \n");
            printf("*     *\n");
            printf(" ***** \n");
            break;

        case 9:
            printf(" ***** \n");
            printf("*     *\n");
            printf(" ******\n");
            printf("      *\n");
            printf(" ***** \n");
            break;

        default:
            printf("Invalid input! Please enter a digit from 0 to 9.\n");
    }

    return 0;
}
