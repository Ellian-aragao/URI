vet = [float(x) for x in input().split()]

total = (vet[0] * vet[2])/2
print('TRIANGULO: {:.3f}'.format(total))

total = vet[2] * vet[2] * 3.14159
print('CIRCULO: {:.3f}'.format(total))

total = ((vet[0] + vet[1])*vet[2])/2
print('TRAPEZIO: {:.3f}'.format(total))

total = vet[1] * vet[1]
print('QUADRADO: {:.3f}'.format(total))

total = vet[0] * vet[1]
print('RETANGULO: {:.3f}'.format(total))
