for i in range(1,int(height)-1):
    x = '.|.' * i
    out = x.center(int(width),"-")
    print(out)
wel = "WELCOME".center(int(width),'-')      
print(wel)       
for i in range(1,int(height)-1):
    x = '.|.' * (int(height)-i-1)
    out = x.center(int(width),"-")
    print(out)
