import random

vitorias_jogador = 0
vitorias_computador = 0
print("Vamos jogar pedra, papel ou tesoura.")
while vitorias_jogador < 2 and vitorias_computador < 2:

    escolha_jogador = input("Escolha pedra, papel ou tesoura: ").lower()
    escolhas = ["pedra", "papel", "tesoura"]
    escolha_computador = random.choice(escolhas)
    print(" ")
    print(f"O computador escolheu: {escolha_computador}")
    print(" ")

    if (escolha_jogador == "pedra" and escolha_computador == "tesoura") or (escolha_jogador == "tesoura"
                                                                            and escolha_computador == "papel") or (
            escolha_jogador == "papel" and escolha_computador == "pedra"):
        vencedor = "Jogador"
    elif escolha_jogador == escolha_computador:
        vencedor = "Empate"
    else:
        vencedor = "Computador"

    if vencedor == "Jogador":
        vitorias_jogador += 1
        print("Você ganhou.")
        print(" ")
    elif vencedor == "Computador":
        vitorias_computador += 1
        print("O computador ganhou.")
        print(" ")
    else:
        print("Foi um empate")
        print(" ")

print(f"Placar atual - Jogador: {vitorias_jogador}, Computador: {vitorias_computador}")
if vitorias_jogador > vitorias_computador:
    print("Parabéns! Você ganhou.")
else:
    print("O computador ganhou!")
