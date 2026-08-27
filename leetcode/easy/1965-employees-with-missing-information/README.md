# Employees With Missing Information

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Table: `Employees`

```
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| employee_id | int     |
| name        | varchar |
+-------------+---------+
employee_id is the column with unique values for this table.
Each row of this table indicates the name of the employee whose ID is employee_id.

```

 

Table: `Salaries`

```
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| employee_id | int     |
| salary      | int     |
+-------------+---------+
employee_id is the column with unique values for this table.
Each row of this table indicates the salary of the employee whose ID is employee_id.

```

 

Write a solution to report the IDs of all the employees with  **missing information**. The information of an employee is missing if:

- The employee's name is missing, or
- The employee's salary is missing.

Return the result table ordered by `employee_id`  **in ascending order**.

The result format is in the following example.

 

 **Example 1:** 

```
Input: 
Employees table:
+-------------+----------+
| employee_id | name     |
+-------------+----------+
| 2           | Crew     |
| 4           | Haven    |
| 5           | Kristian |
+-------------+----------+
Salaries table:
+-------------+--------+
| employee_id | salary |
+-------------+--------+
| 5           | 76071  |
| 1           | 22517  |
| 4           | 63539  |
+-------------+--------+
Output: 
+-------------+
| employee_id |
+-------------+
| 1           |
| 2           |
+-------------+
Explanation: 
Employees 1, 2, 4, and 5 are working at this company.
The name of employee 1 is missing.
The salary of employee 2 is missing.

```

## Solution

**Language:** SQL  
**Runtime:** 114 ms  
**Memory:** 0B  
**Submitted:** 2026-08-27T11:52:22.969Z  

```sql
# Write your MySQL query statement below
SELECT e.employee_id FROM Employees e Left JOIN Salaries s ON e.employee_id=s.employee_id where e.employee_id IS NULL 

UNION 

SELECT e.employee_id FROM Salaries e Left JOIN Employees s ON e.employee_id=s.employee_id where e.employee_id IS NULL ;

```

---

[View on LeetCode](https://leetcode.com/problems/employees-with-missing-information/)