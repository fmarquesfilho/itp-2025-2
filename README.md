# Introdução a Técnicas de Programação (2025.2)

## Informações Gerais
- **Período:** 22/08/2025 a 15/12/2025
- **Encontros síncronos:** Segundas, Quartas e Sextas (T56 - das 16:40 às 18:20)
- **Modalidade:** Remota
- **Link de acesso:** Google Meet (disponível no SIGAA e enviado por e-mail)

## 📋 Instruções de Entrega

**📅 Data limite da Unidade 1:** 30/09/2025 às 23:59

**📖 Instruções completas de entrega:** [Ver das](./leituras/s4/instrucoes-entrega-u1.md)

### O que deve ser entregue na Unidade 1:
1. **Projeto Individual** (80% da nota)
2. **Listas de Exercícios** (20% da nota):
   - Semana 2: Variáveis, Tipos e Operadores (4 problemas)
   - Semana 3: Estruturas Condicionais (8 problemas)
   - Semana 4A: Repetições Simples (4 problemas)
   - Semana 4B: Análise e Padrões (11 questões)
   - Semana 5: Funções Parte 1 (3 problemas)
   - Semana 6: Vetores (4 problemas)
3. **Vídeo de Demonstração** (5-8 minutos)
4. **Relatório Técnico** (PDF, 3-5 páginas)

## Sistema de Avaliação e Frequência

### Composição das Notas

As avaliações ocorrerão ao final de cada unidade e serão baseadas na solução das **listas** de exercícios (20% de cada unidade) e em um **projeto individual** que vale 80% da nota de cada unidade.

**Fórmula da nota final de cada unidade:**
```
Nota da Unidade = (Projeto × 0,8) + (Média das Listas × 0,2)
```

### Controle de Frequência

A frequência será calculada com base nas entregas de cada unidade, seguindo os critérios abaixo:

#### Critério Principal
- **Se L ≥ 7,0 E P ≥ 7,0**: Nenhuma falta será atribuída na unidade
- **Se L < 7,0 OU P < 7,0**: Será calculado um número de faltas proporcional

Onde:
- **L** = Nota média das listas da unidade
- **P** = Nota do projeto da unidade

#### Cálculo das Faltas (quando aplicável)
Quando pelo menos uma das notas (listas ou projeto) for inferior a 7,0:

```
F = T - ⌊(N / 10) × T⌋

Onde:
- F = Número de faltas atribuídas
- N = min(L, P) (menor nota entre listas e projeto)
- T = Número total de encontros da unidade
- ⌊ ⌋ = Função piso (arredondamento para baixo)
```

**Exemplo prático:**
- Se uma unidade tem 15 encontros (T = 15)
- Nota das listas = 8,5 e nota do projeto = 6,0
- N = min(8,5; 6,0) = 6,0
- F = 15 - ⌊(6,0 / 10) × 15⌋ = 15 - ⌊9⌋ = 6 faltas na unidade

### Mapeamento de Conteúdos por Unidade

| Unidade | Período | Conteúdos que devem estar presentes no projeto |
|---------|---------|------------------------------------------------|
| **U1** | 22/08 a 30/09 | Variáveis com tipos bem-definidos, operações, vetores, comandos condicionais e de repetição, funções |
| **U2** | 1/10 a 27/10 | Todos os tópicos da U1 + strings, estruturas de repetição aninhadas, matrizes, ponteiros e alocação dinâmica básica |
| **U3** | 29/10 a 28/11 | Todos os tópicos das U1 e U2 + ponteiros avançados, funções complexas, arquivos, registros, enumerações, modularização |

## Entregas e Documentação

### Estrutura do Repositório

Organize seu repositório conforme especificado nas [das](./leituras/s4/instrucoes-entrega-u1.md):

