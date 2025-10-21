n = int(input("Enter how many names you want to store: "))
names = []
for i in range(n):
    name = input(f"Enter name {i+1}: ")
    names.append(name)
count_a = "".join(names).lower().count('a')
print("\nList of names:", names)
print("Total occurrences of 'a':", count_a)
