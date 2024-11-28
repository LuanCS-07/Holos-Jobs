#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


typedef struct{
    int log_cad_his;
    int lch;
    char nome_empresa[100];
    char cnpj[150];
    char email[256];
    char telefone[20];
    char senha[20];
    char conf_senha[20];
    int num;
    char nicho[50];
    
    char log_nome_empresa[100];
    char log_cnpj[15];
    char log_senha[20];
} Empresa; 

typedef struct{
    char nome_cand[100];
    char cpf[160] ;
    char cargo[100];
    char telefone_cand[20];
    char email_cand[256];
    char cidade[100];
} Candidatos;

void dados_candidatos (Candidatos* candidatos){

    strcpy(candidatos[0].nome_cand, "Joao Pedro da Silva");
    strcpy(candidatos[0].cpf, "749.874.357-83");
    strcpy(candidatos[0].cargo, "Advogado Trabalhista");
    strcpy(candidatos[0].telefone_cand, "(11) 97439-8349");
    strcpy(candidatos[0].email_cand, "joaosilva@gmail.com");
    strcpy(candidatos[0].cidade, "Sao Paulo - SP");

    strcpy(candidatos[1].nome_cand, "Camila Alves Dias");
    strcpy(candidatos[1].cpf, "567.892.314-56");
    strcpy(candidatos[1].cargo, "Advogada Contratualista");
    strcpy(candidatos[1].telefone_cand, "(11) 99567-4476");
    strcpy(candidatos[1].email_cand, "camiladias@gmai.com");
    strcpy(candidatos[1].cidade, "Sao Paulo - SP");

    strcpy(candidatos[2].nome_cand, "Clara Maria Junqueira");
    strcpy(candidatos[2].cpf, "734.829.408-29");
    strcpy(candidatos[2].cargo, "Desenvolvedora Back-end");
    strcpy(candidatos[2].telefone_cand, "(11) 98473-6789");
    strcpy(candidatos[2].email_cand, "claradev@gami.com");
    strcpy(candidatos[2].cidade, "Sao Paulo - SP");

    strcpy(candidatos[3].nome_cand, "Marcio Dantas Hilário");
    strcpy(candidatos[3].cpf, "786.943.516-91");
    strcpy(candidatos[3].cargo, "Engenheiro de Dados");
    strcpy(candidatos[3].telefone_cand, "(11) 99145-6572");
    strcpy(candidatos[3].email_cand, "marciodantas@gmail.com");
    strcpy(candidatos[3].cidade, "Sao Paulo - SP");

    strcpy(candidatos[4].nome_cand, "Julia Monteiro Aguiar");
    strcpy(candidatos[4].cpf, "723.915.475-21");
    strcpy(candidatos[4].cargo, "Web Designer");
    strcpy(candidatos[4].telefone_cand, "(11) 99857-7313");
    strcpy(candidatos[4].email_cand, "juliadantas@gmail.com");
    strcpy(candidatos[4].cidade, "Sao Paulo - SP");

    strcpy(candidatos[5].nome_cand, "Paulo Matheus de Souza");
    strcpy(candidatos[5].cpf, "922.986.738-29");
    strcpy(candidatos[5].cargo, "Auxiliar Logistico");
    strcpy(candidatos[5].telefone_cand, "(11) 99875-1546");
    strcpy(candidatos[5].email_cand, "paulosouza@gmail.com");
    strcpy(candidatos[5].cidade, "Sao Paulo - SP");

    strcpy(candidatos[6].nome_cand, "Marina Sousa Alencar");
    strcpy(candidatos[6].cpf, "315.647.893-14");
    strcpy(candidatos[6].cargo, "Coordenadora Logistica");
    strcpy(candidatos[6].telefone_cand, "(11) 99156-7342");
    strcpy(candidatos[6].email_cand, "mariannaalencar@gmail.com");
    strcpy(candidatos[6].cidade, "Sao Paulo - SP");

    strcpy(candidatos[7].nome_cand, "Eloanda Ribeiro das Neves");
    strcpy(candidatos[7].cpf, "723.749.128-27");
    strcpy(candidatos[7].cargo, "Enfermeira");
    strcpy(candidatos[7].telefone_cand, "(11) 99287-6212");
    strcpy(candidatos[7].email_cand, "eloandaneves@gmail.com");
    strcpy(candidatos[7].cidade, "Sao Paulo - SP");

    strcpy(candidatos[8].nome_cand, "Alan Machado de Assis");
    strcpy(candidatos[8].cpf, "948.264.829-34");
    strcpy(candidatos[8].cargo, "Coordenador Hospitalar");
    strcpy(candidatos[8].telefone_cand, "(11) 99276-6312");
    strcpy(candidatos[8].email_cand, "alanmachado@gmail.com");
    strcpy(candidatos[8].cidade, "Sao Paulo - SP");
}

