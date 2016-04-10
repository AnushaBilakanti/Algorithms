# Dynamic Programming

<li>
<strong>Maximum value contiguous subsequence</strong>: Given a sequence of n real numbers, a 1 , a 2 , ..., a n ,
give an algorithm for finding a contiguous subsequence for which the value of the sum of the
elements is maximized.
</li>
<br>
<li>
<strong>Car Assembly</strong>: A factory has two assembly lines, each with n stations.
A station is denoted by S i,j where i is either 1 or 2 and indicates the assembly line the station
is on, and j indicates the number of the station. The time taken per station is denoted by a i,j .
A car chasis must pass through each of the n stations in order before exiting the factory. After
it passes through station S i,j it will continue to station S i,j+1 unless it decides to transfer to the
other line. Continuing on the same line incurs no extra cost, but transfering from line i at station
j − 1 to station j on the other line takes time t i,j . There is also an entry time e i and exit time x i
which may be different for the two lines. Give an algorithm for computing the minimum time it
will take to build a car chasis.
</li>
<br>
<li>
<strong>Two-Person Traversal of a Sequence of Cities</strong>: You are given an ordered sequence of n
cities, and the distances between every pair of cities. Design an algorithm to partition the cities
into two subsequences (not necessarily contiguous) such that person A visits all cities in the first
subsequence (in order), person B visits all cities in the second subsequence (in order), and the sum
of the total distances travelled by A and B is minimized. Assume that person A and person B
start initially at the first city in their respective subsequences.
</li>
<br>
<li>
<strong>Longest Common Sequence</strong>: Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”. So a string of length n has 2^n different possible subsequences.
</li>
<br>
<li>
<strong>N queen</strong>: The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other. For example, following is a solution for 4 Queen problem.
</li>
<br>
<li>
<strong>Making Change</strong>: You are given n types of coins with values v 1 , ..., v n and a cost C. You may
assume v 1 = 1 so that it is always possible to make any cost. Give an algorithm for finding the
smallest number of coins required to sum to C exactly.
For example, assume you coins of values 1, 5, and 10. Then the smallest number of coins to make
26 is 4: 2 coins of value 10, 1 coin of value 5, and 1 coin of value 1.
</li>
<br>
<li>
<strong>Longest Increasing Subsequence</strong>: problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, length of LIS for { 10, 22, 9, 33, 21, 50, 41, 60, 80 } is 6 and LIS is {10, 22, 33, 50, 60, 80}
</li>
<br>
<li>
<strong>Balanced Paritions</strong>: Suppose you are given an array of n integers {a 1 , ..., a n } between 0 and M .
Give an algorithm for dividing these integers into two sets x and y such that | x i ∈x x i − y i ∈y y i |,
the difference of the sum of the integers in each set, is minimized. For example, given the set
{2, 3, 2, 7, 9}, you can divide it into {2, 2, 7} (sums to 11) and {3, 9} (sums to 12) for a difference
of 1.
</li>
<br>
<li>
<strong>Edit Distance</strong>: Given two text strings A = a 1 a 2 ...a n of length n and B = b 1 b 2 ...b m of length
m, you want to transform A into B with a minimum number of operations of the following types:
delete a character from A, insert a character into A, or change some character in A into a new
character. The minimal number of such operations required to transform A into B is called the
edit distance between A and B. Give an algorithm for finding the edit distance from A to B.
</li>
<br>
<li>
<strong>String Break</strong>: A certain string-processing language offers a primitive operation which splits a string into two pieces. Since this operation involves copying the original string, it takes n units of time for a string of length n, regardless of the location of the cut. Suppose, now, that you want to break a string into many pieces. The order in which the breaks are made can affect the total running time. For example, if you want to cut a 20-character string at positions 3 and 10, then making the first cut at position 3 incurs a total cost of 20+17=37, while doing position 10 first has a better cost of 20+10=30.
</li>
<br>