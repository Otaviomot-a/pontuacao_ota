#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << endl << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;

    double compras, ticket, atrasos, pagar;

    cout << "Quantas compras o cliente fez no ultimo ano? "; cin >> compras;
    cout << "Qual o ticket medio? "; cin >> ticket;

    cout << endl << "Quantas vezes o cliente atrasou o pagamento? "; cin >> atrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B) "; cin >> pagar;

    return 0;
}