void log_cad_his(Empresa*empresa){
    do{
    printf("1 - Login.\n");
    printf("2 - Cadastro.\n");
    printf("3 - Historia da Empresa.\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &empresa->log_cad_his);
    getchar();
        if (empresa->log_cad_his > 3 || empresa->log_cad_his < 1){
            printf("\n\n\033[31mNumero Invalido!\nDigite uma das 3 opcoes!\033[0m\n");
        }
    }while(empresa->log_cad_his > 3 || empresa->log_cad_his < 1);
    switch(empresa->log_cad_his){
        case 1:
            printf("\n Login.\n\n");

            printf("Digite o nome da Empresa:");
            scanf("%99[^\n]", empresa->log_nome_empresa);
            getchar();


            printf("\n\nDigite o CNPJ:");
            scanf("%14[^\n]", empresa->log_cnpj);
            getchar();

            printf("\n\nDIgite sua senha:");
            scanf("%19[^\n]", empresa->log_senha);
            getchar();

            if(strcmp(empresa->log_nome_empresa, empresa->nome_empresa)!=0){
                printf("\n\n\033[31mNome ou CNPJ ou Senha Invalidos\033[0m\n\n");
                exit(1);
            }

            else if (strcmp(empresa->log_cnpj, empresa->cnpj)!=0){
                printf("\n\n\033[31mNome ou CNPJ ou Senha Invalidos\033[0m\n\n");
                exit(1);
            }

            else if(strcmp(empresa->log_senha, empresa->senha)!=0){
                printf("\n\n\033[31mNome ou CNPJ ou Senha Invalidos\033[0m\n\n");
                exit(1);
            }
            break;

        case 2:
            break;

        case 3:
            printf("\n\n\033[34mSobre a Holos Jobs\n\n\n\033[0m" );
            printf("Holos Jobs e a Inovacao no Recrutamento\n\n"
            "Fundada em 2022, em meio ao aumento significativo da taxa de desemprego no Brasil devido a pandemia de COVID-19,\n"
            "a Holos Jobs surgiu para atender uma demanda crescente por plataformas de busca e publicacao de vagas de emprego.\n "
            "Segundo dados da Abrita (2021), que relataram um alto indice de demissoes em 2020, a empresa viu a oportunidade\n"
             "de conectar empresas a candidatos de forma eficaz.\n\n"

            "A missao principal da Holos Jobs e facilitar o processo de recrutamento e selecao, proporcionando um ambiente onde\n"
            " empresas e candidatos possam se conectar diretamente e negociar condicoes de trabalho.\n "
            "De acordo com Ventura (2021), o recrutamento envolve localizar e atrair candidatos para as vagas disponiveis em uma\n"
            "organizacao.\n\n"

            "A empresa se fundamenta em valores como paixao, excelencia, honestidade, resolucao e comprometimento, alinhando\n"
            "suas praticas com os principios da etica profissional e dos direitos humanos, conforme afirmam Antonio Djalma Braga\n"
            "Junior e Ivan Luiz Monteiro (2023).\n "
            "A Holos Jobs busca oferecer um servico de qualidade e confianca, ajudando a resolver o problema do desemprego\n"
            "e promovendo uma vida digna para os individuos.\n\n"

            "Em um mercado de trabalho regido pela lei da oferta e da procura, os candidatos precisam de habilidades, aptidoes\n"
            "e conhecimentos especificos para se destacarem na busca por emprego (Joseanne, 2021).\n "
            "A Holos Jobs atua nesse cenario, oferecendo uma plataforma que facilita a conexao entre empresas e candidatos qualificados.\n\n"

            "Inovacao no Processo de Recrutamento\n\n"
            "Imagine uma empresa que inverteu o processo tradicional de recrutamento: em vez de os candidatos buscarem vagas, a propria\n"
            "empresa toma a iniciativa de procurar talentos.\n "
            "Esta abordagem proativa permite identificar e atrair os melhores profissionais do mercado, incluindo aqueles que nao estao\n"
            "ativamente procurando emprego.\n "
            "Combinando analise de dados e inteligencia artificial, a empresa mapeia perfis ideais e estabelece conexoes diretas com potenciais\n"
            "candidatos, oferecendo oportunidades que se alinhem perfeitamente com suas habilidades e aspiracoes.\n "
            "Essa estrategia nao so assegura um recrutamento mais eficiente e assertivo, mas tambem fortalece a imagem da empresa como\n"
            "empregadora de escolha, que valoriza e investe no potencial humano.\n\n"

            "Esse metodo inovador de recrutamento representa um avanco significativo nas praticas de gestao de talentos, alinhando-se com as\n"
            "tendencias contemporaneas de personalizacao e eficiencia.\n "
            "Ao adotar essa abordagem, a empresa maximiza suas chances de encontrar os melhores talentos e demonstra um compromisso genuino com\n"
            "o desenvolvimento e o bem-estar de seus colaboradores.\n "
            "Ademais, a proatividade na busca por candidatos qualificados facilita a construcao de um ambiente de trabalho diversificado e dinamico,\n"
            "essencial para a inovacao e o crescimento sustentavel da organizacao.\n\n"

            "Em sintese, a inversao do processo de recrutamento simboliza uma evolucao estrategica que pode transformar a maneira como as empresas\n"
            "atraem e retem talentos, promovendo uma cultura corporativa mais inclusiva e orientada para o futuro.\n\n"

            "REFERENCIAS BIBLIOGRAFICAS:\n"
            "1. Mateus Boldrine Abrita. Covid-19: impactos da pandemia na economia brasileira, p. 12\n"
            "2. Joseanne de Lima Sales Camelo. Gestao de carreira, p. 159\n"
            "3. Emerson W. Dias. Carreira: a essencia sobre a forma, p. 7\n"
            "4. Vera Lucia da Silva Ventura, Gestao Estrategica de Pessoas: Com Foco no Comprometimento Organizacional, p. 38\n"
            "5. Antonio Djalma Braga Junior & Ivan Luiz Monteiro, Fundamentos da etica, p. 189\n");
            exit(1);
            break;
    }
}

void cadastro_empresa(Empresa*empresa){

    printf("\n\nCadastro:\n\n"); // Somente caso seja selecionado para se cadastra!

    printf("Nome da Empresa: ");
    scanf("%99[^\n]", empresa->nome_empresa); //lendo com um limite de caracteres de 99 parando no \n.
    getchar(); //Remove p \n

    printf("\n\nDigite o CNPJ: ");

    scanf("%14[^\n]", empresa->cnpj);
    getchar();

    printf("\n\nDigite seu e-mail: ");

    scanf("%255[^\n]", empresa ->email);
    getchar();

    printf("\n\nDigite seu telefone no formato (xx) xxxxx-xxxx: ");

    scanf("%14[^\n]", empresa->telefone);
    getchar();

    do{
            printf("\n\nDigite sua senha: ");

        scanf("%19[^\n]", empresa->senha);
        getchar();

        printf("\n\nDigite sua senha Novamente: ");

        scanf("%19[^\n]", empresa->conf_senha);
        getchar();

            if (strcmp(empresa->senha, empresa->conf_senha) != 0) {
                printf("\n\033[31mErro: As senhas nao correspondem. \033[0m\n");
            }
    }while(strcmp(empresa->senha, empresa->conf_senha) != 0);

    printf("\n\033[32mSenha Compativel! \033[0m\n");

    printf("\nNicho\n");

    do{
        printf("\n1 - Tecnologia\n");
        printf("2 - Direito\n");
        printf("3 - Saude\n");
        printf("4 - Logistica\n\n");
        printf("Digite o numero correpondente ao seu Nicho: ");
        scanf("%d",&empresa->num);

            if (empresa->num > 4 || empresa->num < 1){
                printf("\n\033[31mErro. Digite um numero correspondente a algum Nicho! \033[0m\n");
            }
    }while(empresa->num > 4 || empresa->num < 1);

    switch(empresa->num){
        case 1:
            strcpy(empresa->nicho, "Tecnologia"); //usando strcpy para copiar o texto para uma variavel de string
            break;

        case 2:
            strcpy(empresa->nicho, "Direito");
            break;

        case 3:
            strcpy(empresa->nicho, "Saude");
            break;

        case 4:
            strcpy(empresa->nicho, "Logistica");
            break;
    }
}
void exibir_empresa(const Empresa* empresa){ 
                                      
    printf("\n\n\033[32mEMPRESA CADASTRADA!\033[0m\n");
    printf("Nome: %s\n", empresa->nome_empresa);
    printf("CNPJ: %s\n", empresa->cnpj);
    printf("E-mail: %s\n", empresa->email);
    printf("Telefone: %s\n", empresa->telefone);
    printf("Nicho: %s\n", empresa->nicho);

    sleep(2);
    printf("\n\033[32m %s Veja os candidatos disponiveis:\033[0m", empresa->nome_empresa);
    sleep(2);
}
int main(){
    printf("Bem-Vindo a Holos Jobs!\n\n\n");
    Empresa empresa;

    Candidatos candidatos[9]; 
    dados_candidatos(candidatos); 

    log_cad_his(&empresa);
    cadastro_empresa(&empresa);
    exibir_empresa(&empresa);

    int selecao;
    int proximo;

    for(int i = 0; i <9; i++){
        printf("\n\n\nCandidato %d:\n", i+1);
        printf("Nome: %s\n", candidatos[i].nome_cand);
        printf("CPF: %s\n", candidatos[i].cpf);
        printf("Cargo: %s\n", candidatos[i].cargo);
        printf("Telefone: %s\n", candidatos[i].telefone_cand);
        printf("Email: %s\n", candidatos[i].email_cand);
        printf("Cidade: %s\n\n", candidatos[i].cidade);

        do{
        printf("\n\nPara Selecionar o Candidato Digite - 1");
        printf("\n\nPara passar para o proximo candidato Digite - 2");
        printf("\n\nDigite o numero: ");
        scanf("%d",&selecao);


            switch(selecao){
                case 1:
                printf("\n\n\033[32m %s foi Selecionado.\n Email encaminhado.\033[0m\n\n", candidatos[i].nome_cand);
                break;

                case 2:
                printf("\n\n\033[34mProximo candidato!\033[0m\n\n");
                break;

                default:
                printf("\n\n\033[31mNumero incorreto!!\033[0m\n\n");
                break;
            }
        }while(selecao > 2 || selecao < 1);
    sleep(2);
    }


    return 0;
}
