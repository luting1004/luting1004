

"""10-20练习"""
print("==============")


if 3>5:
    print('我在里面')
print('我在外米娜')
print('=======================')

if "小甲鱼"=="女":
    print("小甲鱼是女的")
else:
    print("小甲鱼不是女的")
print('=======================')

##score=input("请输入你的分数")
##
##score=int(score)
##
##if 0<=score<60:
##    print("D")
##elif 60<=score<80:
##    print('C')
##elif 80<=score<90:
##    print('B')
##elif 90<=score<100:
##    print('A')
##elif score==100:
##    print('S')
##else:
##    print("数据有误")

print('==========普通表达式===========')

age=17

if age<18:
    print("未满18岁")
else:
    print("欢迎您来！")


print("===========条件表达式==========")

print("未满十八！！！！") if age<18 else print("欢迎您来！！")



a=3
b=4
small=a if a<b else b
print(small)

##
##if 0<=score<60:
##    print("D")
##elif 60<=score<80:
##    print('C')
##elif 80<=score<90:
##    print('B')
##elif 90<=score<100:
##    print('A')
##elif score==100:
##    print('S')
##else:
##    print("xxxxx")

grade=99
lev=('d' if 0<=grade<60 else
     'c' if 60<=grade<80 else
     'b' if 80<=grade<90 else
     'a' if 90<=grade<100 else
     's' if grade==100 else
     "请输入正确的数字")
print(lev)



##while True:
##    answer=input("可以退出循环了吗？")
##
##    if answer=="可以":
##        break
##    print("好累")

print('====================')


i=1
while i<=9:
    j=1
    while j<=i:
        print(i,'*',j,'=',i*j,end='   ')
        j=j+1
    print('\n')
    i=i+1

print("===========")

for each in "abdsfsdku":
    print(each)


print("===========")

i=0
while i<len("skdjf我单"):
    print("skdjf我单"[i])
    i=i+1

print("========")


for j in range(1,11):
    print(j)

for i in range(1,23,5):
    print(i)



print("打印1000000 的和")

sum=0
for i in range(10000001):
    sum=sum+i
print(sum)

 

   


 
