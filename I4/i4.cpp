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
    int vertice1;
    int vertice2;
    int peso;

public:
    Aresta(int v1, int v2, int p){
        vertice1 = v1;
        vertice2 = v2;
        peso = p;
    }

    int returnV1(){
        return vertice1;
    }

    int returnV2(){
        return vertice2;
    }

    int balanca(){
        return peso;
    }

    bool operator < (const Aresta& aresta2) const{
        return (peso < aresta2.peso);
    }
};

class Grafo{
    int V; 
    vector<Aresta> arestas;

public:
    Grafo(int nVertice){
        V = nVertice;
    }

    Grafo criaFonte(){

    }

    Grafo criaSumidouro(){
        
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