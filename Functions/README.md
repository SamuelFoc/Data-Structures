# Functions

Let's explore how functions work across four different programming languages: **C++**, **Go**, **Python**, and **JavaScript**. Each language has a unique syntax, but the core principles of how functions operate remain consistent. We'll cover:

1. **Basic function without a return value**
2. **Function with a return value**
3. **Lambda function (anonymous function)**

### 1. **C++**

C++ is a statically typed, compiled language, so we have to declare the types for the function parameters and return values. Let's see examples for each type of function.

#### Basic Function (No Return)

```cpp
#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, World!" << endl;
}

int main() {
    sayHello();  // Call the function
    return 0;
}
```

Here, the function `sayHello` doesn’t return anything, hence the return type is `void`.

#### Function with Return

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "The sum is: " << result << endl;
    return 0;
}
```

This `add` function takes two integers and returns their sum.

#### Lambda Function

```cpp
#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    int result = add(10, 20);
    cout << "Lambda sum is: " << result << endl;
    return 0;
}
```

In C++, a **lambda** is an anonymous function, and you can see how we define it with `[]` and use it inline.

---

### 2. **Go**

Go is also statically typed, but functions are simpler to declare. Let's explore similar examples.

#### Basic Function (No Return)

```go
package main
import "fmt"

func sayHello() {
    fmt.Println("Hello, World!")
}

func main() {
    sayHello()  // Call the function
}
```

In Go, we don’t use semicolons at the end of statements, and the function `sayHello` has no return value.

#### Function with Return

```go
package main
import "fmt"

func add(a int, b int) int {
    return a + b
}

func main() {
    result := add(5, 3)
    fmt.Println("The sum is:", result)
}
```

Here, the `add` function takes two `int` parameters and returns an integer.

#### Lambda Function

```go
package main
import "fmt"

func main() {
    add := func(a int, b int) int {
        return a + b
    }

    result := add(10, 20)
    fmt.Println("Lambda sum is:", result)
}
```

In Go, anonymous functions (or lambdas) can be assigned to variables and used like normal functions.

---

### 3. **Python**

Python is dynamically typed, and function declarations are quite simple.

#### Basic Function (No Return)

```python
def say_hello():
    print("Hello, World!")

say_hello()
```

In Python, we don’t declare types explicitly, and indentation is crucial. The `say_hello` function prints a message but doesn’t return anything.

#### Function with Return

```python
def add(a, b):
    return a + b

result = add(5, 3)
print("The sum is:", result)
```

Python functions can return values just like other languages.

#### Lambda Function

```python
add = lambda a, b: a + b

result = add(10, 20)
print("Lambda sum is:", result)
```

In Python, a **lambda** is an anonymous function defined using the `lambda` keyword.

---

### 4. **JavaScript**

JavaScript is dynamically typed and commonly used for web development. Let’s explore functions here.

#### Basic Function (No Return)

```javascript
function sayHello() {
  console.log("Hello, World!");
}

sayHello();
```

In JavaScript, the `sayHello` function outputs a message to the console.

#### Function with Return

```javascript
function add(a, b) {
  return a + b;
}

let result = add(5, 3);
console.log("The sum is:", result);
```

JavaScript functions can return values just like in Python or Go.

#### Lambda (Arrow Function)

```javascript
const add = (a, b) => a + b;

let result = add(10, 20);
console.log("Lambda sum is:", result);
```

In modern JavaScript, **arrow functions** (`=>`) are a concise syntax for lambdas.

---

### Summary

As you can see, functions across C++, Go, Python, and JavaScript follow similar principles: they can take input parameters, optionally return values, and be defined either with a name or anonymously (lambdas). However, each language's syntax and conventions differ slightly. This flexibility of functions is what makes them a powerful tool in any programming language.

Let me know if you'd like to dive deeper into any specific language!
