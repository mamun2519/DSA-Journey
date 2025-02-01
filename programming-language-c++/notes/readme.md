## Programming Language C++

### Output In c++

⇒ cout << “Hello World”

### How Does Code Run

- Source Code
- Compiler
- Code.exe ⇒ Executable File

### First Program In C++

```jsx

#include <iostream>
using namespace std;
int main()
{
      cout << "Hello world" << "\n";
      return 0;
}
```

### Data Types (This is called primitive data Type)

- int ⇒ 4 Bytes
- char ⇒ 1 bytes
- float ⇒ 4 Bytes
- bool ⇒ 1 Bytes
- double ⇒ 8 Butes

### Type Casting

⇒ Converting data from one type to another

⇒ 2 Type of type Casting

- Conversion ⇒ implicit Process (That means compiler automatic convert)
- casting ⇒ Programming convert This process

### Input In C++

⇒ Get the data from the user

⇒ cin >> age

### Operators

- Arithmetic ⇒ +, -, \* , %, /
- Relational ⇒ < , > , ≤ , ≥ ⇒ always retune or false
- Logical ⇒ Or , AND , NOT
- Unary Operators ⇒ Need one Number
- Binary Operator ⇒ Need 2 Number
- Ternary Operator ⇒ need 3 Number

### Conditional Statements

⇒ If Else

### Ternary Statement

⇒ condition? stt1 : strr2;

### Pattens

- for lop
- while lop
- nested lop

**Squire Pattern**

**Problem 01**
⇒ Easy With Numbers n = 4

OutPut:

1234

1234

1234

1234

**Problem solution**

```jsx
#include <iostream>
using namespace std;

int main()
{
      int n = 4;
      for (int i = 1; i < n; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  cout << j;
            }
            cout << endl;
      }
      return 0;
}

```

**Problem 02**: retune the ABCD pattren

**Problem solution**

```cpp

int main()
{
      int n = 4;

      for (int i = 0; i < n; i++)
      {
            char ch = 'A';
            for (int j = 0; j < n; j++)
            {
                  cout << ch;
                  ch = ch + 1;
            }
            cout << endl;
      }
      return 0;
}
//Output
// ABCD
// ABCD
```

**Problem 03:** retune the ABCD pattren
**Problem solution**

```cpp

int main()
{
      int n = 4;

      for (int i = 0; i < n; i++)
      {
            char ch = 'A';
            for (int j = 0; j < n; j++)
            {
                  cout << ch;
                  ch = ch + 1;
            }
            cout << endl;
      }
      return 0;
}
//Output
// ABCD
// ABCD
```

**Problem 04**: Retune 123
**Problem solution**

```jsx
int main()
{
      int n = 3;
      int number = 1;
      for (int i = 0; i < n; i++)
      {

            for (int j = 0; j < n; j++)
            {
                  cout << number << " ";
                  number++;
            }
            cout << endl;
      }
      return 0;
}
output
123
456
789
```

### Triangle Pattern

**Problem 05** ⇒ easy with starts
**Problem solution**
output

- \*\*

  ***

  ***

```
#include <iostream>
using namespace std;

int main()
{
      int n = 4;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < i + 1; j++)
            {
                  cout << "*";
            }
            cout << endl;
      }
}
```

### Triangle Pattern

**Problem 06** ⇒ easy with starts
**Problem solution**
output

1

22

333

4444

```jsx
#include <iostream>
using namespace std;

int main()
{
      int n = 4;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < i + 1; j++)
            {
                  cout << i + 1;
            }
            cout << endl;
      }
}
```

**Problem 08** ⇒ easy to start
problem output

1

12

123

1234

output

**Problem solution**

```jsx
#include <iostream>
using namespace std;

int main()
{
      int n = 4;
      for (int i = 0; i < n; i++)
      {
            for (int j = i+1; j > 0 ; j--)
            {
                  cout << j << " ";
            }
            cout << endl;
      }
}
```

## Function

---

### Problem 1: calculate sum number 1 + n

```jsx
#include <iostream>
using namespace std;

int sumN(int n)
{
      int sum = 0;
      for (int i = 1; i <= n; i++)
      {
            sum += i;
      }
      return sum;
}

int main()
{

      cout << sumN(5) << endl;
      return 0;
}
```

s
