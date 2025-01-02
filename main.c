
#include <stdio.h>
#include "file_utils.c"


#include <stdio.h>
#include <stdlib.h>

void menu() {
    printf("\n================ MENU PRINCIPAL ================\n");
    printf("1. Configuração Inicial\n");
    printf("   1.1. Especificar número máximo de registos ou configurar alocação dinâmica\n");
    printf("   1.2. Carregar ficheiros de dados para memória\n");
    printf("   1.3. Guardar a configuração inicial em ficheiros\n");
    printf("2. Gestão de Estudantes\n");
    printf("   2.1. Inserir um novo estudante\n");
    printf("   2.2. Atualizar informações de um estudante existente\n");
    printf("   2.3. Eliminar um estudante (e os dados correspondentes à situação escolar)\n");
    printf("3. Consultas e Listagens\n");
    printf("   3.1. Procurar estudante(s) pelo nome (parcial)\n");
    printf("   3.2. Listar estudantes nascidos entre duas datas especificadas\n");
    printf("   3.3. Listar estudantes de até 5 nacionalidades especificadas\n");
    printf("   3.4. Listar estudantes por ordem alfabética do apelido\n");
    printf("4. Cálculo de Estatísticas\n");
    printf("   4.1. Quantidade de estudantes em cada escalão etário (especificado pelo utilizador)\n");
    printf("   4.2. Número médio de matrículas (geral e por nacionalidade)\n");
    printf("   4.3. Número de estudantes finalistas (≥ 154 ECTS)\n");
    printf("   4.4. Média de idades dos estudantes de uma nacionalidade (filtrados pelo ano frequentado)\n");
    printf("   4.5. Listar e determinar o número de estudantes em risco de prescrição\n");
    printf("5. Persistência de Dados\n");
    printf("   5.1. Guardar os dados atuais em ficheiros binários\n");
    printf("   5.2. Carregar dados guardados em binários no arranque do programa\n");
    printf("6. Extras (Funcionalidades Opcionais)\n");
    printf("   6.1. Listar estudantes que fazem anos num dia específico da semana ou ao domingo, num dado ano\n");
    printf("   6.2. Listar estudantes que fazem anos durante a Quaresma (entre o Carnaval e a Páscoa)\n");
    printf("   6.3. Gerar uma consulta estatística personalizada\n");
    printf("7. Exportação de Dados\n");
    printf("   7.1. Exportar listagens para ficheiros .txt\n");
    printf("   7.2. Exportar listagens para ficheiros .csv\n");
    printf("8. Sair\n");
    printf("   8.1. Guardar automaticamente todos os dados antes de sair\n");
    printf("   8.2. Encerrar a aplicação\n");
    printf("================================================\n");
}

int main() {
    int opcao;

    do {
        menu();
        printf("\nEscolha uma opção (ou 0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nOpção 1: Configuração Inicial selecionada.\n");
                // Implementar sub-opções 1.1, 1.2, 1.3
                break;
            case 2:
                printf("\nOpção 2: Gestão de Estudantes selecionada.\n");
                // Implementar sub-opções 2.1, 2.2, 2.3
                break;
            case 3:
                printf("\nOpção 3: Consultas e Listagens selecionada.\n");
                // Implementar sub-opções 3.1, 3.2, 3.3, 3.4
                break;
            case 4:
                printf("\nOpção 4: Cálculo de Estatísticas selecionada.\n");
                // Implementar sub-opções 4.1, 4.2, 4.3, 4.4, 4.5
                break;
            case 5:
                printf("\nOpção 5: Persistência de Dados selecionada.\n");
                // Implementar sub-opções 5.1, 5.2
                break;
            case 6:
                printf("\nOpção 6: Funcionalidades Extras selecionada.\n");
                // Implementar sub-opções 6.1, 6.2, 6.3
                break;
            case 7:
                printf("\nOpção 7: Exportação de Dados selecionada.\n");
                // Implementar sub-opções 7.1, 7.2
                break;
            case 8:
                printf("\nOpção 8: Sair selecionada.\n");
                // Implementar sub-opções 8.1, 8.2
                break;
            case 0:
                printf("\nA encerrar a aplicação...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
