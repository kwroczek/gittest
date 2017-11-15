#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sumuj(x, y):
    return x + y

def odejmij(x, y):
    return x - y
    
def iloraz(x, y):
    return x * y
    
def iloczyn(x, y):
    return x / y

a = int(input('podaj liczbę:'))
b = int(input('podaj liczbę:'))
print('suma:', sumuj (a, b))
print('różnica: ', odejmij (a, b))

