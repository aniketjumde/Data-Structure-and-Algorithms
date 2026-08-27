# Write your MySQL query statement below
SELECT user_id,MAX(time_stamp) As last_stamp FROM Logins where time_stamp>='2020-01-01' AND time_stamp<'2021-01-01' GROUP BY user_id;