nick = input("Insira seu nome de jogador: ")
pontuacao = int(input("Insira sua pontuação no jogo: "))

if pontuacao  >= 500:
    print(f"Passou de nível.\nCongratulations, {nick}!!")
else:
    print("Você não passou de level. Faltam", 500-pontuacao)
    while True:
        op = input("Deseja acelerar a pontuação, adicionando 50 pontos por vez?? (sim/não)")
        if op == "sim" or op == "ss":
            pontuacao += 50
            print(f"Você está com {pontuacao} pontos")
        elif op == "não" or "nn" or "nao":
            print(f"Gamer Over!!! Você terminou o level com {pontuacao} pontos")
            break
        else:
            print("Insira uma resposta válida")
        if pontuacao >= 500:
            print(f"Passou de nível.\nCongratulations, {nick}!!")
            break
