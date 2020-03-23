eixo = [float (x) for x in input().split()]
if eixo[0] > 0:
    if eixo[1] > 0:
        print("Q1")
    elif eixo[1] < 0:
        print("Q4")
    else:
        print("Eixo X")    
elif eixo[0] < 0:
    if eixo[1] > 0:
        print("Q2")
    elif eixo[1] < 0:
        print("Q3")
    else:
        print("Eixo X")
elif eixo[1] != 0:
    print("Eixo Y")
else:
    print("Origem")