```
nome-do-aluno-itp-2025-2/
├── projeto/          # Pasta do projeto principal
│   ├── src/          # Código-fonte
│   ├── include/      # Cabeçalhos (se houver)
│   ├── Makefile      # Script de compilação (opcional mas recomendado)
│   └── README.md     # Instruções de compilação e execução
├── listas/           # Soluções das listas de exercícios
│   ├── semana2-variaveis/       # Lista da Semana 2
│   ├── semana3-condicionais/    # Lista da Semana 3
│   ├── semana4-repeticoes-a/    # Lista 4A - Problemas práticos
│   ├── semana4-repeticoes-b/    # Lista 4B - Análise e padrões
│   ├── semana5-funcoes/         # Lista da Semana 5
│   └── semana6-vetores/         # Lista da Semana 6
└── README.md         # Descrição geral do repositório (este arquivo)
```

**⚠️ Importante:** Apenas o commit mais recente até **23:59 do dia da entrega** será considerado para correção.

### Estrutura do Relatório Técnico

Cada relatório deve conter:

1. **Introdução** - Contexto do projeto e objetivos
2. **Metodologia** - Ferramentas utilizadas e abordagem de desenvolvimento
3. **Análise do Código** - Explicação das principais estruturas implementadas
4. **Dificuldades e Soluções** - Desafios encontrados e como foram superados
5. **Conclusão** - Aprendizados e possíveis melhorias

### Perguntas Orientadoras para o Relatório

**Para todas as unidades:**
- Quais conceitos da unidade foram aplicados no projeto?
- Como a organização do código facilita a manutenção?
- Quais foram os principais desafios técnicos enfrentados?

**Unidade 1:**
- Como foram utilizadas as estruturas condicionais e de repetição?
- Qual a lógica por trás da organização das funções?

**Unidade 2:**
- Como foram implementadas as estruturas de dados complexas?
- Qual a estratégia para gerenciamento de memória?

**Unidade 3:**
- Como a modularização contribuiu para a qualidade do código?
- Quais técnicas de manipulação de arquivos foram utilizadas?

### Critérios de Avaliação

#### Código (Repositório Git) - 40% da nota do projeto
- **Qualidade e organização (10%)**: Estrutura de pastas, nomenclatura, indentação, comentários
- **Funcionalidade (15%)**: O programa executa conforme esperado e resolve o problema proposto
- **Aplicação dos conceitos da unidade (10%)**: Uso adequado dos tópicos estudados
- **Histórico de commits (5%)**: Commits frequentes e descritivos ao longo do desenvolvimento

#### Relatório Técnico (PDF) - 30% da nota do projeto
- **Clareza e coerência (10%)**
- **Profundidade técnica (10%)**
- **Resposta às perguntas orientadoras (10%)**

#### Vídeo (5-8 minutos) - 30% da nota do projeto
- **Demonstração do projeto (15%)**: Mostra o funcionamento do código
- **Qualidade da explicação (10%)**: Clareza, objetividade e domínio do conteúdo
- **Tempo (5%)**: Dentro do limite de 5 a 8 minutos

## Sugestões de Projetos

### Requisitos Mínimos para Projetos Diferentes dos Sugeridos
- Deve usar pelo menos 70% dos tópicos da unidade
- Ser desenvolvido em C
- Ter interface de linha de comando (CLI)
- Ser original (não copiado de repositórios públicos)
- Ter complexidade média ou alta

### Ideias de Projetos

1. **Sistema de Gerenciamento de Biblioteca**
2. **Jogo da Velha com IA Básica**
3. **Calculadora Científica com Histórico**
4. **Gerenciador de Tarefas com Persistência em Arquivo**
5. **Simulador de Banco com Múltiplas Contas**
6. **Conversor de Unidades com Interface Textual**
7. **Jogo de Campo Minado**
8. **Sistema de Cadastro de Alunos com Relatórios**
9. **Agenda de Contatos com Busca e Ordenação**
10. **Interpretador de Comandos Simples (Shell Básico)**
11. **Compressão de Texto com Algoritmo RLE**
12. **Quebra-Cabeça de 8 Peças (8-Puzzle)**
13. **Sistema de Vendas com Registro em Arquivo**
14. **Simulador de Autômatos Celulares (ex: Jogo da Vida)**
15. **Calculadora de Matrizes com Operações Avançadas**
16. **Sistema de Reserva de Passagens Aéreas**
17. **Jogo de Xadrez em Texto**
18. **Analisador Léxico para uma Linguagem Simples**
19. **Sistema de Logs com Filtros e Estatísticas**
20. **Gerenciador de Finanças Pessoais**

