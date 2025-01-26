# RELATÓRIO E README

O código acima demonstra a diferenca entre os métodos de ordenacao quicksort e bubblesort em um array de 300.000 itens. Os itens, a fins de ilustracao,
são pratos de um restaurante e foram ordenados com base na sua prioridade (decrescente) e como critério de desempate, o menor tempo de preparo.

Os algoritmos tiveram uma diferenca significativa de tempo: enquanto o bubblesort levou, em média, 420 segundos para ordenar o array, o quicksort levou
apenas 0.05 segundos. Essa diferenca esta de acordo com a expectativa a partir da analise de eficiencia de algoritmos, considerando que o bubblesort
é n² e o quicksort é log(n).


## ESCOLHA DE PIVÔS

Realizei dois testes para a escolha de pivôs: 
- mediana entre os valores da esquerda, direita, e meio;
- valor do meio do array;

No caso da mediana, foi necessário ordenar os valores para encontrar a mediana, o que foi feito com um bubble sort. Isso aumentou o tempo do algoritmo
para 0.07 segundos, portanto para a versão final usei o valor do meio do array.
