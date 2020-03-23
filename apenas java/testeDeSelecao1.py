vet = [int(x) for x in input().split()]
if (vet[1] > vet[2] and vet[3] > vet[0] and vet[2] + vet[3] > vet[0] + vet[1] and vet[2] > 0 and vet[3] > 0 and vet[0] % 2 == 0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")