## Cronograma Detalhado

### **Semana 1** - Apresentação e Introdução
| Data | Dia | Atividade |
|------|-----|-----------|
| 22/08/25 | Sexta | **Apresentação do curso** |

---

### **Semana 2** - Preparação do Ambiente e Variáveis, Tipos, Operadores
| Data | Dia | Atividade |
|------|-----|-----------|
| 25/08/25 | Segunda | Instalação e configuração do ambiente |
| 27/08/25 | Quarta | **Lançamento:** Introdução, Variáveis, Tipos, Operadores |
| 29/08/25 | Sexta | Dicas para fase inicial do projeto |

---

### **Semana 3** - Condicionais
| Data | Dia | Atividade |
|------|-----|-----------|
| 01/09/25 | Segunda | Não houve encontro |
| 03/09/25 | Quarta | **Lançamento:** Condicionais |
| 05/09/25 | Sexta | Revisão e dúvidas: Condicionais |

---

### **Semana 4** - Estruturas de Repetição
| Data | Dia | Atividade |
|------|-----|-----------|
| 08/09/25 | Segunda | **Tutorial de compilação e depuração usando GCC/GDB e VS Code** |
| 10/09/25 | Quarta | **Lançamento:** Estruturas de Repetição |
| 12/09/25 | Sexta | Revisão e dúvidas: Estruturas de Repetição |

---

### **Semana 5** - Funções 1
| Data | Dia | Atividade |
|------|-----|-----------|
| 15/09/25 | Segunda | Revisão e dúvidas: Estruturas de Repetição |
| 17/09/25 | Quarta | **Lançamento:** Funções 1 |
| 19/09/25 | Sexta | Revisão e dúvidas: Funções 1 |

---

### **Semana 6** - Vetores (último conteúdo da U1)
| Data | Dia | Atividade |
|------|-----|-----------|
| 22/09/25 | Segunda | Revisão e dúvidas: Funções 1 |
| 24/09/25 | Quarta | **Lançamento:** Vetores |
| 26/09/25 | Sexta | Revisão e dúvidas: Vetores |

---

### **Semana 7** - **UNIDADE 2** - Strings
| Data | Dia | Atividade |
|------|-----|-----------|
| 29/09/25 | Segunda | Revisão e dúvidas: Vetores |
| 30/09/25 | Terça | **📅 Entrega da U1 até 23:59** - Projeto + Relatório + Listas (até Vetores) |
| 01/10/25 | Quarta | **Lançamento:** Strings |
| 03/10/25 | Sexta | **⚠️ NÃO HAVERÁ AULA** - Feriado Estadual (Dia dos Mártires de Cunhaú e Uruaçu) |

---

### **Semana 8** - Estruturas de Repetição Aninhadas
| Data | Dia | Atividade |
|------|-----|-----------|
| 06/10/25 | Segunda | Revisão e dúvidas: Strings |
| 08/10/25 | Quarta | **Lançamento:** Estruturas de Repetição Aninhadas |
| 10/10/25 | Sexta | Revisão e dúvidas: Estruturas de Repetição Aninhadas |

---

### **Semana 9** - Matrizes
| Data | Dia | Atividade |
|------|-----|-----------|
| 13/10/25 | Segunda | Revisão e dúvidas: Estruturas de Repetição Aninhadas |
| 15/10/25 | Quarta | **Lançamento:** Matrizes |
| 17/10/25 | Sexta | Revisão e dúvidas: Matrizes |

---

### **Semana 10** - Ponteiros/Alocação Dinâmica 1 (último conteúdo da U2)
| Data | Dia | Atividade |
|------|-----|-----------|
| 20/10/25 | Segunda | Revisão e dúvidas: Matrizes |
| 22/10/25 | Quarta | **Lançamento:** Ponteiros/Alocação Dinâmica 1 |
| 24/10/25 | Sexta | Revisão e dúvidas: Ponteiros/Alocação Dinâmica 1 |

