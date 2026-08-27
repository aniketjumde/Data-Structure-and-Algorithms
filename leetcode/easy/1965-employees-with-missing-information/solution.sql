# Write your MySQL query statement below
SELECT e.employee_id
FROM Employees e
LEFT JOIN Salaries s
    ON e.employee_id = s.employee_id
WHERE s.employee_id IS NULL

UNION

SELECT e.employee_id
FROM Salaries e
LEFT JOIN Employees s
    ON e.employee_id = s.employee_id
WHERE s.employee_id IS NULL

ORDER BY employee_id;

