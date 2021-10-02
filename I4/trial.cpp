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

    /*int readCase(){
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
    }*/

    int readCase(){
        // list <Tuple> :: iterator it;
        Tuple tup = Tuple("luana", "eduardo");
        
        string s1;
        string s2;
        int shirts;
        int volunteers;

        cin >> shirts >> volunteers;

        int count = shirts + volunteers + 1; // seria mais 2 (fonte e sumidouro)
                                             // mas vetor é 1 a menos
        vector<Tuple> ids = listaID(volunteers, shirts);
        int matriz[count][count];

        // inicializa a matriz
        for(int i = 0; i < count; i++){
            for(int j = 0; j < count; j++){
                matriz[i][j] = 0;
            }
        }

        // relação s e pessoas
        for(int i = 0; i < volunteers; i++){
            matriz[0][i+2] = 1; // i + 2 porque 0 = s e 1 = t.
        }

        // relação t e camisas
        for(int i = 0; i < volunteers; i++){
            matriz[0][i+2+volunteers] = 1;
        }


        vector<Tuple> sizes;
        int a = volunteers;

        int index = shirts/6;
        int camisa1 = 2 + volunteers;

        // relação camisas e pessoas
        while(int i = 0; i < volunteers; i++){
            cin >> s1 >> s2;
            camisa1 = camisa1 + i;
            
            for(int j = 0; j < index; j++){
                camisa1 = camisa1 + j;
                matriz[i+2][camisa1] = 1;
            }
        }

        /*while(a != 0){
            cout << "=" << a << "=" << endl;
            cin >> s1 >> s2;
            Tuple aux = Tuple(s1, s2);
            sizes.push_back(aux);

            a--;
        }*/
        
        return 1;
    }
};

class Grafo{
    int V; 
    int grafo[V][V];

public:
    Grafo(int nVertice){
        V = nVertice;
    }

    void alteraN(int n){
        V = n;
    }

    void alteraGrafo(int novo[N][N]){
        grafo = novo;
    }

    string concatID(string name, int number){
        return name + to_string(number);
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
        }

        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("XL", i+1)));
        }
            
        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("L", i+1)));
        }
            
        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("M", i+1)));
        }
            
        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("S", i+1)));
        }
            
        for(int i = 0; i < count; i++){
            lista.push_back(changeTuple(concatID("XS", i+1)));
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