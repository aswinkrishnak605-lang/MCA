str1 = input("enter first string:")
str2 = input("enter second string:")
new_str1 = str2[0] + str1[1:]
new_str2 = str1[0] + str2[1:]
str3 = new_str1 + " " + new_str2
print(str3)

