
def printValues(r1, r2):
    print('R1 = {:.5f}'.format(r1))
    print('R2 = {:.5f}'.format(r2))


def Delta(a,  b, c):
    return (b**2) - 4 * a * c


def Bhasckara(a, b, delta):
    return [((-b + delta**(1/2))) / (2 * a), ((-b - delta**(1/2)) / (2 * a))]


vet = [float(x) for x in input().split()]
a = vet[0]
b = vet[1]
c = vet[2]
delta = Delta(a, b, c)
if (delta > 0 and a != 0):
    x = Bhasckara(a, b, delta)
    printValues(x[0], x[1])
else:
    print('Impossivel calcular')
