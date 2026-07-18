// conditional statement

// Q1 check whether a number is positive , negaive  or zero
 #include <iostream> 
 using namespace std;

 int main(){
    int n;
    cin>> n;

    if (n > 0 ){
       cout<< "Number is  positive";
    } else if(n< 0) {
        cout << " Number is negative";
    } else {
        cout << "Number is Zero";
    }
 return 0;
 }

 
 #include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cin >> a >> op >> b;

    switch(op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        default:
            cout << "Invalid Operator";
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cout << i << " ";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n>=1){
        cout << n << " ";
        n--;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;

    for(int i=1;i<=n;i++)
        sum += i;

    cout << sum;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=10;i++)
        cout << n << " x " << i << " = " << n*i << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact=1;

    cin >> n;

    for(int i=1;i<=n;i++)
        fact *= i;

    cout << fact;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime=true;

    cin >> n;

    if(n<=1)
        prime=false;

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }

    if(prime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, rev=0;

    cin >> n;

    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }

    cout << rev;

    return 0;
}

#include <iostream>
using namespace std;

int maximum(int a,int b){
    if(a>b)
        return a;
    return b;
}

int main() {
    int a,b;
    cin>>a>>b;

    cout<<maximum(a,b);

    return 0;
}

#include <iostream>
using namespace std;

bool even(int n){
    return n%2==0;
}

int main() {
    int n;
    cin>>n;

    if(even(n))
        cout<<"Even";
    else
        cout<<"Odd";

    return 0;
}

#include <iostream>
using namespace std;

long long factorial(int n){
    long long fact=1;

    for(int i=1;i<=n;i++)
        fact*=i;

    return fact;
}

int main() {
    int n;
    cin>>n;

    cout<<factorial(n);

    return 0;
}

//Write a function to find the sum of digits of a number.

#include <iostream>
using namespace std;

int sumDigits(int n){
    int sum=0;

    while(n>0){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int main() {
    int n;
    cin>>n;

    cout<<sumDigits(n);

    return 0;
}

//write a function to check whether a number is a palindrome.

#include <iostream>
using namespace std;

bool palindrome(int n){
    int temp=n, rev=0;

    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }

    return temp==rev;
}

int main() {
    int n;
    cin>>n;

    if(palindrome(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}

// Write a function to calculate the power of a number (x^n).

#include <iostream>
using namespace std;

int power(int x,int n){
    int ans=1;

    for(int i=1;i<=n;i++)
        ans*=x;

    return ans;
}

int main() {
    int x,n;

    cin>>x>>n;

    cout<<power(x,n);

    return 0;
}