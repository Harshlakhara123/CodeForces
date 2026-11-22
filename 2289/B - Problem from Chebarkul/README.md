<h2><a href="https://codeforces.com/contest/2289/problem/B" target="_blank" rel="noopener noreferrer">2289B — Problem from Chebarkul</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2289B](https://codeforces.com/contest/2289/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. Problem from Chebarkul</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p>You are given an array of integers $$$a_1, a_2, \ldots, a_n$$$ and an integer $$$k$$$.</p><p>Find the number of integers $$$1 \le i \le k$$$ such that in all subsequences$$$^{\text{∗}}$$$ of the array $$$a$$$ of length $$$k$$$, the same number is located at the $$$i$$$-th position. </p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A sequence $$$b$$$ is a subsequence of a sequence $$$a$$$ if $$$b$$$ can be obtained from $$$a$$$ by the deletion of several (possibly, zero or all) element from arbitrary positions.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 2 \cdot 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the number of positions at which the same number is located in all subsequences of length $$$k$$$ of the array $$$a$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008626538290732615" id="id006338325124781126" class="input-output-copier">Copy</div></div><pre data-content="7
1 1
1
3 1
2 2 3
4 2
1 1 1 1
4 2
1 2 1 2
4 4
4 1 4 2
5 3
1 2 2 2 5
6 5
1 1 2 2 1 1
" id="id008626538290732615"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4 2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 1 2</div><div class="test-example-line test-example-line-odd test-example-line-5">4 4</div><div class="test-example-line test-example-line-odd test-example-line-5">4 1 4 2</div><div class="test-example-line test-example-line-even test-example-line-6">5 3</div><div class="test-example-line test-example-line-even test-example-line-6">1 2 2 2 5</div><div class="test-example-line test-example-line-odd test-example-line-7">6 5</div><div class="test-example-line test-example-line-odd test-example-line-7">1 1 2 2 1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002074266137203834" id="id00026685962008854536" class="input-output-copier">Copy</div></div><pre data-content="1
0
2
0
4
1
3
" id="id002074266137203834"><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">0</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-even test-example-line-4">0</div><div class="test-example-line test-example-line-odd test-example-line-5">4</div><div class="test-example-line test-example-line-even test-example-line-6">1</div><div class="test-example-line test-example-line-odd test-example-line-7">3</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the array $$$a$$$ has exactly one subsequence of length $$$1$$$, so the answer is one.</p><p>In the second test case, the array $$$a$$$ has three subsequences of length $$$1$$$: $$$[a_1]$$$, $$$[a_2]$$$, and $$$[a_3]$$$. The answer is zero, because at the first position there can be either the number $$$2$$$ or the number $$$3$$$.</p><p>In the third test case, all subsequences of length $$$2$$$ of the array $$$a$$$ are equal to $$$[1, 1]$$$, so the answer is two.</p><p>In the fourth test case, the array $$$a$$$ has six subsequences of length $$$2$$$. It is enough to consider two of them: $$$[a_1, a_4] = [1, 2]$$$ and $$$[a_2, a_3] = [2, 1]$$$. The answer for this test case is zero, because at both positions there can be either one or two.</p><p>In the fifth test case, the array $$$a$$$ has exactly one subsequence of length $$$4$$$, so the answer is four.</p></div>