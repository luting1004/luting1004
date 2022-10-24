arr=[1,3,23,11,45,'上三']
print(arr)

print(arr[0:3])
print(arr[1:3:5])

print(arr[0:8:6])

###appends 添加元素  每次添加一个

heros=["黑寡妇",'lvjur']
print(heros)

heros.append('ssss')
print(heros)
heros.extend(['lulu','xixi','kwkw'])
print(heros)


##切片方法
heros[len(heros):]=[23,33,11]
print(heros)

heros[len(heros):]=[100]
print(heros)

heros[len(heros):]='hahah'
print(heros)
##insert
q=[11,3,454,6,1]
q.insert(0,100)
print(q)
##删除

q.remove(11)
q.remove(1)
print(q)

##删除下标元素的值
q.pop(2)
print(q)

heros.clear()
print(heros)
print('==========================')
##改
gra=[1,2,34,5,6,7,89,2,1,1,1,1]
gra[4]='早上好'
print(gra)

gra[:2]=['11','mm','yiyi','haha']
print(gra)


num=[23,3,14,5,76,111,1,1,1,1,1]
num.sort()
print(num)

num.reverse()
print(num)

## 查

nums=num.count(1)

print(nums)
cc=[1,2,3,4,5]
c1=cc.index(5)
print(c1)

c2=cc.copy()
print(c2)
print('这是c1',cc)
cc3=cc[:]
print(cc3)



## 列表的加法和乘法

ltl=[1,2,3]
t=[4,5,6]
print(ltl+t)

print(t*3)

##嵌套列表

matrix=[[1,2,3],[4,5,6],[7,8,9]]
print(matrix)


for i in matrix:
    for each in i:
        print(each,end=' ')

    print()

print(matrix[2])
print(matrix[1][1])

##copy方法拷贝  当一个表发生变化 另一个不会变化

x=[1,3,4]
y=x
x[2]=9
print(x)
print(y)

y1=x.copy()
x[0]=100
print(x)
print(y1)


## 深拷贝
import copy
xx=[[1,2,3],[4,5,6],[7,8,9]]
yy=copy.deepcopy(xx)
xx[1][1]=100
print(xx)
print(yy)

