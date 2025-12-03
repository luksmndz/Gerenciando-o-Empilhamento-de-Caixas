#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Carga {
    int id_caixa;
    float peso_kg;
    string destino;
};

int main() {
    stack<Carga> pilha;


    Carga c1 = {501, 15.5, "Setor Leste"};
    Carga c2 = {502, 22.0, "Setor Oeste"};
    Carga c3 = {503, 10.1, "Setor Norte"};

    pilha.push(c1);
    pilha.push(c2);
    pilha.push(c3);

    cout << "Proxima caixa a ser removida:\n";
    cout << "ID: " << pilha.top().id_caixa << endl;
    cout << "Destino: " << pilha.top().destino << endl;
    cout << endl;

    for(int i = 0; i < 2; i++) {
        Carga caixa = pilha.top();
        cout << "Caixa " << caixa.id_caixa << " removida para processamento.\n";
        pilha.pop();
    }
    cout << endl;

    cout << "Nova caixa no topo da pilha:\n";
    cout << "ID: " << pilha.top().id_caixa << endl;

    cout << "Tamanho atual da pilha: " << pilha.size() << endl;

    return 0;
}
