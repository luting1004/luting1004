"""小游戏的改进"""
import random
answer=random.randint(1,20)
print(answer)
counts=3
while counts>0:
    temp=input('猜猜我的数字')
 
    guess=int(temp)
    if guess==answer:
        print('猜对啦')
        print('也没有奖励')
        break
    else:
        if guess<answer:
            print('猜小了')
        else:
            print('猜大了')
            counts=counts-1
            
print('游戏结束！不玩了')


 
