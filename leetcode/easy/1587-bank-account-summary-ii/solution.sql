# Write your MySQL query statement below
SELECT u.name,SUM(t.amount) As balance FROM Users u JOIN Transactions t ON u.account=t.account GROUP BY t.account Having SUM(t.amount)>10000;