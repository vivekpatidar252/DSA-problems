SELECT em.name
FROM Employee E
JOIN Employee em
on E.managerId = em.id
GROUP BY E.managerId
HAVING COUNT(*) >= 5
