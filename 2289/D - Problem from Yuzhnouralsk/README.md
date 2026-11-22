<h2><a href="https://codeforces.com/contest/2289/problem/D" target="_blank" rel="noopener noreferrer">2289D — Problem from Yuzhnouralsk</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2289D](https://codeforces.com/contest/2289/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Problem from Yuzhnouralsk</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given an array of integers $$$a_1, a_2, \ldots, a_n$$$.</p><p>In one operation, you may choose an index $$$i$$$ ($$$2 \le i \le n$$$) and <span class="tex-font-style-bf">simultaneously</span> perform the following actions: </p><ul> <li> add $$$a_i$$$ to $$$a_{i-1}$$$; </li><li> if $$$i  \lt  n$$$, add $$$a_i$$$ to $$$a_{i+1}$$$; </li><li> replace $$$a_i$$$ with $$$-a_i$$$. </li></ul> In all three actions, the value of $$$a_i$$$ before the operation is used.<p>Determine whether it is possible, using some number of operations (possibly zero), to obtain an array in which all elements are nonnegative. If it is possible, find the minimum number of operations required.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$).</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the minimum number of operations after which all elements of the array will be nonnegative, or $$$-1$$$ if this is impossible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00467268491560365" id="id008363970444508123" class="input-output-copier">Copy</div></div><pre data-content="3
3
1 -1 2
2
-1 3
4
5 -3 -2 4
" id="id00467268491560365"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 -1 2</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">-1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5 -3 -2 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009901974017603277" id="id003273380898259085" class="input-output-copier">Copy</div></div><pre data-content="1
-1
4
" id="id0009901974017603277"><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">-1</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one operation with $$$i = 2$$$ is enough: the array $$$[1, -1, 2]$$$ becomes $$$[0, 1, 1]$$$.</p><p>In the second test case, the only possible operation $$$i = 2$$$ gives the array $$$[2, -3]$$$, and applying it again returns the original array. It is impossible to obtain an array in which all elements are nonnegative.</p><p>In the third test case, one can perform operations with $$$i = 2, 3, 2, 4$$$: $$$[5, -3, -2, 4] \to [2, 3, -5, 4] \to [2, -2, 5, -1] \to [0, 2, 3, -1] \to [0, 2, 2, 1]$$$. It can be shown that the obtained number of operations is minimal.</p></div>