def main():
    x = 10
    arr = [1,2,3,4,5]

    print("For loop:")
    for item in arr:
        print(item)

    print("While loop:")
    iterator = 0
    while iterator < 5:
        print(iterator)
        iterator += 1

    print("Switch case:")
    cases = {
        0: "X = 0",
        10: "X = 10",
    }
    print(cases.get(x, "X is not equal either to 0 or 10"))

main()