# Problem Statement
HackerLand National Bank has a simple policy for warning clients about possible fraudulent account activity. If the amount spent by a client on a particular day is greater than or equal to **2x** the client's median spending for a trailing number of days, they send the client a notification about potential fraud. The bank doesn't send the client any notifications until they have at least that trailing number of prior days' transaction data.

Given the number of trailing days ***d*** and a client's total daily expenditures for a period of  days, find and print the number of times the client will receive a notification over all ***n*** days.

For example, ***d=3*** and ***expenditures*****=[10,20,30,40,50]**. On the first three days, they just collect spending data. At day **4**, we have trailing expenditures of **[10,20,30]**. The median is **20** and the day's expenditure is **40**. Because **40>=20x20**, there will be a notice. The next day, our trailing expenditures are **[20,30,40]** and the expenditures are **50**. This is less than **2x30** so no notice will be sent. Over the period, there was one notice sent.

**Note:** The median of a list of numbers can be found by arranging all the numbers from smallest to greatest. If there is an odd number of numbers, the middle one is picked. If there is an even number of numbers, median is then defined to be the average of the two middle values.

### Function Description

Complete the function activityNotifications in the editor below. It must return an integer representing the number of client notifications.

activityNotifications has the following parameter(s):

+ expenditure: an array of integers representing daily expenditures
+ d: an integer, the lookback days for median spending

#### Input Format

The first line contains two space-separated integers ***n*** and ***d***, the number of days of transaction data, and the number of trailing days' data used to calculate median spending.
The second line contains ***n*** space-separated non-negative integers where each integer ***i*** denotes ***expenditures[i]***.

#### Constraints
+ 1<=n<=2*10<sup>5</sup>
+ 1<=d<=n
+ 0<=expenditures[i]<=200

#### Output Format

Print an integer denoting the total number of times the client receives a notification over a period of ***n*** days.

#### Sample Input 0
```
9 5
2 3 4 2 3 6 8 4 5
```
#### Sample Output 0
```
2
```
#### Sample Input 1
```
5 4
1 2 3 4 4
```
#### Sample Output 1
```
0
```
There are **4** days of data required so the first day a notice might go out is day **5**. Our trailing expenditures are **[1,2,3,4]** with a median of **2.5** The client spends **4** which is less than **2x2.5** so no notification is sent.