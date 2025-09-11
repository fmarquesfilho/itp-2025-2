## O que está acontecendo

No código, a aluna define:

```c
imc = peso / (altura * altura);
printf("Seu IMC é: %.2f\n", imc);
```

Ela informou `peso = 47` e `altura = 1.67`, e o programa retornou:

```
Seu IMC Ã©: 16,85
```

O que observamos:

1. O valor do IMC está correto (próximo de 16,85).
2. O erro visual aparece na saída como **"Ã©"** em vez de **"é"**.

---

## Sobre o erro de carácter

Este tipo de problema geralmente está relacionado à **codificação de caracteres** usada no terminal, no editor ou na saída do programa. A causa mais provável é:

* O texto `"é"` foi salvo em UTF-8, mas o terminal está interpretando esses bytes como **ISO-8859-1** (também conhecida como Latin-1) ou outro encoding incompatível.
* Como resultado, o terminal interpreta `é` como dois caracteres soltos (`Ã` e `©`).

---

## Como resolver

### 1. Ajustar a codificação do arquivo-fonte

Certifique-se de que o código-fonte esteja salvo em **UTF-8 sem BOM (Byte Order Mark)**.

* No **Visual Studio Code**, por exemplo, você pode clicar no canto inferior direito onde aparece o encoding atual e escolher "Salvar com codificação: UTF-8".

### 2. Ajustar a codificação do terminal

No **PowerShell**, você pode verificar e alterar a codificação usada com os seguintes comandos:

* Para ver a codificação atual:

  ```powershell
  chcp
  ```
* Para configurar o terminal para UTF-8:

  ```powershell
  chcp 65001
  ```

Se usar **cmd.exe**, pode fazer o mesmo. No **VS Code**, na configuração do terminal integrado, busque por `terminal.integrated.shellArgs.windows` e adicione `chcp 65001`.

### 3. Testar novamente

Após esses ajustes:

1. Reabra o arquivo para garantir que está em UTF-8.
2. Recompile:

   ```bash
   gcc problema1_calculadoradeimc.c -o problema1_calculadoradeimc
   ```
3. Execute novamente:

   ```bash
   .\problema1_calculadoradeimc
   ```

Se tudo estiver configurado corretamente, agora a saída deverá aparecer como:

```
Seu IMC é: 16.85
```

(ou, conforme o sistema e localidade, usando vírgula, se for o sistema configurado para tal, mas a questão principal do caracter estará resolvida).

---

### Recapitulando:

| Sintoma              | Provável causa                       | Solução recomendada                         |
| -------------------- | ------------------------------------ | ------------------------------------------- |
| “Ã©” no lugar de “é” | Problemas de encoding (UTF-8 vs ISO) | Salvar arquivo em UTF-8 + terminal em UTF-8 |
