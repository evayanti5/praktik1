bilangan = int(input())
for i in range (1, bilangan) :
    if i % 2 != 0 :
        print(i, end=' ')
print("\n")
while bilangan > 0 :
    if bilangan % 2 == 0 :
        print(bilangan, end=' ')
    bilangan -= 1