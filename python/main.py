num = input("enter your number with dashes")
for i in reversed(range(1,len(num))):
    if(num[i]=='-'):
        continue
    else:
        print(num[i],end = '')
