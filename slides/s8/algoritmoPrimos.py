slideAtual = 1
primos = []
for atuali in range(1, 18):
	listai = range(1, 18)
	listaj = range(1, atuali)

	print '\only<' + str(slideAtual) + '>{'
	slideAtual += 1
	print '\\begin{table}'
	print '\\small'
	print '\\setlength{\\tabcolsep}{2pt}'
	print '\\begin{tabular}{|c|',
	for i in listai:
		print 'c|',
	print '}\n\\hline\n ',
	for i in listai:
		if i == atuali:
			c = 'V'
		else:
			c = 'W'
		print '&' + '\\' + c + 'N[' + str(i) + ']',
	print '\\\\\\hline \VN[i] '
	for i in listai:
		print '& ',
		if i == atuali:
			print '$\\uparrow$',
	print '\\\\\\hline\n ',
	for i in listai:
		if i <= atuali:
			#			if atuali%i == 0:
			#	out = '\\textbf{' + str(i) + '}'
			#else:
			#	out = str(i)
			if atuali%i == 0:
				c = 'U'
			else:
				c = 'U'
			print '&' + '\\' + c + 'N[' + str(i) + ']',
		else:
			print '&',
	print '\\\\\\hline \ZN[j] '
	cont = 0
	for i in listai:
		if atuali%i == 0:
			cont += 1
		print '&',
		if i == 1:
			print '$\\drsh$',
		if i == atuali:
			print '$\\dlsh$',
	print '\\\\\\hline'
	print '\\end{tabular}'
	print '\\end{table}'
	print '\\begin{itemize}'
	print '\\item Para i = ' + str(atuali) + ', ao final do for j, cont = ', cont
	if cont == 2:
		primos.append(atuali)
	print '\\item'
	print '\\textbf{output: }' + str(primos)
	print '\\end{itemize}'
	print '}'

