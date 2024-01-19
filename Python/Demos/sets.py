# Jo Crandall
# March 2022
# Gonzaga University
# This program demonstrates sets in python

import numpy as np

## A set in python uses the same concepts as a set in mathematics
## Sets are unordered collections of unique items and can have cardinality, intersection, union, etc.

## Declare a reference to an empty set
set1 = set()
# print(len(set1))

## To declare a populated set, it needs to receive a SEQUENCE
set2 = set([1, 2, 3])            
set3 = set(['cat', 'dog'])
set4 = set('cat')
set5 = set(np.array([4, 5, 6]))
# print(len(set2), type(set2))
# print(len(set3), type(set3))
# print(len(set4), type(set4))
# print(len(set5), type(set5))

## The unique elements are enforced by the set, so repeated elements don't get recounted
set6 = set([1,1,2,3,3,3])
# print(len(set6), type(set2))
# print(set6)

## Sets are mutable! You can replace, add, remove things
## use set.add() to add a single element
## use set.update() to add sets of elements
# set4.add('f')
# print(set4)
# set4.add('fish')
# print(set4)
# set4.update('fish')
# print(set4)

## use set.remove() or set.discard() to take out an element
# set3.remove('cat')
# set5.discard(5)
# print(set3)
# print(set5)

## we can do all the same operations on sets that we've used previously
## for i in set:....
## if 'cat' in set:...
## if 2 not in set:...

## A union is a set containing all elements of all sets in the union
set7 = set([1,2,3])
set8 = set([3,4,5])
# set7u8 = set7.union(set8)
# print(set7u8)

## An intersection is a set containing only the elements that appear in every set in the union
set7i8 = set8.intersection(set7)
print(set7i8)

## A difference is the set of values in one set and NOT IN another set
set7d8 = set7.difference(set8)
print(set7d8)

## The symmetric difference is the OPPOSITE of the intersection
## It is the set of all elements appearing in only one of the sets involved
set7s8 = set8.symmetric_difference(set7)
print(set7s8)

## Determine if one set is contained inside another set
set9 = set('cat')
set10 = set('catfish')
# if (set9 <= set10):
#     print(set9, "is contained in", set10)

## Determine if one set contains another set
# if (set10 >= set9):
#     print(set10, "contains", set9)