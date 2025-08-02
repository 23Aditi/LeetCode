# Write your MySQL query statement below
select e.name from Employee e
cross join Employee em
on e.id = em.managerId
group by em.managerId;

