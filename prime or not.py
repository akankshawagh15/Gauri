# prime number or not from 1-100
minimum=1
maximum=100
print("prime number between",minimum,"and",maximum,"are:")
for num in range(minimum,maximum+1):
    if num>1:
        for i in range(2,num):
            if(num % i)==0:
                break
        else:
            print(num)