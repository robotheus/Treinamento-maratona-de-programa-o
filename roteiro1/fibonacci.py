n = int(input())

x = 0
y = 1

while(n > 0):
    print(x, end="")
    
    if(n > 1):
        print(" ", end="")
    
    aux = x + y
    x = y
    y = aux

    n = n - 1

print()