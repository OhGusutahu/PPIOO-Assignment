<h2 id="avaliação-comparativa-de-duas-linguagens-de-programação">Avaliação comparativa de duas linguagens de programação</h2>

<p>O objetivo deste trabalho é a avaliação comparativa de duas linguagens de
programação.</p>

<p>O trabalho é em equipe de até três pessoas. O compartilhamento de informações
entre as equipes é permitido e aconselhado, mas o compartilhamento de código
não é permitido. Trabalhos que tenham porções significativas de código iguais,
ou copiados da internet, serão anulados.</p>

<h2 id="descrição">Descrição</h2>

<p>A avaliação comparativa deve ser feita utilizando os seguintes critérios:</p>

<ul>
<li><p>Facilidade de leitura e escrita</p></li>

<li><p>Confiabilidade</p></li>

<li><p>Custo de execução</p></li>
</ul>

<p>Algumas características que afetam estes critérios e devem ser considerados na
avaliação são: simplicidade, expressividade, tipos de dados e verificação de
tipos.</p>

<p>Para dar subsídios para a comparação um avaliador passo a passo de expressões
aritméticas deve ser escrito em duas linguagens de  programação, Rust e uma das
seguintes linguagens: C, C++, Go, Java, Python, JavaScript ou TypeScript.
As duas versão devem ter testes automatizados.</p>

<p>As expressões são constituídas de números inteiros, operadores de adição (<code>+</code>),
subtração (<code>-</code>), multiplicação (<code>*</code>) e divisão (<code>/</code>) e parênteses (<code>(</code> e <code>)</code>)
e seguem a precedência e associativa comumente usada na matemática.</p>

<p>O programa deve ler as expressões da entrada padrão. Cada linha da entrada
representa um expressão. Para cada linha da entrada o programa deve dividi-la
em tokens (números, operadores e abre e fecha parênteses) e construir uma
árvore que representa a expressão (veja o algoritmo <a href="https://brilliant.org/wiki/shunting-yard-algorithm/">Shunting
Yard</a>). Em seguida, o
programa deve exibir passo a passo a avaliação da expressão, executando sempre
a expressão mais a esquerda (que pode ser avaliada). Por exemplo:</p>

<pre><code>&gt; (10 / 3 + 23) * (1 - 4)
(3 + 23) * (1 - 4)
26 * (1 - 4)
26 * -3
-78
</code></pre>

<p>Para ajudar na avaliação comparativa é sugerido escrever uma versão inicial
(com os testes e o programa principal) apenas com as operações de adição
e multiplicação. Cada versão inicial pode ser escrita por membros diferentes da
equipe que depois completam a outra implementação.</p>

<p>A lista a seguir sugere algumas funções que podem ser implementadas nos
programas:</p>

<ul>
<li><p><code>lexer</code>: recebe uma string e devolve um arranjo de tokens. Exemplo</p>

<pre><code>"31  * (4 + 10)"   -&gt;   [31, "*", "(", 4, "+", 10, ")"]
</code></pre></li>

<li><p><code>parser</code>: recebe uma lista de tokens e devolve uma árvore que representa
a expressão. Exemplo</p>

<pre><code>[31, "*", "(", 4, "+", 10, ")"]      -&gt;         *
                                              /   \
                                             31    +
                                                 /   \
                                                4    10
</code></pre></li>

<li><p><code>eval-step</code>: recebe uma árvore que representa uma expressão e devolve uma
árvore com um operador avaliado. Exemplo</p>

<pre><code>     *                        *
   /   \                    /   \
  31    +        -&gt;        31   14
      /   \
     4    10
</code></pre></li>

<li><p><code>to-string</code>: recebe uma árvore que representa um expressão e devolve uma
string que representa a mesma expressão. Exemplo</p>

<pre><code>     *
   /   \
  31    +        -&gt;        "31 * (4 + 10)"
      /   \
     4    10
</code></pre></li>
</ul>

<h3 id="entrega">Entrega</h3>

<p>A avaliação comparativa deve ser entregue impressa em papel A4. Os diretórios
dos programas devem ser zipados e enviados para o e-mail malbarbo arroba
gmail.com respeitando o limite de data e horário de entrega. Não envie arquivos
compilados, apenas os arquivos de código fonte.</p>

<h2 id="avaliação">Avaliação</h2>

<p>O trabalho será avaliado de acordo com os critérios:</p>

<ul>
<li><p>Fundamentação: a avaliação comparativa deve estar fundamenta nos aspectos
estudados em sala.</p></li>

<li><p>Completude: o programa deve estar completo, incluindo testes automatizados.</p></li>

<li><p>Corretude: o programa deve funcionar de acordo com a descrição e deve passar
em todos os testes.</p></li>

<li><p>Entendimento: o aluno deve entender o programa que entregou e ser capaz de
fazer alterações no código.</p></li>
</ul>
