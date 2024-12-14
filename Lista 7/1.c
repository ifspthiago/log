#include <stdio.h>
#include <string.h>

int main() {
    int max = 5;
    char nomes[max][60];
    char enderecos[max][200];
    char telefones[max][15];
    int idades[max];
    char opcao;
    int total_cadastros = 0;

    do {
        printf("\nMenu da Agenda:\n\n");
        printf("Cadastro (C)\n");
        printf("Pesquisa de registro por idade (P)\n");
        printf("Classificação alfabética (A)\n");
        printf("Alteração de registro digitado com erro (E)\n");
        printf("Sair do menu (S)\n\n");
        printf("\nEscolha uma opção: ");
        scanf(" %c", &opcao);

        if (opcao == 'C' || opcao == 'c') {
            if (total_cadastros < max) {
                printf("\nInsira seu nome: ");
                scanf(" %[^\n]", nomes[total_cadastros]);
                printf("Insira seu endereço (Nome da Rua, Número): ");
                scanf(" %[^\n]", enderecos[total_cadastros]);
                printf("Insira seu telefone '(xx) xxxxx-xxxx': ");
                scanf(" %[^\n]", telefones[total_cadastros]);
                printf("Insira sua idade: ");
                scanf("%d", &idades[total_cadastros]);
                ++total_cadastros;
            } else {
                printf("\nLimite de cadastros atingido.\n");
            }
        }

        if (opcao == 'P' || opcao == 'p') {
            if (total_cadastros == 0) {
                printf("Cadastro não encontrado.\n");
            } else {
                int pesquisa;
                printf("\nInsira a idade para pesquisa: ");
                scanf("%d", &pesquisa);
                
                int encontrado = 0;
                printf("\nResultados com idade %d:\n", pesquisa);
                for (int i = 0; i < total_cadastros; ++i) {
                    if (idades[i] == pesquisa) {
                        printf("Nome: %s\nEndereço: %s\nTelefone: %s\nIdade: %d\n", 
                               nomes[i], enderecos[i], telefones[i], idades[i]);
                        encontrado = 1;
                    }
                }
                if (encontrado == 0) {
                    printf("Nenhum resultado.\n");
                }
            }
        }

        if (opcao == 'A' || opcao == 'a') {
            if (total_cadastros == 0) {
                printf("Nenhum resultado.\n");
            } else {
                for (int i = 0; i < total_cadastros - 1; ++i) {
                    for (int j = i + 1; j < total_cadastros; ++j) {
                        if (strcmp(nomes[i], nomes[j]) > 0) {
                            char temp_nome[60];
                            char temp_endereco[200];
                            char temp_telefone[15];
                            int temp_idade;

                            strcpy(temp_nome, nomes[i]);
                            strcpy(nomes[i], nomes[j]);
                            strcpy(nomes[j], temp_nome);

                            strcpy(temp_endereco, enderecos[i]);
                            strcpy(enderecos[i], enderecos[j]);
                            strcpy(enderecos[j], temp_endereco);

                            strcpy(temp_telefone, telefones[i]);
                            strcpy(telefones[i], telefones[j]);
                            strcpy(telefones[j], temp_telefone);

                            temp_idade = idades[i];
                            idades[i] = idades[j];
                            idades[j] = temp_idade;
                        }
                    }
                }

                printf("\nClassificação alfabética:\n");
                for (int i = 0; i < total_cadastros; ++i) {
                    printf("Nome: %s\nEndereço: %s\nTelefone: %s\nIdade: %d\n", nomes[i], enderecos[i], telefones[i], idades[i]);
                }
            }
        }

        if (opcao == 'E' || opcao == 'e') {
            if (total_cadastros == 0) {
                printf("Nenhum cadastro para edição.\n");
            } else {
                char nome_pesquisa[60];
                printf("\nInsira o nome do cadastro que deseja editar: ");
                scanf(" %[^\n]", nome_pesquisa);
                int encontrado = -1;
                for (int i = 0; i < total_cadastros; ++i) {
                    if (strcmp(nomes[i], nome_pesquisa) == 0) {
                        encontrado = i;
                        break;
                    }
                }
                if (encontrado != -1) {
                    printf("Resultado:\n");
                    printf("Nome: %s\nEndereço: %s\nTelefone: %s\nIdade: %d\n", nomes[encontrado], enderecos[encontrado], telefones[encontrado], idades[encontrado]);
                    printf("\nInsira o novo nome (Enter para manter): ");
                    char novo_nome[60];
                    fgets(novo_nome, sizeof(novo_nome), stdin);
                    novo_nome[strcspn(novo_nome, "\n")] = 0;
                    if (strlen(novo_nome) > 0) {
                        strcpy(nomes[encontrado], novo_nome);
                    }

                    printf("\nInsira o novo endereço (Enter para manter): ");
                    char novo_endereco[200];
                    fgets(novo_endereco, sizeof(novo_endereco), stdin);
                    novo_endereco[strcspn(novo_endereco, "\n")] = 0;
                    if (strlen(novo_endereco) > 0) {
                        strcpy(enderecos[encontrado], novo_endereco);
                    }

                    printf("\nInsira o novo telefone (Enter para manter): ");
                    char novo_telefone[15];
                    fgets(novo_telefone, sizeof(novo_telefone), stdin);
                    novo_telefone[strcspn(novo_telefone, "\n")] = 0;
                    if (strlen(novo_telefone) > 0) {
                        strcpy(telefones[encontrado], novo_telefone);
                    }

                    printf("\nInsira a nova idade (Enter para manter): ");
                    char buffer[10];
                    int nova_idade;
                    fgets(buffer, sizeof(buffer), stdin);
                    if (strlen(buffer) > 1) {
                        scanf(buffer, "%d", &nova_idade);
                        idades[encontrado] = nova_idade;
                    }

                    while (getchar() != '\n');

                    printf("Cadastro atualizado.\n");
                } else {
                    printf("Cadastro de '%s' não encontrado.\n", nome_pesquisa);
                }
            }
        }

    } while (opcao != 'S' && opcao != 's');

    printf("Programa finalizado...\n");
    return 0;
}