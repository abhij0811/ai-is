#is-1
string =input("Enter string")
result_and=""
result_xor=""

for char in string:
    and_val=ord(char)&127
    xor_val=ord(char)^127

    result_and+=chr(and_val)
    result_xor+=chr(xor_val)

print("Orignal string: ",string)
print("AND result:",result_and)
print("XOR result:",result_xor) 