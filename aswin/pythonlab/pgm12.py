number = input("enter number separated by commas:")
num_list = [int(x) for x in number.split(",")]
odd_list = [num for num in num_list if num % 2 !=0]
print("list after removing even numbers:",odd_list)
