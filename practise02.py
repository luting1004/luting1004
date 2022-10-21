
"""10.21 练习"""

x=9;
print(x)
import decimal
a=decimal.Decimal('0.1')
b=decimal.Decimal('0.2')
c=a+b
print(c)

print(a+b==c)

x=1+2j
print(x.real)
print(x.imag)

print(3/2)
print(3//2)
print("====================================")

if 12>11:
    print("12大！")
else:
    print("11大~！")


name=input("请输入你的名字")

print("你好"+name)
