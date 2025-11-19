CC = gcc
CFLAGS = -Wall -O2

PROGS = nao_otimizado otimizado_vetor otimizado_lista

all: $(PROGS)

nao_otimizado: p2-primos-triplos-nao-otimizado.c primo.c
	$(CC) $(CFLAGS) -o nao_otimizado p2-primos-triplos-nao-otimizado.c primo.c

otimizado_vetor: main_otimizado.c primo.c janela_vetor.c
	$(CC) $(CFLAGS) -o otimizado_vetor main_otimizado.c primo.c janela_vetor.c

otimizado_lista: main_otimizado.c primo.c janela_lista.c
	$(CC) $(CFLAGS) -o otimizado_lista main_otimizado.c primo.c janela_lista.c

clean:
	rm -f $(PROGS) *.o *.txt

test: all
	@echo "=== Testando versão NÃO OTIMIZADA ==="
	@time ./nao_otimizado > output_nao_otimizado.txt
	@echo ""
	@echo "=== Testando versão OTIMIZADA COM VETOR ==="
	@time ./otimizado_vetor > output_vetor.txt
	@echo ""
	@echo "=== Testando versão OTIMIZADA COM LISTA ==="
	@time ./otimizado_lista > output_lista.txt
	@echo ""
	@echo "=== Verificando se as saídas são idênticas ==="
	@diff output_nao_otimizado.txt output_vetor.txt && echo "✓ Não otimizado == Vetor"
	@diff output_nao_otimizado.txt output_lista.txt && echo "✓ Não otimizado == Lista"

benchmark: all
	@echo "=== BENCHMARK COMPLETO ==="
	@echo ""
	@echo "1. NÃO OTIMIZADO:"
	@/usr/bin/time -l ./nao_otimizado > /dev/null
	@echo ""
	@echo "2. OTIMIZADO COM VETOR:"
	@/usr/bin/time -l ./otimizado_vetor > /dev/null
	@echo ""
	@echo "3. OTIMIZADO COM LISTA:"
	@/usr/bin/time -l ./otimizado_lista > /dev/null

.PHONY: all clean test benchmark