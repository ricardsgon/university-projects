import random

opcoes = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
escolhido = random.choice(opcoes)

nome = input("Escolha seu nome" + ": ")
print(f"Bem-vindo, {nome}.")
print(" ")

print("Vamos testar sua sorte, certo?")
print("Insira um número entre 1 e 20")

numero = int(input("Escolha: "))
print(" ")

print(f"Ok, você escolheu {numero}, esperando o melhor, {nome}.")
print(f"Número sorteado: {escolhido}")

if numero != escolhido:
   print("Sem sorte.")

else:
    print("Sortudo!")
