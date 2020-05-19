#include <bits/stdc++.h>

using namespace std;

int main(){

//cabeçalho
    cout << endl << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;

    double compras, ticket, atrasos, pagar, mediav, pontuacao1, pontuacao2, pontuacao3;
    string formadpagar;
//volume
    cout << "Quantas compras o cliente fez no ultimo ano? "; cin >> compras;
    cout << "Qual o ticket medio? "; cin >> ticket;
//dados
    cout << endl << "Quantas vezes o cliente atrasou o pagamento? "; cin >> atrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B) "; cin >> pagar;
//score compras
    if (mediav == 0) {
        pontuacao1 = 0;
        }
    else if (mediav <= 3000 && compras <= 2) {
        pontuacao1 = 20;
        }
    else if (mediav <= 3000 && compras > 2) {
        pontuacao1 = 40;
        }
    else {
        pontuacao1 = 60;
        }
    cout << endl << "Score de volume de compras = " << pontuacao1 << " pontos" << endl;

//inadimplecia
    if (atrasos > 1 || compras == 0){
        pontuacao2 = 0;
    }
    if (compras >= 1 && atrasos == 1){
        pontuacao2 = 15;
    }
    if(compras >= 1 && atrasos == 0){
        pontuacao2 = 30;
    }

    cout << "Score de idadimplecia = " << pontuacao2 << " pontos" << endl;

    //pagamento

    if (formadpagar == "D" && compras > 0){
        pontuacao3 = 5;
    }
    if (formadpagar == "C" || formadpagar == "B" && compras > 0){
        pontuacao3 = 10;
    }
    cout << "Score de forma de pagamento = " << pontuacao3 << " pontos" << endl;
    if (pontuacao1 + pontuacao2 + pontuacao3 <= 25){
        cout << endl << "Classificacao final = CLIENTE BRONZE" << endl;
    }
    else if (pontuacao1 + pontuacao2 + pontuacao3 < 75) {
       cout << endl << "Classificacao final = CLIENTE PRATA" << endl;
    }
    if (pontuacao1 + pontuacao2 + pontuacao3 > 75){
       cout << endl << "Classificacao final = CLIENTE OURO" << endl;
    }
    return 0;

}
