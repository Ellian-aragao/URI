valores = [int(x) for x in input().split()]
maior = 0
for i in valores:
    if i > maior:
        maior = i
print('{} eh o maior'.format(maior))
