# Dynamic Programming

<li>
<strong>Maximum value contiguous subsequence</strong>: Given a sequence of n real numbers, a 1 , a 2 , ..., a n ,
give an algorithm for finding a contiguous subsequence for which the value of the sum of the
elements is maximized.
</li>
<br>
<li>
<strong>Car Assembly (see Figure 15.1 in CLRS)<strong>: A factory has two assembly lines, each with n stations.
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
<strong>Two-Person Traversal of a Sequence of Cities<strong>: You are given an ordered sequence of n
cities, and the distances between every pair of cities. Design an algorithm to partition the cities
into two subsequences (not necessarily contiguous) such that person A visits all cities in the first
subsequence (in order), person B visits all cities in the second subsequence (in order), and the sum
of the total distances travelled by A and B is minimized. Assume that person A and person B
start initially at the first city in their respective subsequences.
</li>