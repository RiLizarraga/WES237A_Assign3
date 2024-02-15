#! /usr/bin/python

import time, sys

# Program to calculate the Fibonacci sequence up to n-th term
#nterms = 30#int(input("How many terms? "))
nterms = int(sys.argv[1])

def recur_fibo(n):
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))

tic = time.time()

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
else:
   recur_fibo(nterms)
        
tac = time.time()
print('time spent: {}'.format(tac-tic))
