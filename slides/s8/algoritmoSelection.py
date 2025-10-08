slideAtual = 1
import random
v = range(1, 18)
random.shuffle(v)
for atuali in range(0, 16):
	for passo in [1, 2, 3]:
		listai = range(0, 17)

		print '\only<' + str(slideAtual) + '>{'
		slideAtual += 1

		print '\\begin{table}'
		print '\\small'
		print '\\setlength{\\tabcolsep}{2pt}'
		print '\\begin{tabular}{|c|',
		for i in listai:
			print 'c|',
		print '}\n\\hline\n v[i]',
		for i in range(len(v)):
			c = 'R'
			if passo >= 2:
				if i == mi or i == atuali:
					c = 'DR'
			print '&' + '\\' + c + 'N[' + str(v[i]) + ']',
		print '\\\\\\hline '
		for i in listai:
			if i <= atuali:
				c = 'V'
			else:
				c = 'W'
			print '&' + '\\' + c + 'N[' + str(i) + ']',
		print '\\\\\\hline i '
		for i in listai:
			print '& ',
			if i == atuali:
				print '$\\uparrow$',
		print '\\\\\\hline im '
		for i in listai:
			print '& ',
			if passo == 1:
				if i == atuali:
					mi = i
					print '$\\uparrow$',
			elif passo >= 2:
				if i == mi:
					print '$\\uparrow$',
		print '\\\\\\hline\n ',
		for i in listai:
			if i > atuali:
				if v[i] < v[mi]:
					mi = i
				c = 'U'
				print '&' + '\\' + c + 'N[' + str(i) + ']',
			else:
				print '&',
		print '\\\\\\hline j '
		cont = 0
		for i in listai:
			print '&',
			if i == atuali+1:
				print '$\\drsh$',
			if i == 16:
				print '$\\dlsh$',
		if passo == 2:
			v[mi], v[atuali] = v[atuali], v[mi]
		print '\\\\\\hline'
		print '\\end{tabular}'
		print '\\end{table}'
		print '}'

