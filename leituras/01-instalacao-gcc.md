# Guia de Instalação e Teste do GCC
## Introdução às Técnicas de Programação

### Sumário
- [Introdução](#introdução)
- [Windows](#windows)
- [macOS](#macos)
- [Linux Ubuntu/Debian](#linux-ubuntudebian)
- [Linux Fedora/Red Hat](#linux-fedorared-hat)
- [Linux Arch](#linux-arch)
- [Testando a Instalação](#testando-a-instalação)
- [Compilando e Executando um Programa](#compilando-e-executando-um-programa)
- [Solução de Problemas Comuns](#solução-de-problemas-comuns)
- [Referências](#referências)

---

## Introdução

O GCC (GNU Compiler Collection) é uma coleção de compiladores para diversas linguagens de programação, incluindo C. Este guia fornece instruções detalhadas para instalação e teste do GCC em diferentes sistemas operacionais.

---

## Windows

### Opção 1: MinGW-w64 (Recomendado)

**Passo 1:** Baixe e instale o MSYS2
- Acesse https://www.msys2.org/
- Baixe o instalador para Windows
- Execute o instalador seguindo as instruções padrão
- Após a instalação, abra o terminal MSYS2

**Passo 2:** Atualize o sistema de pacotes
```bash
pacman -Syu
```

**Passo 3:** Instale o GCC
```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
pacman -S mingw-w64-ucrt-x86_64-gdb
```

**Passo 4:** Configure as variáveis de ambiente
- Adicione `C:\msys64\ucrt64\bin` ao PATH do sistema
- Reinicie o terminal ou computador

### Opção 2: WSL (Windows Subsystem for Linux)

**Passo 1:** Habilite o WSL
- Abra o PowerShell como administrador
- Execute: `wsl --install`
- Reinicie o computador

**Passo 2:** Instale uma distribuição Linux
- Abra a Microsoft Store
- Instale Ubuntu 22.04 LTS ou distribuição similar
- Configure usuário e senha

**Passo 3:** Instale o GCC no WSL
```bash
sudo apt update
sudo apt install build-essential
```

---

## macOS

### Opção 1: Xcode Command Line Tools (Recomendado)

**Passo 1:** Abra o Terminal
- Pressione `Cmd + Espaço` e digite "Terminal"

**Passo 2:** Instale as ferramentas de linha de comando
```bash
xcode-select --install
```

**Passo 3:** Confirme a instalação
- Uma janela popup aparecerá
- Clique em "Instalar" e aguarde o download

### Opção 2: Homebrew

**Passo 1:** Instale o Homebrew (se não tiver)
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

**Passo 2:** Instale o GCC
```bash
brew install gcc
```

### Opção 3: MacPorts

**Passo 1:** Baixe e instale o MacPorts
- Acesse https://www.macports.org/install.php
- Baixe o instalador para sua versão do macOS

**Passo 2:** Instale o GCC
```bash
sudo port install gcc13
```

---

## Linux Ubuntu/Debian

### Instalação Padrão

**Passo 1:** Atualize o sistema de pacotes
```bash
sudo apt update
sudo apt upgrade
```

**Passo 2:** Instale o build-essential
```bash
sudo apt install build-essential
```

**Passo 3:** Instale ferramentas adicionais (opcional)
```bash
sudo apt install gdb valgrind
```

---

## Linux Fedora/Red Hat

### Instalação com DNF (Fedora)

**Passo 1:** Atualize o sistema
```bash
sudo dnf update
```

**Passo 2:** Instale as ferramentas de desenvolvimento
```bash
sudo dnf groupinstall "Development Tools"
sudo dnf install gcc gcc-c++
```

### Instalação com YUM (Red Hat/CentOS)

**Passo 1:** Atualize o sistema
```bash
sudo yum update
```

**Passo 2:** Instale as ferramentas de desenvolvimento
```bash
sudo yum groupinstall "Development Tools"
sudo yum install gcc gcc-c++
```

---

## Linux Arch

### Instalação com Pacman

**Passo 1:** Atualize o sistema
```bash
sudo pacman -Syu
```

**Passo 2:** Instale o GCC e ferramentas base
```bash
sudo pacman -S base-devel
```

**Passo 3:** Instale ferramentas adicionais
```bash
sudo pacman -S gdb valgrind
```

---

## Testando a Instalação

### Verificação da Versão

Execute os seguintes comandos no terminal para verificar se o GCC foi instalado corretamente:

```bash
gcc --version
g++ --version
```

### Verificação de Ferramentas Auxiliares

```bash
gdb --version
make --version
```

---

## Compilando e Executando um Programa

### Programa de Teste em C

Crie um arquivo chamado `oi.c` com o seguinte conteúdo:

```c
#include <stdio.h>

int main() {
    printf("Oi, Mundo!\n");
    printf("GCC instalado com sucesso!\n");
    return 0;
}
```

### Compilação Básica

```bash
gcc oi.c -o oi
```

### Execução

**Linux/macOS/WSL:**
```bash
./oi
```

**Windows (MinGW):**
```bash
oi.exe
```

### Compilação com Opções Úteis

```bash
# Compilação com avisos (warnings) do compilador habilitados
gcc -Wall oi.c -o oi

# Compilação para debug
gcc -g -Wall oi.c -o oi
```

---

## Solução de Problemas Comuns

### Windows

**Problema:** "gcc não é reconhecido como comando interno ou externo"
**Solução:** Verifique se o PATH foi configurado corretamente e reinicie o terminal.

**Problema:** Erro de permissão no Windows
**Solução:** Execute o terminal como administrador ou verifique as permissões da pasta de instalação.

### macOS

**Problema:** "xcrun: error: invalid active developer path"
**Solução:** Execute `sudo xcode-select --reset` e reinstale as ferramentas de linha de comando.

**Problema:** Compilação falha com erros de header
**Solução:** Certifique-se de que as Xcode Command Line Tools estão atualizadas.

### Linux

**Problema:** "bash: gcc: command not found"
**Solução:** Verifique se o pacote foi instalado corretamente e se está no PATH.

**Problema:** Erro de permissão durante a instalação
**Solução:** Use `sudo` antes dos comandos de instalação.

### Problemas Gerais

**Teste de Compilação Falha:**
1. Verifique se não há erros de sintaxe no código
2. Confirme que as extensões dos arquivos estão corretas (.c para C, .cpp para C++)
3. Verifique se há espaços ou caracteres especiais nos nomes dos arquivos

---

## Referências

1. **Documentação Oficial do GCC**
   - GNU Compiler Collection Documentation: https://gcc.gnu.org/documentation.html
   - GCC Manual: https://gcc.gnu.org/onlinedocs/gcc/

2. **Instalação por Sistema Operacional**
   - MSYS2 (Windows): https://www.msys2.org/
   - Homebrew (macOS): https://brew.sh/
   - Ubuntu Packages: https://packages.ubuntu.com/

3. **Tutoriais e Guias**
   - GNU Make Manual: https://www.gnu.org/software/make/manual/
   - GDB Documentation: https://www.gnu.org/software/gdb/documentation/

4. **Material Acadêmico Complementar**
   - Kernighan, B. W., & Ritchie, D. M. (1988). *The C Programming Language*. 2nd Edition. Prentice Hall.
   - GNU/Linux Command-Line Tools Summary: https://tldp.org/LDP/GNU-Linux-Tools-Summary/html/

5. **Comunidade e Suporte**
   - Stack Overflow - Tag GCC: https://stackoverflow.com/questions/tagged/gcc
   - Reddit r/C_Programming: https://www.reddit.com/r/C_Programming/


**Data de criação:** Agosto de 2025  
**Versão:** 1.0