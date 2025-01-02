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

// Submenus
void submenuConfiguracaoInicial();
void submenuGestaoEstudantes();
void submenuConsultasListagens();
void submenuCalculoEstatisticas();
void submenuPersistenciaDados();
void submenuFuncionalidadesExtras();
void submenuExportacaoDados();

// Função para exibir o menu principal
void menu() {
    printf("\n================ MENU PRINCIPAL ================\n");
    printf("1. Configuração Inicial\n");
    printf("2. Gestão de Estudantes\n");
    printf("3. Consultas e Listagens\n");
    printf("4. Cálculo de Estatísticas\n");
    printf("5. Persistência de Dados\n");
    printf("6. Extras (Funcionalidades Opcionais)\n");
    printf("7. Exportação de Dados\n");
    printf("8. Sair\n");
    printf("================================================\n");
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
                submenuConfiguracaoInicial();
                break;
            case 2:
                submenuGestaoEstudantes();
                break;
            case 3:
                submenuConsultasListagens();
                break;
            case 4:
                submenuCalculoEstatisticas();
                break;
            case 5:
                submenuPersistenciaDados();
                break;
            case 6:
                submenuFuncionalidadesExtras();
                break;
            case 7:
                submenuExportacaoDados();
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

// Submenus
void submenuConfiguracaoInicial() {
    int subOpcao;
    do {
        printf("\n=== Configuração Inicial ===\n");
        printf("1. Especificar número máximo de registos ou configurar alocação dinâmica\n");
        printf("2. Carregar ficheiros de dados para memória\n");
        printf("3. Guardar a configuração inicial em ficheiros\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Especificar número máximo de registos ou configurar alocação dinâmica\n");
                break;
            case 2:
                printf("Carregar ficheiros de dados para memória\n");
                break;
            case 3:
                printf("Guardar a configuração inicial em ficheiros\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuGestaoEstudantes() {
    int subOpcao;
    do {
        printf("\n=== Gestão de Estudantes ===\n");
        printf("1. Inserir um novo estudante\n");
        printf("2. Atualizar informações de um estudante existente\n");
        printf("3. Eliminar um estudante\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Inserir um novo estudante\n");
                break;
            case 2:
                printf("Atualizar informações de um estudante existente\n");
                break;
            case 3:
                printf("Eliminar um estudante\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuConsultasListagens() {
    int subOpcao;
    do {
        printf("\n=== Consultas e Listagens ===\n");
        printf("1. Procurar estudante(s) pelo nome (parcial)\n");
        printf("2. Listar estudantes nascidos entre duas datas especificadas\n");
        printf("3. Listar estudantes de até 5 nacionalidades especificadas\n");
        printf("4. Listar estudantes por ordem alfabética do apelido\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Procurar estudante(s) pelo nome (parcial)\n");
                break;
            case 2:
                printf("Listar estudantes nascidos entre duas datas especificadas\n");
                break;
            case 3:
                printf("Listar estudantes de até 5 nacionalidades especificadas\n");
                break;
            case 4:
                printf("Listar estudantes por ordem alfabética do apelido\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuCalculoEstatisticas() {
    int subOpcao;
    do {
        printf("\n=== Cálculo de Estatísticas ===\n");
        printf("1. Quantidade de estudantes em cada escalão etário\n");
        printf("2. Número médio de matrículas (geral e por nacionalidade)\n");
        printf("3. Número de estudantes finalistas (≥ 154 ECTS)\n");
        printf("4. Média de idades dos estudantes de uma nacionalidade\n");
        printf("5. Listar e determinar o número de estudantes em risco de prescrição\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Quantidade de estudantes em cada escalão etário\n");
                break;
            case 2:
                printf("Número médio de matrículas (geral e por nacionalidade)\n");
                break;
            case 3:
                printf("Número de estudantes finalistas (≥ 154 ECTS)\n");
                break;
            case 4:
                printf("Média de idades dos estudantes de uma nacionalidade\n");
                break;
            case 5:
                printf("Listar e determinar o número de estudantes em risco de prescrição\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuPersistenciaDados() {
    int subOpcao;
    do {
        printf("\n=== Persistência de Dados ===\n");
        printf("1. Guardar os dados atuais em ficheiros binários\n");
        printf("2. Carregar dados guardados em binários\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Guardar os dados atuais em ficheiros binários\n");
                break;
            case 2:
                printf("Carregar dados guardados em binários\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuFuncionalidadesExtras() {
    int subOpcao;
    do {
        printf("\n=== Funcionalidades Extras ===\n");
        printf("1. Listar estudantes que fazem anos num dia específico da semana ou ao domingo\n");
        printf("2. Listar estudantes que fazem anos durante a Quaresma\n");
        printf("3. Gerar uma consulta estatística personalizada\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Listar estudantes que fazem anos num dia específico da semana ou ao domingo\n");
                break;
            case 2:
                printf("Listar estudantes que fazem anos durante a Quaresma\n");
                break;
            case 3:
                printf("Gerar uma consulta estatística personalizada\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void submenuExportacaoDados() {
    int subOpcao;
    do {
        printf("\n=== Exportação de Dados ===\n");
        printf("1. Exportar listagens para ficheiros .txt\n");
        printf("2. Exportar listagens para ficheiros .csv\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma sub-opção: ");
        scanf("%d", &subOpcao);

        switch (subOpcao) {
            case 1:
                printf("Exportar listagens para ficheiros .txt\n");
                break;
            case 2:
                printf("Exportar listagens para ficheiros .csv\n");
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (subOpcao != 0);
}

void sairAplicacao() {
    printf("\nSair da aplicação selecionado. Guardar dados...\n");
    // Adicione aqui a implementação para guardar dados antes de sair
}
