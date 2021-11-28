# Continuous-Series-Mean
Program to Calculate Arithmetic Mean of Continuous Series
# Algorithm
#### Remarks
Here, one dimensional array X of size n is used to store lower limits of  class - intervals, one dimensional array Y of size n is used to store corresponding upper limits of the class - intervals, one dimensional array Z of size n is used to hold the mid value m of the respective class - intervals, one dimensional array F of size n is used to store corresponding n values f1, f2,.., fn of the frequencies and arithmetic mean is calculated by the formula 

mean = Σfm / N , where N = Σf.

#### start
  read : n

  for i = 1 to n by 1 do :

    read Xi, Yi , Fi

  endfor

  set sum = 0

  set sf = 0

  for i = 1 to n by 1 do : 

    set Zi = ( Xi + Yi ) / 2

    set sum = sum + Zi * Fi

    set sf = sf + Fi

  endfor

  set am = sum / sf

  write : " Arithmetic Mean = ", am

#### exit
# Output
How many elements are there : 4


Enter lower limits , upper limits and frequencies of eements : 3 5 10

5 7 30

7 9 20

9 11 40

Mean of the series is : 7.8



