# Problem Statement
You will be given a list of integers, ***arr***, and a single integer ***k***. You must create an array of length ***k*** from elements of ***arr*** such that its unfairness is minimized. Call that array ***subarr***. Unfairness of an array is calculated as
***max(subarr) - min(subarr)***
Where:
- max denotes the largest integer in ***subarr***
- min denotes the smallest integer in ***subarr***

As an example, consider the array **[1,4,7,2]** with a ***k*** of **2**. Pick any two elements, test ***subarr*** **= [4,7]**.
***unfairness*** **= max(4,7) - min(4,7) = 7 - 4 = 3**
Testing for all pairs, the solution **|1,2|** provides the minimum unfairness.

**Note**: Integers in ***arr** may not be unique.

### Function Description

Complete the maxMin function in the editor below. It must return an integer that denotes the minimum possible value of unfairness.

maxMin has the following parameter(s):

+ k: an integer, the number of elements in the array to create
+ arr: an array of integers .

#### Input Format

The first line contains an integer ***n***, the number of elements in array ***arr***.
The second line contains an integer ***k***.
Each of the next ***n*** lines contains an integer ***arr[i]*** where 0 <= i < n.

#### Constraints
+ 2<=n<=10<sup>5</sup>
+ 2<=k<=n
+ 0<=arr[i]<=10<sup>9</sup>

#### Output Format

An integer that denotes the minimum possible value of unfairness.

#### Sample Input 0
```
7
3
10
100
300
200
1000
20
30
```
#### Sample Output 0
```
20
```
#### Explanation 0

Here ***k = 3***; selecting the **3** integers **10,20,30**, unfairness equals
```
max(10,20,30) - min(10,20,30) = 30 - 10 = 20
```