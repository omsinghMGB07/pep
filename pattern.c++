// Q.1 pattern 1
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }
    return 0;
}
// Q.2 pattern 2
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cout <<i;
        }
        cout <<endl;
    }
    return 0;
}
// Q.3 pattern 3
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
// Q.4 pattern 4
#include <iostream>
using namespace std;
int main()
{
    for (int i=5; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cout <<i;
        
        }
        cout <<endl;

    }
    return 0;
}
// Q.5 pattern 5
#include <iostream>
using namespace std;
int main()
{
    for (int i=5; i>=1; i--)
{
    for (int j=5; j>=1; j--)
    {
        cout <<j;
    }
    cout <<endl;
}
return 0;
}
// Q.6 pattern 6
#include <iostream>
using namespace std;
int main()
{
    int n =5, k =1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout<<k++<<"";
        }
        cout<<endl;
    }
    return 0;
}
// Q.7 pattern 7
#include <iostream>
using namespace std;
int main()
{
    int n =5;
    int x = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout <<x<<"";
            x+=2;
        }
        cout <<endl;

    }
    return 0;
}
// Q.8 pattern 8
#include <iostream>
using namespace std;
int main()
{
    int n =5;

    int x=2;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j <= n; j++)
        {
            cout<<x<<"";
            x+=2;
        }
        cout <<endl;
    }
    return 0;
}
// Q.9 pattern 9
#include <iostream>
using namespace std;
int main()
{
    int n =5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout <<(i*j)<<"";
        }
        cout <<endl;
    }
    return 0;
}
// Q.10 pattern 10
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i<=5; i++)
    {
        for (int j=1; j<=3; j++)
        {
            cout <<j<<""<<i<<"";
        }
        cout <<endl;
    }
    return 0;
}

// Q.11 pattern 11
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=3; j++)

    
    {
      cout <<i<<""<<j<<"";
    }
        cout <<endl;
    }
    return 0;
}
// Q.12 pattern 12
#include <iostream>
using namespace std;
int main()
{
    int n =5;

    int x;
    for (int i=1; i<=n; i++)
    {
        x=i;
        for (int j=1; j<=n; j++)
        {
            cout <<x<<"";
            x+=n;
        }
        cout <<endl;
    }
    return 0;
}
// Q.13 pattern 13
#include <iostream>
using namespace std;
int main()
{
    int n =5;
    int x, y;
    for (int i=1; i<=n; i++)
    {
        x=i;
        y=n-i+1;
        for (int j=1; j<=n; j++ )
        {
            x = i;
            y = n-i+1;
            for (int j=1; j<=n; j++)
            {
                if (j%2==1)
                {
                    cout <<x<<"";

                }
                else
                {
                    cout <<y<<"";
                }
                x = x+n;
                y = y+n;
            }
            cout <<endl;
        }
    }
    return 0;
}

// Q.14 pattern 14
#include <iostream>
using namespace std;
int main()
{
    int n =5;
    int x;

    for (int i =1; i<=n; i++)
    {
        x =n-i+1;
        for (int j=1;j<=n;j++)
        {
            cout <<x<<"";
            x = x+n;
        }
        cout <<endl;
    }
    return 0;
}
// Q.15 pattern 15
#include <iostream>
using namespace std;
int main()
{
    int n =5;
    int x,y;

    for (int i=1; i<=n; i++)
    {
        x=i;
        y=n-i+1;

        for (int j=1; j<=n; j++)
        {
            if (j%2==0)
            {
                cout <<x<<"";

            }
            else
            {
                cout <<y<<"";
            }
            x = x+n;
            y = y+n;
        }
        cout <<endl;
    
        }
    return 0;

}

//Q16.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<(i + j -1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q17.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<(2*(i +j))-3<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q18.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<((i +j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q19.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n;j++){
            cout<<((i +j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q20.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<((i * j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}