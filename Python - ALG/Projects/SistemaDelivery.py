comida_indiana = ["Curry", "Chutney", "Samosa", "Naan"]
comida_italiana = ["Pasta à Bolonhesa", "Pizza de Pepperoni", "Pizza Margherita", "Lasanha"]


def encontrar_refeicao(nome, menu):
    return nome if nome in menu else None


def selecionar_refeicao(nome, tipo_comida):
    if tipo_comida == "Italiana":
        return encontrar_refeicao(nome, comida_italiana)
    elif tipo_comida == "Indiana":
        return encontrar_refeicao(nome, comida_indiana)
    else:
        return None


def exibir_refeicoes_disponiveis(tipo_comida):
    if tipo_comida == "Italiana":
        print("Refeições Italianas Disponíveis: ")
        for comida in comida_italiana:
            print(comida)
    elif tipo_comida == "Indiana":
        print("Refeições Indianas Disponíveis: ")
        for comida in comida_indiana:
            print(comida)
    else:
        print("Tipo de comida inválido")


def criar_resumo(nome, quantidade, tipo_comida):
    pedido = selecionar_refeicao(nome, tipo_comida)
    if pedido:
        return f"Refeição {pedido} de quantidade {quantidade}"
    else:
        return "Refeição não encontrada"


print("Bem-vindo ao Sistema de Pedido de Comida!")
tipo_input = input("Qual tipo de comida você gostaria: ")
exibir_refeicoes_disponiveis(tipo_input)
print("\n")
nome_input = input("Qual comida você gostaria: ")
quantidade_input = input("Quantidade: ")
resultado = criar_resumo(nome_input, quantidade_input, tipo_input)
print(resultado)
