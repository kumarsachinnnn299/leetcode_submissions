# Form a Triangle
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span style="font-family:arial,helvetica,sans-serif">Given an array of integers, we need to find out all&nbsp;possible ways&nbsp;construct&nbsp;non-<a href="https://en.wikipedia.org/wiki/Degeneracy_(mathematics)#Triangle">degenerate</a>&nbsp;triangle using array values as its sides. If no such triangle can be formed then return 0.</span></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px">Input : [5, 4, 3, 1, 2]
Output : 3
Explanation:
Sides of possible triangle are
(2 3 4), (3 4 5) and (2 4 5)</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px">Input : [4, 1, 2]
Output : 0 
No triangle is possible from given
array values</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>noOfTriangles()</strong>&nbsp;which takes the vector <strong>v[]</strong> and its size <strong>N </strong>as inputs and returns <span style="font-family:arial,helvetica,sans-serif">the count of all possible triangles that can be formed using the values from the array.</span></span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<span style="font-family:arial,helvetica,sans-serif"><strong>Constraints:</strong></span></span><br>
<span style="font-size:18px"><span style="font-family:arial,helvetica,sans-serif">1 ≤ N&nbsp;≤ 10<sup>3</sup></span><br>
<span style="font-family:arial,helvetica,sans-serif">1&nbsp;≤ A[i]&nbsp;≤ 10<sup>4</sup></span></span></p>
</div>