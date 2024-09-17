def sum_even_items(list: list [int]):
    sum = 0

    for item in list:
        if item % 2 == 0:
            sum += item
    
    return sum

numbers = [1, 2, 3, 4, 5, 6]

sum = sum_even_items(numbers)    

print(f"The sum of even numbers within the list is: {sum}!")