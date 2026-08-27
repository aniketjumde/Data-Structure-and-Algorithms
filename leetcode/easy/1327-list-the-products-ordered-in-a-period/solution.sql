# Write your MySQL query statement below

SELECT product_name,SUM(unit) AS unit FROM Products p JOIN Orders o ON p.product_id=o.product_id  Where o.order_date>='2020-02-01' AND o.order_date<'2020-03-01' GROUP BY p.product_id HAVING SUM(unit)>=100;