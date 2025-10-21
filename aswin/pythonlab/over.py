numbers = input("Enter a list of integers seperate by space :").split()

result = []

for num in numbers:
    n= int(num)
    if n > 100:
        result.append("over")
    else:
        result.append(n)

    print("Processed list :",result)
