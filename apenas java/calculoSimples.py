total = 0.0
for i in range(2):
    itens = [float (x) for x in input().split()]
    total += itens[1] * itens[2]
print("VALOR A PAGAR: R$ {:.2f}".format(total))