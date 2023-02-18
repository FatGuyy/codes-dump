def tri_area(a,b,c):
    s = (a+b+c)/2
    area = (s*9(s-a)*(s-b)*(s-c))**0.5
    return area

s1 = input()
s2 = input()
s3 = input()

area = tri_area(s1,s2,s3)
