notas = [float(x) for x in input().split()]
notas[0] *= 2
notas[1] *= 3
notas[2] *= 4
notas[3] *= 1

media = (notas[0] + notas[1] + notas[2] + notas[3]) / 10

if media >= 7:
    print('Media: {:.1f}'.format(media))
    print('Aluno aprovado.')
elif media < 5:
    print('Media: {:.1f}'.format(media))
    print('Aluno reprovado.')
else:
    aux = float(input())
    print('Media: {:.1f}'.format(media))
    print('Aluno em exame.')
    print('Nota do exame: {:.1f}'.format(aux))
    media = (media + aux) / 2
    if media >= 5:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(media))
