numbers = input("Enter integers separated by commas: ")
num_list = [int(x) for x in numbers.split(",")]
positive = [num for num in num_list if num > 0]
print("Positive numbers:", positive)
N = int(input("Enter the value of N: "))
squares = [x**2 for x in range(1, N+1)]
print("Squares:", squares)
word = input("Enter a word: ")
vowels = [ch for ch in word if ch.lower() in 'aeiou']
print("Vowels in the word:", vowels)
word = input("Enter a word: ")
ord_values = [ord(ch) for ch in word]
print("Ordinal values:", ord_values)
