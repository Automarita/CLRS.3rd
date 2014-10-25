Sorting Algorithms Box
=========================

Discription
-----------
It's a simple "Sorting Algorithms Box" for self-learning.

* `mysort` is the main program to switch different algorithm to test, note this program only read the input from file (including pipe), if you try to make a manual input, you will fall in a dead loop to ask your inputs.
* `rand_num_gen` to generate a line of random number which may be the input of any sorting process. Note these numbers may going too large.
* `serial_num_gen` to generate a increased order series start from  (-100 ~ -91) and with delta (0~9).
* `reverser` to reverse a given series.
* `shuffler` to shuffle a given series. <This part ought to be analysed again>

Usage
-----
Execute `make` in this directory, and you will get two binaries `mysort` and `rand_num_gen`.  You should prepare an input file to test just generate one from `rand_num_gen`,  and by using redirection or pipe to `mysort` to finish a test case, note the default output is the terminal.

Example
-----
```
make
./rand_num_gen 1000 | ./mysort quick > output
echo "45 34 2 -45 0 2" > input
./mysort insertion < input
./serial_num_gen 1000 | ./reverser | ./mysort heap
(etc.)
```

### Welcome to post issues !

I should implement such algorithm by python as I can draw some chart to make something visible, shouldn't I ?

