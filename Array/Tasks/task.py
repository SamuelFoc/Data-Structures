def evenize_list(list: list[int]):
    even_numbers = []
    for number in list:
        if number % 2 == 0:
            even_numbers.append(number)
    return even_numbers

def evenize_list_2(list: list[int]):
    return [item for item in list if item % 2 == 0]

numbers = [1,5,2,9,7,6,3,22,55,44,68]

# even_numbers = evenize_list(numbers)
even_numbers = evenize_list_2(numbers)

print(f"The even numbers in the provided list are: {even_numbers}")