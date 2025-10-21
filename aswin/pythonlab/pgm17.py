n = int(input("Enter number of items in dictionary: "))
my_dict = {}


for i in range(n):
    key = input("Enter key: ")
    value = input("Enter value: ")
    my_dict[key] = value

asc = dict(sorted(my_dict.items()))
desc = dict(sorted(my_dict.items(), reverse=True))

print("Ascending order:", asc)
print("Descending order:", desc)
