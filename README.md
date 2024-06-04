# Especificações do Projeto: Sistema de Pontuação do Campeonato Brasileiro de Futebol

## 1. Entrada de Dados:

O sistema deve permitir a entrada dos nomes dos 20 times participantes do campeonato brasileiro de futebol.
Os nomes serão armazenados em um vetor.

## 2. Registro de Pontuações:

 Os resultados de cada partida serão registrados em uma matriz de dimensões 20x38, onde:
- Cada linha representa um time participante.
- Cada coluna representa uma rodada do campeonato.
- Os valores possíveis são 3, 1 ou 0, representando respectivamente vitória, empate e derrota.

## 3. Cálculo das Pontuações Finais:

- Após as 38 rodadas, o sistema deve calcular a pontuação total de cada time.
- A pontuação de cada time será a soma dos pontos obtidos em todas as rodadas.
- Deve ser gerado um vetor chamado tabela, de um tipo de dados struct, composto por dois campos: nome do time e pontuação. Nesse vetor deve ficar registrado cada time e sua pontuação final.

## 4. Apresentação dos Resultados:

- O vetor tabela, gerado no passo 3, deve ser ordenado pela pontuação, da maior para a menor.
- O sistema deve imprimir na tela o nome de cada time junto com sua pontuação final.

## 5.Pontuação do Projeto:

 A implementação do sistema será avaliada conforme a seguinte pontuação:
- Entrada dos nomes dos times: 1,0 ponto.
- Registro das pontuações em matriz: 2,0 pontos.
- Cálculo e geração do vetor de pontuações finais: 3,0 pontos.
- Ordenação da tabela de classificação: 3,0 pontos.
- Impressão da classificação final: 1,0 ponto.

