# Write your MySQL query statement below
SELECT product_id,store1 As store FROM Products WHERE store1 is NOT NULL

UNION ALL

SELECT product_id,store2 As store FROM Products WHERE store2 is NOT NULL

UNION ALL


SELECT product_id,store3 As store FROM Products WHERE store3 is NOT NULL
