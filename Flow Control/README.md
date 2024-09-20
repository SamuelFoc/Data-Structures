Here’s a quick comparison and overview of using loops (`for`, `while`), conditionals (`if`, `switch`) in **C++**, **Go**, **Python**, and **JavaScript**.

---

### 1. **For Loop**

#### **C++**

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

#### **Go**

```go
for i := 0; i < 5; i++ {
    fmt.Println(i)
}
```

#### **Python**

```python
for i in range(5):
    print(i)
```

#### **JavaScript**

```javascript
for (let i = 0; i < 5; i++) {
  console.log(i);
}
```

---

### 2. **While Loop**

#### **C++**

```cpp
int i = 0;
while (i < 5) {
    cout << i << endl;
    i++;
}
```

#### **Go**

```go
i := 0
for i < 5 {
    fmt.Println(i)
    i++
}
```

_(Go uses `for` loop as a replacement for `while`.)_

#### **Python**

```python
i = 0
while i < 5:
    print(i)
    i += 1
```

#### **JavaScript**

```javascript
let i = 0;
while (i < 5) {
  console.log(i);
  i++;
}
```

---

### 3. **If Statement**

#### **C++**

```cpp
int x = 10;
if (x > 5) {
    cout << "x is greater than 5" << endl;
} else if (x == 5) {
    cout << "x is equal to 5" << endl;
} else {
    cout << "x is less than 5" << endl;
}
```

#### **Go**

```go
x := 10
if x > 5 {
    fmt.Println("x is greater than 5")
} else if x == 5 {
    fmt.Println("x is equal to 5")
} else {
    fmt.Println("x is less than 5")
}
```

#### **Python**

```python
x = 10
if x > 5:
    print("x is greater than 5")
elif x == 5:
    print("x is equal to 5")
else:
    print("x is less than 5")
```

#### **JavaScript**

```javascript
let x = 10;
if (x > 5) {
  console.log("x is greater than 5");
} else if (x == 5) {
  console.log("x is equal to 5");
} else {
  console.log("x is less than 5");
}
```

---

### 4. **Switch Case**

#### **C++**

```cpp
int day = 3;
switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
}
```

#### **Go**

```go
day := 3
switch day {
    case 1:
        fmt.Println("Monday")
    case 2:
        fmt.Println("Tuesday")
    case 3:
        fmt.Println("Wednesday")
    default:
        fmt.Println("Invalid day")
}
```

#### **Python**

Python does not have a built-in `switch` statement, but you can use `if-elif-else` or dictionaries to mimic it:

```python
day = 3
days = {
    1: "Monday",
    2: "Tuesday",
    3: "Wednesday"
}
print(days.get(day, "Invalid day"))
```

#### **JavaScript**

```javascript
let day = 3;
switch (day) {
  case 1:
    console.log("Monday");
    break;
  case 2:
    console.log("Tuesday");
    break;
  case 3:
    console.log("Wednesday");
    break;
  default:
    console.log("Invalid day");
}
```

---

### Summary:

| **Concept**      | **C++**                 | **Go**                  | **Python**                      | **JavaScript**          |
| ---------------- | ----------------------- | ----------------------- | ------------------------------- | ----------------------- |
| **For Loop**     | `for (init; cond; inc)` | `for init; cond; inc`   | `for var in range()`            | `for (init; cond; inc)` |
| **While Loop**   | `while (cond)`          | `for cond`              | `while cond:`                   | `while (cond)`          |
| **If Statement** | `if, else if, else`     | `if, else if, else`     | `if, elif, else:`               | `if, else if, else`     |
| **Switch Case**  | `switch, case, default` | `switch, case, default` | `if-elif` or dictionary mapping | `switch, case, default` |

All languages share similar control flow constructs but with some syntax differences and specific rules (e.g., Go uses `for` as a general loop, Python lacks a native `switch`).

Let me know if you need more details on any specific part!
