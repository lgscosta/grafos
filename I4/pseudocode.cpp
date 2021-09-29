// Classe Grafo
string concatID(string name, string number){
    return name + number;
}

// Classe Grafo
void inserePessoa(string pessoa, string tam2, int n){
    int count = n/6;

    for(int i = 0; i < count; i++){
        Aresta aresta(pessoa, concatID(tam2, i+1), peso);
        arestas.push_back(aresta);
    } 
}

// Classe Grafo
void insereFonte(int n){
    for(int i = 0; i < n; i++){
        Aresta aresta("s",  concatID("p", i+1), peso);
        arestas.push_back(aresta);
    }
}

// Classe Grafo
void insereSumidouro(int n){
    int count = n/6;

    for(int i = 0; i < count; i++){
        Aresta aresta( concatID("XXL" + i+1), "t", peso);
        arestas.push_back(aresta);

        Aresta aresta( concatID("XL" + i+1), "t", peso);
        arestas.push_back(aresta);

        Aresta aresta( concatID("L" + i+1), "t", peso);
        arestas.push_back(aresta);

        Aresta aresta( concatID("M" + i+1), "t", peso);
        arestas.push_back(aresta);

        Aresta aresta( concatID("S" + i+1), "t", peso);
        arestas.push_back(aresta);

        Aresta aresta( concatID("XS" + i+1), "t", peso);
        arestas.push_back(aresta);
    }
}

// Classe Grafo
Tupla dijkstra(Grafo completo){  // É um algoritmo direcionado, já que sabemos o
    string nome;                // o número de vértices do caminho.
    string camisa;

    // Verificar o menor caminho diferente de 0 saindo do S 

    // Gravar o vértice desse menor caminho

    // Verificar o menor caminho diferente de 0 saindo do vértice até o T

    // Gravar o vértice que está no meio

    // Retornar tupla com os vértices
    Tupla tupla = Tupla(nome, camisa);

    return tupla;
}


// Classe Grafo
int fordFulkerson(Grafo completo){
    Tupla caminho = dijkstra(completo);

    // Encontra a aresta de S até o primeiro elemento da tupla e zera o valor
    // Encontra a aresta do primeiro elemento da tupla até o segundo e zera o valor
    // Encontra a aresta do segundo elemento da tupla até T e zera o valor

}