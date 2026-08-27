# Write your MySQL query statement below
SELECT e.employee_id FROM Employees e Left JOIN Salaries s ON e.employee_id=s.employee_id where e.employee_id IS NULL 

UNION 

SELECT e.employee_id FROM Salaries e Left JOIN Employees s ON e.employee_id=s.employee_id where e.employee_id IS NULL ;
