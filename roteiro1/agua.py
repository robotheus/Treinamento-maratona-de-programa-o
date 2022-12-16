gasto = int(input())

if(gasto <= 10):
    print(7)
else:
    if(gasto <= 30):
        print(7 + (gasto - 10))
    else:
        if(gasto <= 100):
            print(7 + 20 + 2*(gasto - 30))
        else:
            print(7 + 20 + 140 + 5*(gasto - 100))