dia = int(input())
diafinal = dia % 365
ano = int((dia - diafinal)/365)
diafinal = diafinal % 30
mes = int((dia - ano * 365 - diafinal)/ 30)
print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(ano, mes, diafinal))
