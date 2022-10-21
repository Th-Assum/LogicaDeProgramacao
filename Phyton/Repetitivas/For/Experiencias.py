n = int(input("Quantos casos de teste serão digitados ? "))
coelhos = 0
ratos = 0
sapos = 0
total = 0
for i in range(n):
    cobaias = int(input("Quantidade de cobaias: "))
    tipo = input("Tipo de cobaia: ")

    if(tipo == 'c' or tipo == "C"):
        coelhos += cobaias
        total += cobaias
    elif(tipo == 's' or tipo == 'S'):
        sapos += cobaias
        total += cobaias
    elif(tipo == 'r' or tipo == 'R'):
        ratos += cobaias
        total += cobaias
    else:
        print("Incorreto !!")

percentualCoelhos = coelhos * 100/total
percentualRatos = ratos * 100/total
percentualSapos = sapos * 100/total

print("RELATORIO FINAL: ")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de Sapos: {sapos}")
print(f"Total de Ratos: {ratos}")
print(f"Percentual de coelhos: {percentualCoelhos:.2f}")
print(f"Percentual de Ratos: {percentualRatos:.2f}")
print(f"Percentual de Sapos: {percentualSapos:.2f}")
