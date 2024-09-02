#Criando um objeto usando simbolos, colunas e linhas usando Loops

Col = int(input("Insira a quantidade de colunas: "))
Li = int(input("Insira a quantidade de linhas: "))
Sim = input("Insira qual tipo de simbolo vai ser usado(*,%,$,@): ")

for i in range(Li):
    for j in range(Col):
        print(Sim, end="")
    print()

