text = input("enter a string :")
first_char = text[0]
modified_text = first_char + text[1:].replace(first_char,'$')
print(modified_text)

