import threading

def isPrime(num):
	if num == 1 or num <= 0:
		return False

	cont = 0
	for i in range(1, num+1):
		if num % i == 0:
			cont += 1

	return cont == 2

def prime(start, stop):

	for i in range(start, stop):
		if isPrime(i):
			print(i)


print("""
Opcao 1:
	Apresentar numeros primos
	entre 0 e 9999,
	com uma thread para cada
	faixa de 1000 valores
	(Aperte qualquer caractere)

Opcao 2 (Opcao do exercicio): 
	Apresentar numeros primos 
	entre 0 ate 99999 
	(Aperte '2')
""")
res = input('Opcao: ')

NUM_MAX = 1000
if res == '2':
	NUM_MAX = 10000

nums = list(map(lambda x: x*NUM_MAX, [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))

for i in range(0, 10):
	inicio = nums[i]
	fim = nums[i+1]
	threading.Thread(target=prime, args=(inicio, fim)).start()
