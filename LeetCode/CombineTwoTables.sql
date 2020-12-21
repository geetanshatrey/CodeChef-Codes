# Link to the problem : https://leetcode.com/problems/combine-two-tables/
# Problem Name : Combine Two Tables

# Write your MySQL query statement below
select FirstName, LastName, City, State 
from Person LEFT JOIN Address 
on Person.PersonId = Address.PersonId
; 
