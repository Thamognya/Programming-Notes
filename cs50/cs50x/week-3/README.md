# Recap

## Memeory (RAM) photograph shown

Counted from 0 to 2 billion if you had 2 gb of memory

String = an array of charecters

array = indexed set of things -> pertain to memory -> contingous memory

we will see 2d and even shapes of array comming soon

we will focus on inputs to outputs (algorithms)

# Algorithms

you can eyeball the array is from a bird eye view but a computer cannot -> it is more liek a closed doors (not locked) which has to be opened to see the data in each location -> hence the need for methodically looking

fortunately we have building blocks using loops conditions that methodically goes from left to right 

or more complex

arrays are 0 indexed

searching

input -> algo -> output

good designed = readabilty and efficency

a piece of code is in terms of big O notatio it means the time of some algorithms

convey speed of code without millisencods or this many steps

from week 0 (phonebook algo)

first one: moving a page at a time -> n steps -> O(n)
second: moving two pages at atime -> n/2 steps -> double the speed of first one -> O(n/2)
third: the half page removal at atime -> log_2_(n) steps -> fundamentaly differnte -> O(log(n))

zooming out x-axis large -> fist and second algo larger but third one gets better and better

for loop -> O(n)

commonly seen list of O(n) running times in this course 

O -> upper bound of running time

omega (capital) -> lower bound on running time of algo

big theta -> where upper bound = lower bound so use this

larger mathematical expression -> slower it is

O(1) is the holy grail is the best as something is larger it only take a finite fo steps

greater the value of n the slower the code O(n^2) > O(n)

# Linear search

left to right or right to left just straight to no some locker and other locker

left to right or right to left -> good as you can do without knowing anything

psuedo code

for each door from left to right
    if numbe ris behind door 
        return true
return false

wrong psudeo code
for each door from left to right
    if numbe ris behind door 
        return true
    else
        return false # issue since after checking one slot it is false (without checking other boxes)


low level psudeo code

for i from 0 to n-1:
    if number behind doors[i]
        return true
return false

the for loop executes for n times

the inner step if number == door[i] one step -> const steps

return -> one step -> const steps

inside for loop you are doing const steps

O(n) -> because you are doing n things 

omega(1) -> if she is lucky where it begins for linear search

# Binary Search - Phone book algo

if the numbers are ordered (regardless) this algo cna work

then start at middle, throw away side you dont need, next half and continue until you find the number

if no doors

else
for i in n - 1:
    if (door[i] == my_num):
        return true
    elseif (number > middle door):
        search right half
    else
        search left half
return false


