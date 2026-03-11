#include <iostream>
using namespace std;

// Exercício A - Ler 10 números e mostrar o vetor
void A() {
    int v[10]; // vetor com 10 posições

    cout << "Digite 10 elementos:\n";
    for(int i=0;i<10;i++){
        cin >> v[i]; // leitura dos valores
    }

    cout << "Vetor:\n";
    for(int i=0;i<10;i++){
        cout << v[i] << " "; // exibe os valores do vetor
    }
    cout << endl;
}

// Exercício B - Ler 8 números e criar outro vetor com o triplo
void B(){
    int A[8], B[8]; // dois vetores com 8 posições

    cout << "Digite 8 elementos:\n";
    for(int i=0;i<8;i++){
        cin >> A[i]; // lê os valores do vetor A
        B[i] = A[i] * 3; // guarda em B o triplo de A
    }

    cout << "Vetor B:\n";
    for(int i=0;i<8;i++){
        cout << B[i] << " "; // mostra o vetor B
    }
    cout << endl;
}

// Exercício C - Subtrair dois vetores
void C(){
    int A[20], B[20], C[20]; // três vetores com 20 posições

    cout << "Digite 20 elementos do vetor A:\n";
    for(int i=0;i<20;i++){
        cin >> A[i]; // leitura do vetor A
    }

    cout << "Digite 20 elementos do vetor B:\n";
    for(int i=0;i<20;i++){
        cin >> B[i]; // leitura do vetor B
    }

    for(int i=0;i<20;i++){
        C[i] = A[i] - B[i]; // subtração elemento por elemento
    }

    cout << "Vetor C:\n";
    for(int i=0;i<20;i++){
        cout << C[i] << " "; // mostra o vetor resultado
    }
    cout << endl;
}

// Exercício D - Mostrar número e seu quadrado
void D(){
    int A[15], B[15]; // dois vetores

    cout << "Digite 15 elementos:\n";
    for(int i=0;i<15;i++){
        cin >> A[i]; // leitura do vetor A
        B[i] = A[i] * A[i]; // B recebe o quadrado de A
    }

    cout << "Vetor A:\n";
    for(int i=0;i<15;i++){
        cout << A[i] << " "; // mostra vetor A
    }

    cout << "\nVetor B:\n";
    for(int i=0;i<15;i++){
        cout << B[i] << " "; // mostra vetor B
    }
    cout << endl;
}

// Exercício E - Juntar dois vetores em um terceiro
void E(){
    int A[15], B[15], C[30]; // C terá espaço para os dois vetores

    cout << "Digite 15 elementos do vetor A:\n";
    for(int i=0;i<15;i++){
        cin >> A[i]; // leitura do vetor A
    }

    cout << "Digite 15 elementos do vetor B:\n";
    for(int i=0;i<15;i++){
        cin >> B[i]; // leitura do vetor B
    }

    for(int i=0;i<15;i++){
        C[i] = A[i]; // primeira metade recebe A
        C[i+15] = B[i]; // segunda metade recebe B
    }

    cout << "Vetor C:\n";
    for(int i=0;i<30;i++){
        cout << C[i] << " "; // mostra o vetor combinado
    }
    cout << endl;
}

// Exercício F - Juntar vetores de tamanhos diferentes
void F(){
    int A[20], B[30], C[50]; // C terá espaço para todos

    cout << "Digite 20 elementos do vetor A:\n";
    for(int i=0;i<20;i++){
        cin >> A[i]; // leitura de A
        C[i] = A[i]; // copia para C
    }

    cout << "Digite 30 elementos do vetor B:\n";
    for(int i=0;i<30;i++){
        cin >> B[i]; // leitura de B
        C[i+20] = B[i]; // continua preenchendo C
    }

    cout << "Vetor C:\n";
    for(int i=0;i<50;i++){
        cout << C[i] << " "; // mostra o vetor final
    }
    cout << endl;
}

// Exercício G - Criar vetor invertido
void G(){
    int A[20], B[20]; // dois vetores

    cout << "Digite 20 elementos:\n";
    for(int i=0;i<20;i++){
        cin >> A[i]; // leitura do vetor A
    }

    for(int i=0;i<20;i++){
        B[i] = A[19-i]; // copia os valores de A em ordem inversa
    }

    cout << "Vetor A:\n";
    for(int i=0;i<20;i++){
        cout << A[i] << " "; // mostra vetor original
    }

    cout << "\nVetor B:\n";
    for(int i=0;i<20;i++){
        cout << B[i] << " "; // mostra vetor invertido
    }
    cout << endl;
}

int main(){
    int op; // variável para escolher a opção do menu

    do{
        // menu de opções
        cout << "\nMENU\n";
        cout << "1 - Exercicio A\n";
        cout << "2 - Exercicio B\n";
        cout << "3 - Exercicio C\n";
        cout << "4 - Exercicio D\n";
        cout << "5 - Exercicio E\n";
        cout << "6 - Exercicio F\n";
        cout << "7 - Exercicio G\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> op;

        // executa a função conforme a escolha
        switch(op){
            case 1: A(); break;
            case 2: B(); break;
            case 3: C(); break;
            case 4: D(); break;
            case 5: E(); break;
            case 6: F(); break;
            case 7: G(); break;
        }

    }while(op!=0); // repete até o usuário escolher sair

    return 0; // fim do programa
}