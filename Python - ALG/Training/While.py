nome = ""
idade = ""
sexo = ""
while len(nome) == 0:
    nome = (input("Insira seu nome: "))
while len(idade) == 0:
    idade = (input("Insira sua idade: "))
while len(sexo) == 0:
    sexo = (input("Insira seu gênero: "))
print("Seu nome é: "+nome)
print("Sua idade é: "+idade)
print("Seu gênero é: "+sexo)