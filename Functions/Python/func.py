def say_hello():
    print("Hello, World!")

def add(a:int, b:int):
    return a + b

subtract = lambda a, b: a - b

def main():
    say_hello()
    print("5 + 2 =", add(5, 2))
    print(f"5 + 2 = {subtract(5, 2)}")

main()