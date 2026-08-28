# Write your MySQL query statement below
SELECT employee_id , department_id
FROM Employee
GROUP BY employee_id
HAVING COUNT(*) = 1

UNION 

Select employee_id , department_id
FROM Employee
Where primary_flag = 'Y'
