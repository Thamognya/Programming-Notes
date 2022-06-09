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

# Data structures (no not that)

make our own data types just like you can in scratch

// phone book problem
we want an array of persons (which contain numbers and names) how so?
a brand new data type

```c
typdef struct
{
    string name;
    string number;
}
person;
```

typdef is the c keyword to create your own data type

struct is a realted keyword to tell that it isnt a simple data type like int or flot but that it has structure like 2 or more things in it

person is the name of the data type


2nd approach to seach for smallest numer
start left to right

# Selection Sort Demonstartion

go through the list using for loop to find smallest number

5 2 7 4 1 6 3 0

since 0 is in first place, lest swap 0 and 5

0 | 2 7 4 1 6 3 5

now forgetting 0 (since it is already solved)

0 1 7 4 2 6 3 5

and so on till you get

0 1 2 3 4 5 6 7

1:22

# Bubble Sort Demonstration

Solve simple problems = (i.e the 2 closest and put them in order forgetting if it is the current position or not just sort it so that you can get the the higher number on the left hand side)

after the first round shown below 7 or the biggest number is solved

5 2 7 4 1 6 3 0

5 2 7 4 1 6 3 0
^ ^
2 5 7 4 1 6 3 0
  ^ ^
2 5 7 4 1 6 3 0
    ^ ^
2 5 4 7 1 6 3 0
      ^ ^
2 5 4 1 7 6 3 0
        ^ ^
2 5 4 1 6 7 3 0
          ^ ^
2 5 4 1 6 3 7 0
            ^ ^
2 5 4 1 6 3 0 7


now keep the 7 out as it is already sorted and do this again

2 5 4 1 6 3 0 | 7
^ ^
2 5 4 1 6 3 0 | 7
  ^ ^
2 4 5 1 6 3 0 | 7
    ^ ^
2 4 1 5 6 3 0 | 7
      ^ ^
2 4 1 5 6 3 0 | 7
        ^ ^
2 4 1 5 3 6 0 | 7
          ^ ^
2 4 1 5 3 0 6 | 7

I am lazy to write in the rest but you can see what happens


# Selection sort

represented by the following psuedo code

For i from 0 to n–1
    Find smallest number between numbers[i] and numbers[n-1]
    Swap smallest number with numbers[i]
    // i at the first loop is 0 (the smallest / first place) so replacing the smallest number is just saying to move it back to the first place, then move on to 1 to n-1 (i.e forget about the first place or in this case the smallest)

Time Complexity: O()

n + n-1 + n-2 .... + 1

n(n + 1)/2

n^2/2 + n/2 // real

since big numbers n^2 // general

so time complexity (upper bound) = O(n^2)

Time complexity (Lower Bound) = Omega(n^2)
// still goes through the numbers the same number of times as
// n + n-1 + n-2 .... + 1

Theta(n^2)

# Bubble Sort

psuedo code

Repeat n-1 times // for the last number you have to move from the last positon to the first place (worst case) and hence have to repeat n-1 times
    For i from 0 to n–2 // you want to compare the last 2 digits of the arrays hence n-2
        If numbers[i] and numbers[i+1] out of order
            Swap them
    If no swaps
        quit


Time Complexity (upper bound): O((n-1)^2) => O(n^2)

TIme Complexity (lower bound): Omega(n-1) => Omega(n)

Both the selection sort and bubble sort are inefficent

These are comparison sort

we shall use recursion

binary search psuedo code with recursion

1  Pick up phone book
2  Open to middle of phone book
3  Look at page
4  If person is on page
5      Call person
6  Else if person is earlier in book
7      Search left half of book
8  Else if person is later in book
9     Search right half of book
10 Else
11     Quit


search is bad fucntion in psuedo code as it is recursion which we had not learnt about


# Merge Sort

Psuedo code:

If only one number
  Quit
Else
    Sort left half of number
    Sort right half of number
    Merge sorted halves


sort means calling itself i.e recursion

For any recursion there must be a base case to prvent infinte loops and etc.


Merge sorted halves  meaning

take 2 cases

2 4 5 7  0 1 3 6
both halves are sorted

close down the other numbers apart from the first number from each list

2 0

since 0 is smaller it gets in its own place and then open the next number from the half where 0 was present

0 

2   1

again 1 is smaller so

0 1 

2   3

2 is smaller so 

0 1 2

4    3 

and so on