---

### **Semana 11** - **UNIDADE 3** - Ponteiros/Alocação Dinâmica 2 
| Data | Dia | Atividade |
|------|-----|-----------|
| 27/10/25 | Segunda | **📅 Entrega da U2 até 23:59** - Projeto + Relatório + Listas (até Ponteiros/Alocação Dinâmica 1) |
| 29/10/25 | Quarta | **Lançamento:** Ponteiros/Alocação Dinâmica 2 |
| 31/10/25 | Sexta | Revisão e dúvidas: Ponteiros/Alocação Dinâmica 2 |

---

### **Semana 12** - Funções 2
| Data | Dia | Atividade |
|------|-----|-----------|
| 03/11/25 | Segunda | Revisão e dúvidas: Ponteiros/Alocação Dinâmica 2 |
| 05/11/25 | Quarta | **Lançamento:** Funções 2 |
| 07/11/25 | Sexta | Revisão e dúvidas: Funções 2 |

---

### **Semana 13** - Arquivos
| Data | Dia | Atividade |
|------|-----|-----------|
| 10/11/25 | Segunda | Revisão e dúvidas: Funções 2 |
| 12/11/25 | Quarta | **Lançamento:** Arquivos |
| 14/11/25 | Sexta | Revisão e dúvidas: Arquivos |

---

### **Semana 14** - Registros e Enumerações
| Data | Dia | Atividade |
|------|-----|-----------|
| 17/11/25 | Segunda | Revisão e dúvidas: Arquivos |
| 19/11/25 | Quarta | **Lançamento:** Registros e Enumerações |
| 21/11/25 | Sexta | Revisão e dúvidas: Registros e Enumerações |

---

### **Semana 15** - Modularização e Compilação (último conteúdo da U3)
| Data | Dia | Atividade |
|------|-----|-----------|
| 24/11/25 | Segunda | Revisão e dúvidas: Registros e Enumerações |
| 26/11/25 | Quarta | **Lançamento:** Modularização e Compilação |
| 28/11/25 | Sexta | Revisão e dúvidas: Modularização e Compilação |

---

### **Semana 16** - Entrega final do projeto
| Data | Dia | Atividade |
|------|-----|-----------|
| 01/12/25 | Segunda | Acompanhamento de projeto |
| 03/12/25 | Quarta | Acompanhamento de projeto |
| 05/12/25 | Sexta | **📅 Entrega final do projeto até 23:59** - Projeto + Relatório + Listas (até Modularização e Compilação) |

---

### **Semana 17** - Divulgação das notas
| Data | Dia | Atividade |
|------|-----|-----------|
| 08/12/25 | Segunda | Não haverá aula |
| 10/12/25 | Quarta | Recuperação |
| 12/12/25 | Sexta | **Encerramento do curso** |

## Feriados e Suspensões

### Feriados que Afetam o Curso
- **03/10/25** - Dia dos Mártires de Cunhaú e Uruaçu (Feriado Estadual) - **SEXTA-FEIRA** - Não haverá aula
- **28/10/25** - Dia do Servidor Público (Suspension de atividades na terça-feira). A confirmar possível suspensão na segunda-feira, dia 27/10.

## Observações Importantes

- ✅ As entregas devem ser realizadas até **23:59** das datas indicadas
- 🎥 Os conteúdos novos serão passados nas aulas de quarta-feira (aulas serão gravadas e o vídeo disponibilizado até o dia seguinte)
- 📚 As segundas e sextas serão dedicadas à revisão e solução de dúvidas
- 🔄 O calendário pode sofrer ajustes conforme a necessidade da turma
- 📤 Todas as entregas devem ser feitas via SIGAA conforme instruções específicas
- 📋 Listas de exercícios serão divulgadas semanalmente às quartas-feiras junto com as aulas gravadas
- 📖 Consulte as [das de entrega da U1](./leituras/s4/instrucoes-entrega-u1.md) para a estrutura completa dos arquivos
