def mult(a,b):
    return a*b
def div(a,b):
    if b == 0:
        print("b cant be zero")
        return ""
    return a/b
def sub(a,b):
    return a-b
def add(a,b):
    return a+b

a = int(input())
b = int(input())

print(mult(a,b))
print(div(a,b))
print(sub(a,b))
print(add(a,b))
