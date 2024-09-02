#almoco = ["arroz", "feijao", "carne"]
#janta = ["arroz", "veijao", "xburig"]
#rango = [almoco, janta]
#for i in rango:
 #       print(i)
valores = [0.0] * 6
i = 0
while True:
    print(f"Valor {i + 1}: ", end="")
    valores[i] = float(input())
    i = (i + 1) % 6
    if valores[i - 1] == 0:
        break
for value in valores:
    print(f"{value:.2f}", end="  ")

