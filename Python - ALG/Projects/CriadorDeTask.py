todo_list = []
while True:

    if not todo_list:
        print("Sua lista de tarefas está vazia")
    else:
        index = 1
    for task in todo_list:
        print(f"{index}. {task}")
        index += 1
    print(" ")
    print("Opções:")
    print("1) Adicionar Tarefa")
    print("2) Remover Tarefa")
    print("3) Sair")
    choice = input("--> ")
    if choice == "1":
        new_task = input("Digite a tarefa: ")
        todo_list.append(new_task)
        print(f"Tarefa {new_task} adicionada.\n")
        print("Adicionando tarefa...\n")
    elif choice == "2":
        if not todo_list:
            print("Está vazia")
        else:
            todo_list.pop()
    elif choice == "3":
        print("Saindo")
        break
