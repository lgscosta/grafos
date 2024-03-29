#include <iostream>
#include <utility>
#include <limits.h>
#include <queue>
#include <string.h>
#include <list>

using namespace std;

class Tuple{
    public:

    string first;
    string second;
    
    Tuple(string f, string s){
        first = f;
        second = s;
    }
    
    string returnFirst(){
        return first;
    }
    
    string returnSecond(){
        return second;
    }

    void changeTuple(string a, string b){
        first = a;
        second = b;
    }
    
    void printTuple(){
        cout << first << " " << second << endl;
    }
};

class Reader{
    public:
    Reader(){
    }

    int readCase(){
        // list <Tuple> :: iterator it;
        Tuple tup = Tuple("luana", "eduardo");
        
        string s1;
        string s2;
        int shirts;
        int volunteers;

        cin >> shirts >> volunteers;

        vector<Tuple> sizes;
        int a = volunteers;

        while(a != 0){
            cout << "=" << a << "=" << endl;
            cin >> s1 >> s2;
            Tuple aux = Tuple(s1, s2);
            sizes.push_back(aux);

            a--;
        }
        
        // printing test
        // while(a != volunteers){
        //     cout << "+" << a << "+" << endl;
        //     sizes[a].printTuple();
        //     a++;
        // }
        
        return 1;
    }
};

class Aresta{
    string vertice1;
    string vertice2;
    int peso;

public:
    Aresta(string v1, string v2, int p){
        vertice1 = v1;
        vertice2 = v2;
        peso = p;
    }

    string returnV1(){
        return vertice1;
    }

    string returnV2(){
        return vertice2;
    }

    int balanca(){
        return peso;
    }

    Aresta emagrece(Aresta antiga){
        antiga.peso = 0;

        return antiga;
    }

};

class Grafo{
    int V; 
    vector<Aresta> arestas;

public:
    Grafo(int nVertice){
        V = nVertice;
    }

    void alteraN(int n){
        V = n;
    }

    string concatID(string name, int number){
        return name + to_string(number);
    }

    void inserePessoa(string pessoa, string tam2, int n){
        int count = n/6;
        int peso = 1;

        for(int i = 0; i < count; i++){
            Aresta aresta(pessoa, concatID(tam2, i+1), peso);
            arestas.push_back(aresta);
        } 
    }

    void insereFonte(int n){
        int peso = 1;
        
        for(int i = 0; i < n; i++){
            Aresta aresta("s",  concatID("p", i+1), peso);
            arestas.push_back(aresta);
        }
    }

    void insereSumidouro(int n){
        int count = n/6;
        int peso = 1;

        for(int i = 0; i < count; i++){
            Aresta arestaXXL = Aresta( concatID("XXL", i+1), "t", peso);
            arestas.push_back(arestaXXL);

            Aresta arestaXL = Aresta( concatID("XL", i+1), "t", peso);
            arestas.push_back(arestaXL);

            Aresta arestaL = Aresta( concatID("L", i+1), "t", peso);
            arestas.push_back(arestaL);

            Aresta arestaM = Aresta( concatID("M", i+1), "t", peso);
            arestas.push_back(arestaM);

            Aresta arestaS = Aresta( concatID("S", i+1), "t", peso);
            arestas.push_back(arestaS);

            Aresta arestaXS = Aresta( concatID("XS", i+1), "t", peso);
            arestas.push_back(arestaXS);
        }
    }

    vector<Tuple> listaID(int pessoas, int camisas){
        vector<Tuple> lista;
        Tuple aux = Tuple("0", "0");
        int count = camisas/6;
        int number = 2;

        lista.push_back(changeTuple("s", "0"));
        lista.push_back(changeTuple("t", "1"));

        for(int i = 0; i < pessoas; i++){
            lista.push_back(changeTuple(concatID("p", i+1), to_string(number)));
            number++;
        }

        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("XXL", i+1)));
            lista.push_back(changeTuple(concatID("XL", i+1)));
            lista.push_back(changeTuple(concatID("L", i+1)));
            lista.push_back(changeTuple(concatID("M", i+1)));
            lista.push_back(changeTuple(concatID("S", i+1)));
            lista.push_back(changeTuple(concatID("XS", i+1)));
            number++;
        }
    }

    Grafo dijkstra(int n){
        Grafo aux = Grafo(0);

        vector<int> vetorDist; // Vetor de distância entre os vetores
        vector<bool> bit; // true se vértice i estiver no menor caminho
 
        for (int i = 0; i < V; i++){
            vetorDist.push_back(10000); // 10000 como infinito 
            bit.push_back(false);
        }

        // Distance of source vertex from itself is always 0
        dist[src] = 0; //?????????????????

        for (int i = 0; i < n - 1; i++) {
        }

    }
};

int main(){
    int cases, i;
    vector<int> answers;
    Reader reader;

    cin >> cases;

    int aux = cases;
    while(aux != 0){
        answers.push_back(reader.readCase());
        
        aux--;
    }
    
    // printing test
    // while(aux != cases){
    //     cout << "answers: " << answers[aux] << endl;
        
    //     aux++;
    // }

}