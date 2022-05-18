import threading
from math import sqrt

def isPrime(num):
	if num <= 3:
		return (not ( num < 2 ))

	if num % 2 == 0 or num % 3 == 0:
		return False

	s = int(sqrt(num))

	for i in range(5, s+1, 4):
		if num % i == 0:
			return False
		i += 2
		if num % i == 0:
			return False
			
	return True

def prime(start, stop):

	for i in range(start, stop):
		if isPrime(i):
			print(i)

NUM_MAX = 10000
nums = list(map(lambda x: x*NUM_MAX, [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))

for i in range(0, 10):
	inicio = nums[i]
	fim = nums[i+1]
	threading.Thread(target=prime, args=(inicio, fim)).start()
