#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Protótipos das funções
void configuracaoInicial();
void gestaoEstudantes();
void consultasListagens();
void calculoEstatisticas();
void persistenciaDados();
void funcionalidadesExtras();
void exportacaoDados();
void sairAplicacao();

// Função para exibir o menu principal
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

// Implementação das funções
void configuracaoInicial() {
    printf("\nConfiguração Inicial selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void gestaoEstudantes() {
    printf("\nGestão de Estudantes selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void consultasListagens() {
    printf("\nConsultas e Listagens selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void calculoEstatisticas() {
    printf("\nCálculo de Estatísticas selecionado.\n");
    // Adicione aqui a implementação da funcionalidade
}

void persistenciaDados() {
    printf("\nPersistência de Dados selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void funcionalidadesExtras() {
    printf("\nFuncionalidades Extras selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void exportacaoDados() {
    printf("\nExportação de Dados selecionada.\n");
    // Adicione aqui a implementação da funcionalidade
}

void sairAplicacao() {
    printf("\nSair da aplicação selecionado. Guardar dados...\n");
    // Adicione aqui a implementação para guardar dados antes de sair
}

int main() {
    setlocale(LC_ALL, "pt_PT.utf8"); // Configurar para português de Portugal

    int opcao;

    do {
        menu();
        printf("\nEscolha uma opção (ou 0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                configuracaoInicial();
                break;
            case 2:
                gestaoEstudantes();
                break;
            case 3:
                consultasListagens();
                break;
            case 4:
                calculoEstatisticas();
                break;
            case 5:
                persistenciaDados();
                break;
            case 6:
                funcionalidadesExtras();
                break;
            case 7:
                exportacaoDados();
                break;
            case 8:
                sairAplicacao();
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
